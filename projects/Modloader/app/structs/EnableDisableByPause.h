#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableDisableByPause_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableDisableByPause_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableDisableByPause_DEFINED)
#include <Modloader/app/structs/EnableDisableByPause__Fields.h>
#if defined(IL2CPP_STRUCT_EnableDisableByPause__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableDisableByPause_DEFINED
struct EnableDisableByPause__Class;
struct EnableDisableByPause {
    struct EnableDisableByPause__Class* klass;
    MonitorData* monitor;
    struct EnableDisableByPause__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableDisableByPause_FWDDECL)
#define IL2CPP_STRUCT_EnableDisableByPause_FWDDECL
#include <Modloader/app/structs/EnableDisableByPause__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableDisableByPause_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableDisableByPause_DEFINED) && !defined(IL2CPP_STRUCT_EnableDisableByPause_FWDDECL)
#include <Modloader/app/structs/EnableDisableByPause.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableDisableByPause.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
