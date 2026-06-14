#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enum_ValuesAndNames_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enum_ValuesAndNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_ValuesAndNames_DEFINED)
#include <Modloader/app/structs/Enum_ValuesAndNames__Fields.h>
#if defined(IL2CPP_STRUCT_Enum_ValuesAndNames__Fields_DEFINED)
#define IL2CPP_STRUCT_Enum_ValuesAndNames_DEFINED
struct Enum_ValuesAndNames__Class;
struct Enum_ValuesAndNames {
    struct Enum_ValuesAndNames__Class* klass;
    MonitorData* monitor;
    struct Enum_ValuesAndNames__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enum_ValuesAndNames_FWDDECL)
#define IL2CPP_STRUCT_Enum_ValuesAndNames_FWDDECL
#include <Modloader/app/structs/Enum_ValuesAndNames__Class.h>
#endif
#undef IL2CPP_STRUCT_Enum_ValuesAndNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_ValuesAndNames_DEFINED) && !defined(IL2CPP_STRUCT_Enum_ValuesAndNames_FWDDECL)
#include <Modloader/app/structs/Enum_ValuesAndNames.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enum_ValuesAndNames.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
