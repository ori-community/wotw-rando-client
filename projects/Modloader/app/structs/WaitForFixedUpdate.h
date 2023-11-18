#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForFixedUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForFixedUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForFixedUpdate_DEFINED)
#define IL2CPP_STRUCT_WaitForFixedUpdate_DEFINED
struct WaitForFixedUpdate__Class;
struct WaitForFixedUpdate {
    struct WaitForFixedUpdate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WaitForFixedUpdate_FWDDECL)
#define IL2CPP_STRUCT_WaitForFixedUpdate_FWDDECL
#include <Modloader/app/structs/WaitForFixedUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForFixedUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForFixedUpdate_DEFINED) && !defined(IL2CPP_STRUCT_WaitForFixedUpdate_FWDDECL)
#include <Modloader/app/structs/WaitForFixedUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForFixedUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
