#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryObjectWithMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryObjectWithMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMap__Fields_DEFINED)
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#if defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryObjectWithMap__Fields_DEFINED
struct String;
struct String__Array;
struct __declspec(align(8)) BinaryObjectWithMap__Fields {
    BinaryHeaderEnum__Enum binaryHeaderEnum;

    int32_t objectId;
    struct String* name;
    int32_t numMembers;
    struct String__Array* memberNames;
    int32_t assemId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryObjectWithMap__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_BinaryObjectWithMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryObjectWithMap__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryObjectWithMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryObjectWithMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
