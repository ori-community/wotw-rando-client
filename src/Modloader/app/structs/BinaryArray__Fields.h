#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryArray__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryArray__Fields_DEFINED)
#include <Modloader/app/structs/BinaryArrayTypeEnum__Enum.h>
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#if defined(IL2CPP_STRUCT_BinaryTypeEnum__Enum_DEFINED) && defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_DEFINED) && defined(IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryArray__Fields_DEFINED
struct Int32__Array;
struct Object;
struct __declspec(align(8)) BinaryArray__Fields {
    int32_t objectId;
    int32_t rank;
    struct Int32__Array* lengthA;
    struct Int32__Array* lowerBoundA;
    BinaryTypeEnum__Enum binaryTypeEnum;

    struct Object* typeInformation;
    int32_t assemId;
    BinaryHeaderEnum__Enum binaryHeaderEnum;

    BinaryArrayTypeEnum__Enum binaryArrayTypeEnum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryArray__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryArray__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_BinaryArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryArray__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryArray__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryArray__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryArray__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
