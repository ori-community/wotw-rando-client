namespace RandoMainDLL.Il2Cpp {
  public struct Il2CppGlobalMetadataHeader {
    public uint sanity;
    public int version;
    public uint stringLiteralOffset; // string data for managed code
    public int stringLiteralCount;
    public uint stringLiteralDataOffset;
    public int stringLiteralDataCount;
    public uint stringOffset; // string data for metadata
    public int stringCount;
    public uint eventsOffset; // Il2CppEventDefinition
    public int eventsCount;
    public uint propertiesOffset; // Il2CppPropertyDefinition
    public int propertiesCount;
    public uint methodsOffset; // Il2CppMethodDefinition
    public int methodsCount;
    public uint parameterDefaultValuesOffset; // Il2CppParameterDefaultValue
    public int parameterDefaultValuesCount;
    public uint fieldDefaultValuesOffset; // Il2CppFieldDefaultValue
    public int fieldDefaultValuesCount;
    public uint fieldAndParameterDefaultValueDataOffset; // uint8_t
    public int fieldAndParameterDefaultValueDataCount;
    public int fieldMarshaledSizesOffset; // Il2CppFieldMarshaledSize
    public int fieldMarshaledSizesCount;
    public uint parametersOffset; // Il2CppParameterDefinition
    public int parametersCount;
    public uint fieldsOffset; // Il2CppFieldDefinition
    public int fieldsCount;
    public uint genericParametersOffset; // Il2CppGenericParameter
    public int genericParametersCount;
    public uint genericParameterConstraintsOffset; // TypeIndex
    public int genericParameterConstraintsCount;
    public uint genericContainersOffset; // Il2CppGenericContainer
    public int genericContainersCount;
    public uint nestedTypesOffset; // TypeDefinitionIndex
    public int nestedTypesCount;
    public uint interfacesOffset; // TypeIndex
    public int interfacesCount;
    public uint vtableMethodsOffset; // EncodedMethodIndex
    public int vtableMethodsCount;
    public int interfaceOffsetsOffset; // Il2CppInterfaceOffsetPair
    public int interfaceOffsetsCount;
    public uint typeDefinitionsOffset; // Il2CppTypeDefinition
    public int typeDefinitionsCount;
    public int rgctxEntriesOffset; // Il2CppRGCTXDefinition
    public int rgctxEntriesCount;
    public uint imagesOffset; // Il2CppImageDefinition
    public int imagesCount;
    public int assembliesOffset; // Il2CppAssemblyDefinition
    public int assembliesCount;
    public uint metadataUsageListsOffset; // Il2CppMetadataUsageList
    public int metadataUsageListsCount;
    public uint metadataUsagePairsOffset; // Il2CppMetadataUsagePair
    public int metadataUsagePairsCount;
    public uint fieldRefsOffset; // Il2CppFieldRef
    public int fieldRefsCount;
    public int referencedAssembliesOffset; // int32_t
    public int referencedAssembliesCount;
    public uint attributesInfoOffset; // Il2CppCustomAttributeTypeRange
    public int attributesInfoCount;
    public uint attributeTypesOffset; // TypeIndex
    public int attributeTypesCount;
    public int unresolvedVirtualCallParameterTypesOffset; // TypeIndex
    public int unresolvedVirtualCallParameterTypesCount;
    public int unresolvedVirtualCallParameterRangesOffset; // Il2CppRange
    public int unresolvedVirtualCallParameterRangesCount;
    public int windowsRuntimeTypeNamesOffset; // Il2CppWindowsRuntimeTypeNamePair
    public int windowsRuntimeTypeNamesSize;
    public int exportedTypeDefinitionsOffset; // TypeDefinitionIndex
    public int exportedTypeDefinitionsCount;
  }
  public struct Il2CppImageDefinition {
    public uint nameIndex;
    public int assemblyIndex;
    public int typeStart;
    public uint typeCount;
    public int exportedTypeStart;
    public uint exportedTypeCount;
    public int entryPointIndex;
    public uint token;
    public int customAttributeStart;
    public uint customAttributeCount;
  }
  public struct Il2CppTypeDefinition {
    public uint nameIndex;
    public uint namespaceIndex;
    public int byvalTypeIndex;
    public int byrefTypeIndex;
    public int declaringTypeIndex;
    public int parentIndex;
    public int elementTypeIndex; // we can probably remove this one. Only used for enums
    public int rgctxStartIndex;
    public int rgctxCount;
    public int genericContainerIndex;
    public uint flags;

    public int fieldStart;
    public int methodStart;
    public int eventStart;
    public int propertyStart;
    public int nestedTypesStart;
    public int interfacesStart;
    public int vtableStart;
    public int interfaceOffsetsStart;

    public ushort method_count;
    public ushort property_count;
    public ushort field_count;
    public ushort event_count;
    public ushort nested_type_count;
    public ushort vtable_count;
    public ushort interfaces_count;
    public ushort interface_offsets_count;

    // bitfield to portably encode boolean values as single bits
    // 01 - valuetype;
    // 02 - enumtype;
    // 03 - has_finalize;
    // 04 - has_cctor;
    // 05 - is_blittable;
    // 06 - is_import_or_windows_runtime;
    // 07-10 - One of nine possible PackingSize values (0, 1, 2, 4, 8, 16, 32, 64, or 128)
    public uint bitfield;
    public uint token;

    public bool IsValueType => (bitfield & 0x1) == 1;
    public bool IsEnum => ((bitfield >> 1) & 0x1) == 1;
  }
  public struct Il2CppMethodDefinition {
    public uint nameIndex;
    public int declaringType;
    public int returnType;
    public int parameterStart;
    public int genericContainerIndex;
    public int methodIndex;
    public int invokerIndex;
    public int delegateWrapperIndex;
    public int rgctxStartIndex;
    public int rgctxCount;
    public uint token;
    public ushort flags;
    public ushort iflags;
    public ushort slot;
    public ushort parameterCount;
  }
  public struct Il2CppParameterDefinition {
    public uint nameIndex;
    public uint token;
    public int typeIndex;
  }
  public struct Il2CppFieldDefinition {
    public uint nameIndex;
    public int typeIndex;
    public uint token;
  }
  public struct Il2CppFieldDefaultValue {
    public int fieldIndex;
    public int typeIndex;
    public int dataIndex;
  }
  public struct Il2CppPropertyDefinition {
    public uint nameIndex;
    public int get;
    public int set;
    public uint attrs;
    public uint token;
  }
  public struct Il2CppCustomAttributeTypeRange {
    public uint token;
    public int start;
    public int count;
  }
  public struct Il2CppMetadataUsageList {
    public uint start;
    public uint count;
  }
  public struct Il2CppMetadataUsagePair {
    public uint destinationIndex;
    public uint encodedSourceIndex;
  }
  public struct Il2CppStringLiteral {
    public uint length;
    public int dataIndex;
  }
  public struct Il2CppParameterDefaultValue {
    public int parameterIndex;
    public int typeIndex;
    public int dataIndex;
  }
  public struct Il2CppEventDefinition {
    public uint nameIndex;
    public int typeIndex;
    public int add;
    public int remove;
    public int raise;
    public uint token;
  }
  public struct Il2CppGenericContainer {
    /* index of the generic type definition or the generic method definition corresponding to this container */
    public int ownerIndex; // either index into Il2CppClass metadata array or Il2CppMethodDefinition array
    public int type_argc;
    /* If true, we're a generic method, otherwise a generic type definition. */
    public int is_method;
    /* Our type parameters. */
    public int genericParameterStart;
  }
  public struct Il2CppFieldRef {
    public int typeIndex;
    public int fieldIndex; // local offset into type fields
  }
  public struct Il2CppGenericParameter {
    public int ownerIndex;  /* Type or method this parameter was defined in. */
    public uint nameIndex;
    public short constraintsStart;
    public short constraintsCount;
    public ushort num;
    public ushort flags;
  }
}