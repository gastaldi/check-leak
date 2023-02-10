/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements. See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.checkleak.core.testdata;

import java.lang.reflect.Field;

import org.checkleak.core.JVMTIFieldsMetadata;
import org.junit.Assert;
import org.junit.Test;

/**
 * This is accordingly to the specification from https://docs.oracle.com/en/java/javase/11/docs/specs/jvmti.html,
 * look for jvmtiHeapReferenceInfoField on the doc ^^
 */

public class TestMetaField {

   @Test
   public void testMeta() {
      JVMTIFieldsMetadata metadata = new JVMTIFieldsMetadata();
      Field[] fields = metadata.getFields(C1.class);
      Assert.assertTrue(fields[2].getName().equals("a"));
      fields = metadata.getFields(C2.class);
      Assert.assertTrue(fields[4].getName().equals("a"));
   }
}