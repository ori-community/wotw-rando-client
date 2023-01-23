#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerShake_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerShake_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShake_DEFINED)
#include <Modloader/app/structs/ControllerShake__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerShake__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerShake_DEFINED
struct ControllerShake__Class;
struct ControllerShake {
    struct ControllerShake__Class* klass;
    MonitorData* monitor;
    struct ControllerShake__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerShake_FWDDECL)
#define IL2CPP_STRUCT_ControllerShake_FWDDECL
#include <Modloader/app/structs/ControllerShake__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerShake_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShake_DEFINED) && !defined(IL2CPP_STRUCT_ControllerShake_FWDDECL)
#include <Modloader/app/structs/ControllerShake.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerShake.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
