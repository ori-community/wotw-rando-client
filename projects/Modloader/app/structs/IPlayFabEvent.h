#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlayFabEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlayFabEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabEvent_DEFINED)
#define IL2CPP_STRUCT_IPlayFabEvent_DEFINED
struct IPlayFabEvent__Class;
struct IPlayFabEvent {
    struct IPlayFabEvent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlayFabEvent_FWDDECL)
#define IL2CPP_STRUCT_IPlayFabEvent_FWDDECL
#include <Modloader/app/structs/IPlayFabEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlayFabEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabEvent_DEFINED) && !defined(IL2CPP_STRUCT_IPlayFabEvent_FWDDECL)
#include <Modloader/app/structs/IPlayFabEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlayFabEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
