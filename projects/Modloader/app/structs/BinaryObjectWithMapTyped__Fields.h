#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_DEFINED)
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#if defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_DEFINED
struct String;
struct String__Array;
struct BinaryTypeEnum__Enum__Array;
struct Object__Array;
struct Int32__Array;
struct __declspec(align(8)) BinaryObjectWithMapTyped__Fields {
    BinaryHeaderEnum__Enum binaryHeaderEnum;

    int32_t objectId;
    struct String* name;
    int32_t numMembers;
    struct String__Array* memberNames;
    struct BinaryTypeEnum__Enum__Array* binaryTypeEnumA;
    struct Object__Array* typeInformationA;
    struct Int32__Array* memberAssemIds;
    int32_t assemId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_FWDDECL
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryObjectWithMapTyped__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryObjectWithMapTyped__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
