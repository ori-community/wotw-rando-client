#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IControllerShake_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IControllerShake_INITIALIZING
#if !defined(IL2CPP_STRUCT_IControllerShake_DEFINED)
#define IL2CPP_STRUCT_IControllerShake_DEFINED
struct IControllerShake__Class;
struct IControllerShake {
    struct IControllerShake__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IControllerShake_FWDDECL)
#define IL2CPP_STRUCT_IControllerShake_FWDDECL
#include <Modloader/app/structs/IControllerShake__Class.h>
#endif
#undef IL2CPP_STRUCT_IControllerShake_INITIALIZING
#if !defined(IL2CPP_STRUCT_IControllerShake_DEFINED) && !defined(IL2CPP_STRUCT_IControllerShake_FWDDECL)
#include <Modloader/app/structs/IControllerShake.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IControllerShake.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
