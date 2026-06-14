#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumInfo__Fields_DEFINED
struct UInt64__Array;
struct String__Array;
struct __declspec(align(8)) EnumInfo__Fields {
    bool IsFlags;
    struct UInt64__Array* Values;
    struct String__Array* Names;
    struct String__Array* ResolvedNames;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumInfo__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#endif
#undef IL2CPP_STRUCT_EnumInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumInfo__Fields_FWDDECL)
#include <Modloader/app/structs/EnumInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
