#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentLight_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLight_DEFINED)
#include <Modloader/app/structs/EnvironmentLight__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentLight__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentLight_DEFINED
struct EnvironmentLight__Class;
struct EnvironmentLight {
    struct EnvironmentLight__Class* klass;
    MonitorData* monitor;
    struct EnvironmentLight__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentLight_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentLight_FWDDECL
#include <Modloader/app/structs/EnvironmentLight__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLight_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentLight_FWDDECL)
#include <Modloader/app/structs/EnvironmentLight.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentLight.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
