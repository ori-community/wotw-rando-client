#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendMouseEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendMouseEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_DEFINED)
#define IL2CPP_STRUCT_SendMouseEvents_DEFINED
struct SendMouseEvents__Class;
struct SendMouseEvents {
    struct SendMouseEvents__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SendMouseEvents_FWDDECL)
#define IL2CPP_STRUCT_SendMouseEvents_FWDDECL
#include <Modloader/app/structs/SendMouseEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_SendMouseEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_DEFINED) && !defined(IL2CPP_STRUCT_SendMouseEvents_FWDDECL)
#include <Modloader/app/structs/SendMouseEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendMouseEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
