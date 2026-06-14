#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWebConnectionState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWebConnectionState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebConnectionState_DEFINED)
#define IL2CPP_STRUCT_IWebConnectionState_DEFINED
struct IWebConnectionState__Class;
struct IWebConnectionState {
    struct IWebConnectionState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWebConnectionState_FWDDECL)
#define IL2CPP_STRUCT_IWebConnectionState_FWDDECL
#include <Modloader/app/structs/IWebConnectionState__Class.h>
#endif
#undef IL2CPP_STRUCT_IWebConnectionState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebConnectionState_DEFINED) && !defined(IL2CPP_STRUCT_IWebConnectionState_FWDDECL)
#include <Modloader/app/structs/IWebConnectionState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWebConnectionState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
