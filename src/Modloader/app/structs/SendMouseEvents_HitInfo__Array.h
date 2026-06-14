#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_DEFINED)
#include <Modloader/app/structs/SendMouseEvents_HitInfo.h>
#if defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo_DEFINED)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_DEFINED
struct SendMouseEvents_HitInfo__Array__Class;
struct SendMouseEvents_HitInfo__Array {
    struct SendMouseEvents_HitInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SendMouseEvents_HitInfo vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_FWDDECL
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo__Array_FWDDECL)
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
