#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsObjectAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsObjectAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsObjectAttribute__Fields_DEFINED)
#include <Modloader/app/structs/fsMemberSerialization__Enum.h>
#if defined(IL2CPP_STRUCT_fsMemberSerialization__Enum_DEFINED)
#define IL2CPP_STRUCT_fsObjectAttribute__Fields_DEFINED
struct Type__Array;
struct String;
struct Type;
struct __declspec(align(8)) fsObjectAttribute__Fields {
    struct Type__Array* PreviousModels;
    struct String* VersionString;
    fsMemberSerialization__Enum MemberSerialization;

    struct Type* Converter;
    struct Type* Processor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsObjectAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_fsObjectAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_fsObjectAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsObjectAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_fsObjectAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/fsObjectAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsObjectAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
