#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchActionSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchActionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchActionSystem_DEFINED)
#include <Modloader/app/structs/SwitchActionSystem__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchActionSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchActionSystem_DEFINED
struct SwitchActionSystem__Class;
struct SwitchActionSystem {
    struct SwitchActionSystem__Class* klass;
    MonitorData* monitor;
    struct SwitchActionSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchActionSystem_FWDDECL)
#define IL2CPP_STRUCT_SwitchActionSystem_FWDDECL
#include <Modloader/app/structs/SwitchActionSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchActionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchActionSystem_DEFINED) && !defined(IL2CPP_STRUCT_SwitchActionSystem_FWDDECL)
#include <Modloader/app/structs/SwitchActionSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchActionSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
