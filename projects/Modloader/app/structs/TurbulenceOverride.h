#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceOverride_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceOverride_DEFINED)
#include <Modloader/app/structs/TurbulenceOverride__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceOverride_DEFINED
struct TurbulenceOverride__Class;
struct TurbulenceOverride {
    struct TurbulenceOverride__Class* klass;
    MonitorData* monitor;
    struct TurbulenceOverride__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceOverride_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceOverride_FWDDECL
#include <Modloader/app/structs/TurbulenceOverride__Class.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceOverride_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceOverride_FWDDECL)
#include <Modloader/app/structs/TurbulenceOverride.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceOverride.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
