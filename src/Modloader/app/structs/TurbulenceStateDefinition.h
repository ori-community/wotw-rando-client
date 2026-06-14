#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceStateDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceStateDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceStateDefinition_DEFINED)
#include <Modloader/app/structs/TurbulenceStateDefinition__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceStateDefinition__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceStateDefinition_DEFINED
struct TurbulenceStateDefinition__Class;
struct TurbulenceStateDefinition {
    struct TurbulenceStateDefinition__Class* klass;
    MonitorData* monitor;
    struct TurbulenceStateDefinition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceStateDefinition_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceStateDefinition_FWDDECL
#include <Modloader/app/structs/TurbulenceStateDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceStateDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceStateDefinition_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceStateDefinition_FWDDECL)
#include <Modloader/app/structs/TurbulenceStateDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceStateDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
