#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMap__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectMap__Fields_DEFINED
struct String;
struct Type;
struct BinaryTypeEnum__Enum__Array;
struct Object__Array;
struct Type__Array;
struct String__Array;
struct ReadObjectInfo;
struct ObjectReader;
struct BinaryAssemblyInfo;
struct __declspec(align(8)) ObjectMap__Fields {
    struct String* objectName;
    struct Type* objectType;
    struct BinaryTypeEnum__Enum__Array* binaryTypeEnumA;
    struct Object__Array* typeInformationA;
    struct Type__Array* memberTypes;
    struct String__Array* memberNames;
    struct ReadObjectInfo* objectInfo;
    bool isInitObjectInfo;
    struct ObjectReader* objectReader;
    int32_t objectId;
    struct BinaryAssemblyInfo* assemblyInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectMap__Fields_FWDDECL
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Array.h>
#include <Modloader/app/structs/ObjectReader.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ReadObjectInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ObjectMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectMap__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
