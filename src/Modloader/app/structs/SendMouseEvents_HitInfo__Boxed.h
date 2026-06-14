#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_DEFINED)
#include <Modloader/app/structs/SendMouseEvents_HitInfo.h>
#if defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo_DEFINED)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_DEFINED
struct SendMouseEvents_HitInfo__Class;
struct SendMouseEvents_HitInfo__Boxed {
    struct SendMouseEvents_HitInfo__Class* klass;
    MonitorData* monitor;
    struct SendMouseEvents_HitInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_FWDDECL
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
