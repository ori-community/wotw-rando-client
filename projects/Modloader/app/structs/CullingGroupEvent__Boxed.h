#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingGroupEvent__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingGroupEvent__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroupEvent__Boxed_DEFINED)
#include <Modloader/app/structs/CullingGroupEvent.h>
#if defined(IL2CPP_STRUCT_CullingGroupEvent_DEFINED)
#define IL2CPP_STRUCT_CullingGroupEvent__Boxed_DEFINED
struct CullingGroupEvent__Class;
struct CullingGroupEvent__Boxed {
    struct CullingGroupEvent__Class* klass;
    MonitorData* monitor;
    struct CullingGroupEvent fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CullingGroupEvent__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CullingGroupEvent__Boxed_FWDDECL
#include <Modloader/app/structs/CullingGroupEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_CullingGroupEvent__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroupEvent__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CullingGroupEvent__Boxed_FWDDECL)
#include <Modloader/app/structs/CullingGroupEvent__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingGroupEvent__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
