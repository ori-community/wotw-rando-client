#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectProgress__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectProgress__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProgress__Fields_DEFINED)
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#include <Modloader/app/structs/InternalMemberTypeE__Enum.h>
#include <Modloader/app/structs/InternalMemberValueE__Enum.h>
#include <Modloader/app/structs/InternalObjectTypeE__Enum.h>
#if defined(IL2CPP_STRUCT_BinaryTypeEnum__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalObjectTypeE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalMemberTypeE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalMemberValueE__Enum_DEFINED)
#define IL2CPP_STRUCT_ObjectProgress__Fields_DEFINED
struct Object;
struct String;
struct Type;
struct BinaryTypeEnum__Enum__Array;
struct Object__Array;
struct String__Array;
struct Type__Array;
struct ParseRecord;
struct __declspec(align(8)) ObjectProgress__Fields {
    bool isInitial;
    int32_t count;
    BinaryTypeEnum__Enum expectedType;

    struct Object* expectedTypeInformation;
    struct String* name;
    InternalObjectTypeE__Enum objectTypeEnum;

    InternalMemberTypeE__Enum memberTypeEnum;

    InternalMemberValueE__Enum memberValueEnum;

    struct Type* dtType;
    int32_t numItems;
    BinaryTypeEnum__Enum binaryTypeEnum;

    struct Object* typeInformation;
    int32_t nullCount;
    int32_t memberLength;
    struct BinaryTypeEnum__Enum__Array* binaryTypeEnumA;
    struct Object__Array* typeInformationA;
    struct String__Array* memberNames;
    struct Type__Array* memberTypes;
    struct ParseRecord* pr;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectProgress__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectProgress__Fields_FWDDECL
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParseRecord.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ObjectProgress__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProgress__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectProgress__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectProgress__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectProgress__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
