#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateGeneric_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateGeneric_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateGeneric_DEFINED)
#include <Modloader/app/structs/DesiredUberStateGeneric__Fields.h>
#if defined(IL2CPP_STRUCT_DesiredUberStateGeneric__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateGeneric_DEFINED
struct DesiredUberStateGeneric__Class;
struct DesiredUberStateGeneric {
    struct DesiredUberStateGeneric__Class* klass;
    MonitorData* monitor;
    struct DesiredUberStateGeneric__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateGeneric_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateGeneric_FWDDECL
#include <Modloader/app/structs/DesiredUberStateGeneric__Class.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateGeneric_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateGeneric_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateGeneric_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateGeneric.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateGeneric.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
