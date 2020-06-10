﻿using System;
using System.Collections.Generic;
using System.IO;
namespace RandoMainDLL.Il2Cpp {
  public sealed class Metadata : BinaryStream {
    private Il2CppGlobalMetadataHeader metadataHeader;
    public Il2CppImageDefinition[] imageDefs;
    public Il2CppTypeDefinition[] typeDefs;
    public Il2CppMethodDefinition[] methodDefs;
    public Il2CppParameterDefinition[] parameterDefs;
    public Il2CppFieldDefinition[] fieldDefs;
    //private Dictionary<int, Il2CppFieldDefaultValue> fieldDefaultValuesDic;
    //private Dictionary<int, Il2CppParameterDefaultValue> parameterDefaultValuesDic;
    public Il2CppPropertyDefinition[] propertyDefs;
    public Il2CppCustomAttributeTypeRange[] attributeTypeRanges;
    //private Dictionary<Il2CppImageDefinition, Dictionary<uint, int>> attributeTypeRangesDic;
    //private Il2CppStringLiteral[] stringLiterals;
    private Il2CppMetadataUsageList[] metadataUsageLists;
    private Il2CppMetadataUsagePair[] metadataUsagePairs;
    public int[] attributeTypes;
    public int[] interfaceIndices;
    public Dictionary<uint, SortedDictionary<uint, uint>> metadataUsageDic;
    public long maxMetadataUsages;
    public int[] nestedTypeIndices;
    public Il2CppEventDefinition[] eventDefs;
    public Il2CppGenericContainer[] genericContainers;
    public Il2CppFieldRef[] fieldRefs;
    public Il2CppGenericParameter[] genericParameters;
    public int[] constraintIndices;
    public uint[] vtableMethods;
    private Dictionary<uint, string> stringCache = new Dictionary<uint, string>();

    public Metadata(Stream stream) : base(stream) {
      var sanity = ReadUInt32();
      if (sanity != 0xFAB11BAF) {
        throw new InvalidDataException("ERROR: Metadata file supplied is not valid metadata file.");
      }
      var version = ReadInt32();
      if (version < 16 || version > 24) {
        throw new NotSupportedException($"ERROR: Metadata file supplied is not a supported version[{version}].");
      }
      Version = version;
      Version = 24.1f;
      metadataHeader = ReadClass<Il2CppGlobalMetadataHeader>(0);
      imageDefs = ReadMetadataClassArray<Il2CppImageDefinition>(metadataHeader.imagesOffset, metadataHeader.imagesCount);
      typeDefs = ReadMetadataClassArray<Il2CppTypeDefinition>(metadataHeader.typeDefinitionsOffset, metadataHeader.typeDefinitionsCount);
      methodDefs = ReadMetadataClassArray<Il2CppMethodDefinition>(metadataHeader.methodsOffset, metadataHeader.methodsCount);
      //parameterDefs = ReadMetadataClassArray<Il2CppParameterDefinition>(metadataHeader.parametersOffset, metadataHeader.parametersCount);
      fieldDefs = ReadMetadataClassArray<Il2CppFieldDefinition>(metadataHeader.fieldsOffset, metadataHeader.fieldsCount);
      //var fieldDefaultValues = ReadMetadataClassArray<Il2CppFieldDefaultValue>(metadataHeader.fieldDefaultValuesOffset, metadataHeader.fieldDefaultValuesCount);
      //var parameterDefaultValues = ReadMetadataClassArray<Il2CppParameterDefaultValue>(metadataHeader.parameterDefaultValuesOffset, metadataHeader.parameterDefaultValuesCount);
      //fieldDefaultValuesDic = fieldDefaultValues.ToDictionary(x => x.fieldIndex);
      //parameterDefaultValuesDic = parameterDefaultValues.ToDictionary(x => x.parameterIndex);
      //propertyDefs = ReadMetadataClassArray<Il2CppPropertyDefinition>(metadataHeader.propertiesOffset, metadataHeader.propertiesCount);
      //interfaceIndices = ReadClassArray<int>(metadataHeader.interfacesOffset, metadataHeader.interfacesCount / 4);
      //nestedTypeIndices = ReadClassArray<int>(metadataHeader.nestedTypesOffset, metadataHeader.nestedTypesCount / 4);
      //eventDefs = ReadMetadataClassArray<Il2CppEventDefinition>(metadataHeader.eventsOffset, metadataHeader.eventsCount);
      genericContainers = ReadMetadataClassArray<Il2CppGenericContainer>(metadataHeader.genericContainersOffset, metadataHeader.genericContainersCount);
      genericParameters = ReadMetadataClassArray<Il2CppGenericParameter>(metadataHeader.genericParametersOffset, metadataHeader.genericParametersCount);
      //constraintIndices = ReadClassArray<int>(metadataHeader.genericParameterConstraintsOffset, metadataHeader.genericParameterConstraintsCount / 4);
      //vtableMethods = ReadClassArray<uint>(metadataHeader.vtableMethodsOffset, metadataHeader.vtableMethodsCount / 4);
      if (Version > 16) {
        //stringLiterals = ReadMetadataClassArray<Il2CppStringLiteral>(metadataHeader.stringLiteralOffset, metadataHeader.stringLiteralCount);
        metadataUsageLists = ReadMetadataClassArray<Il2CppMetadataUsageList>(metadataHeader.metadataUsageListsOffset, metadataHeader.metadataUsageListsCount);
        metadataUsagePairs = ReadMetadataClassArray<Il2CppMetadataUsagePair>(metadataHeader.metadataUsagePairsOffset, metadataHeader.metadataUsagePairsCount);

        ProcessingMetadataUsage();

        //fieldRefs = ReadMetadataClassArray<Il2CppFieldRef>(metadataHeader.fieldRefsOffset, metadataHeader.fieldRefsCount);
      }
      //if (Version > 20) {
      //    attributeTypeRanges = ReadMetadataClassArray<Il2CppCustomAttributeTypeRange>(metadataHeader.attributesInfoOffset, metadataHeader.attributesInfoCount);
      //    attributeTypes = ReadClassArray<int>(metadataHeader.attributeTypesOffset, metadataHeader.attributeTypesCount / 4);
      //}
      //if (Version > 24) {
      //    attributeTypeRangesDic = new Dictionary<Il2CppImageDefinition, Dictionary<uint, int>>();
      //    foreach (var imageDef in imageDefs) {
      //        var dic = new Dictionary<uint, int>();
      //        attributeTypeRangesDic[imageDef] = dic;
      //        var end = imageDef.customAttributeStart + imageDef.customAttributeCount;
      //        for (int i = imageDef.customAttributeStart; i < end; i++) {
      //            dic.Add(attributeTypeRanges[i].token, i);
      //        }
      //    }
      //}
    }

    private T[] ReadMetadataClassArray<T>(uint addr, int count) where T : struct {
      return ReadClassArray<T>(addr, count / MySizeOf(typeof(T)));
    }

    //public bool GetFieldDefaultValueFromIndex(int index, out Il2CppFieldDefaultValue value) {
    //    return fieldDefaultValuesDic.TryGetValue(index, out value);
    //}

    //public bool GetParameterDefaultValueFromIndex(int index, out Il2CppParameterDefaultValue value) {
    //    return parameterDefaultValuesDic.TryGetValue(index, out value);
    //}

    //public uint GetDefaultValueFromIndex(int index) {
    //    return (uint)(metadataHeader.fieldAndParameterDefaultValueDataOffset + index);
    //}

    public string GetStringFromIndex(uint index) {
      if (!stringCache.TryGetValue(index, out var result)) {
        result = ReadStringToNull(metadataHeader.stringOffset + index);
        stringCache.Add(index, result);
      }
      return result;
    }

    //public int GetCustomAttributeIndex(Il2CppImageDefinition imageDef, int customAttributeIndex, uint token) {
    //    if (Version > 24) {
    //        if (attributeTypeRangesDic[imageDef].TryGetValue(token, out var index)) {
    //            return index;
    //        } else {
    //            return -1;
    //        }
    //    } else {
    //        return customAttributeIndex;
    //    }
    //}

    //public string GetStringLiteralFromIndex(uint index) {
    //    var stringLiteral = stringLiterals[index];
    //    Position = (uint)(metadataHeader.stringLiteralDataOffset + stringLiteral.dataIndex);
    //    return Encoding.UTF8.GetString(ReadBytes((int)stringLiteral.length));
    //}

    private void ProcessingMetadataUsage() {
      metadataUsageDic = new Dictionary<uint, SortedDictionary<uint, uint>>();
      for (uint i = 1; i <= 6u; i++) {
        metadataUsageDic[i] = new SortedDictionary<uint, uint>();
      }
      SortedDictionary<uint, uint> one = metadataUsageDic[1];
      SortedDictionary<uint, uint> two = metadataUsageDic[2];
      SortedDictionary<uint, uint> three = metadataUsageDic[3];
      SortedDictionary<uint, uint> four = metadataUsageDic[4];
      SortedDictionary<uint, uint> five = metadataUsageDic[5];
      SortedDictionary<uint, uint> six = metadataUsageDic[6];

      maxMetadataUsages = -1;
      for (int j = 0; j < metadataUsageLists.Length; j++) {
        var metadataUsageList = metadataUsageLists[j];
        for (int i = 0; i < metadataUsageList.count; i++) {
          var offset = metadataUsageList.start + i;
          var metadataUsagePair = metadataUsagePairs[offset];
          var usage = GetEncodedIndexType(metadataUsagePair.encodedSourceIndex);
          var decodedIndex = GetDecodedMethodIndex(metadataUsagePair.encodedSourceIndex);
          var temp = metadataUsagePair.destinationIndex;
          switch (usage) {
            case 1: one[temp] = decodedIndex; break;
            case 2: two[temp] = decodedIndex; break;
            case 3: three[temp] = decodedIndex; break;
            case 4: four[temp] = decodedIndex; break;
            case 5: five[temp] = decodedIndex; break;
            case 6: six[temp] = decodedIndex; break;
          }
          if (temp > maxMetadataUsages) {
            maxMetadataUsages = temp;
          }
        }
      }
      maxMetadataUsages++;
    }

    public uint GetEncodedIndexType(uint index) {
      return (index & 0xE0000000) >> 29;
    }

    public uint GetDecodedMethodIndex(uint index) {
      return index & 0x1FFFFFFFU;
    }

    private int MySizeOf(Type type) {
      var size = 0;
      foreach (var i in type.GetFields()) {
        var attr = (VersionAttribute)Attribute.GetCustomAttribute(i, typeof(VersionAttribute));
        if (attr != null) {
          if (Version < attr.Min || Version > attr.Max) {
            continue;
          }
        }
        Type fieldType = i.FieldType;

        if (fieldType == typeof(int) || fieldType == typeof(uint)) {
          size += 4;
        }
        else if (fieldType == typeof(short) || fieldType == typeof(ushort)) {
          size += 2;
        }
      }
      return size;
    }
  }
}