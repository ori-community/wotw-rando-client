#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CriticalFinalizerObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CriticalFinalizerObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_CriticalFinalizerObject_DEFINED)
#define IL2CPP_STRUCT_CriticalFinalizerObject_DEFINED
struct CriticalFinalizerObject__Class;
struct CriticalFinalizerObject {
    struct CriticalFinalizerObject__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CriticalFinalizerObject_FWDDECL)
#define IL2CPP_STRUCT_CriticalFinalizerObject_FWDDECL
#include <Modloader/app/structs/CriticalFinalizerObject__Class.h>
#endif
#undef IL2CPP_STRUCT_CriticalFinalizerObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_CriticalFinalizerObject_DEFINED) && !defined(IL2CPP_STRUCT_CriticalFinalizerObject_FWDDECL)
#include <Modloader/app/structs/CriticalFinalizerObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CriticalFinalizerObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
