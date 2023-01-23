#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_DEFINED)
#define IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_DEFINED
struct UInt64__Array;
struct String__Array;
struct __declspec(align(8)) Enum_ValuesAndNames__Fields {
    struct UInt64__Array* Values;
    struct String__Array* Names;
};
#endif
#if !defined(IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_FWDDECL)
#define IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#endif
#undef IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_FWDDECL)
#include <Modloader/app/structs/Enum_ValuesAndNames__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enum_ValuesAndNames__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
