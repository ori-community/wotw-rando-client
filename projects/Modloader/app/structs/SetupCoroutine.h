#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupCoroutine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupCoroutine_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupCoroutine_DEFINED)
#define IL2CPP_STRUCT_SetupCoroutine_DEFINED
struct SetupCoroutine__Class;
struct SetupCoroutine {
    struct SetupCoroutine__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SetupCoroutine_FWDDECL)
#define IL2CPP_STRUCT_SetupCoroutine_FWDDECL
#include <Modloader/app/structs/SetupCoroutine__Class.h>
#endif
#undef IL2CPP_STRUCT_SetupCoroutine_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupCoroutine_DEFINED) && !defined(IL2CPP_STRUCT_SetupCoroutine_FWDDECL)
#include <Modloader/app/structs/SetupCoroutine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupCoroutine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
