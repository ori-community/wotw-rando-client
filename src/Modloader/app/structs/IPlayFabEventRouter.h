#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlayFabEventRouter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlayFabEventRouter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabEventRouter_DEFINED)
#define IL2CPP_STRUCT_IPlayFabEventRouter_DEFINED
struct IPlayFabEventRouter__Class;
struct IPlayFabEventRouter {
    struct IPlayFabEventRouter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlayFabEventRouter_FWDDECL)
#define IL2CPP_STRUCT_IPlayFabEventRouter_FWDDECL
#include <Modloader/app/structs/IPlayFabEventRouter__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlayFabEventRouter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabEventRouter_DEFINED) && !defined(IL2CPP_STRUCT_IPlayFabEventRouter_FWDDECL)
#include <Modloader/app/structs/IPlayFabEventRouter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlayFabEventRouter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
