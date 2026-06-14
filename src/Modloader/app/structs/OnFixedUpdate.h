#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnFixedUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnFixedUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnFixedUpdate_DEFINED)
#define IL2CPP_STRUCT_OnFixedUpdate_DEFINED
struct OnFixedUpdate__Class;
struct OnFixedUpdate {
    struct OnFixedUpdate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnFixedUpdate_FWDDECL)
#define IL2CPP_STRUCT_OnFixedUpdate_FWDDECL
#include <Modloader/app/structs/OnFixedUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_OnFixedUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnFixedUpdate_DEFINED) && !defined(IL2CPP_STRUCT_OnFixedUpdate_FWDDECL)
#include <Modloader/app/structs/OnFixedUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnFixedUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
