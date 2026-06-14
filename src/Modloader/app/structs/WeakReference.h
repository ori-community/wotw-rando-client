#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeakReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeakReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakReference_DEFINED)
#include <Modloader/app/structs/WeakReference__Fields.h>
#if defined(IL2CPP_STRUCT_WeakReference__Fields_DEFINED)
#define IL2CPP_STRUCT_WeakReference_DEFINED
struct WeakReference__Class;
struct WeakReference {
    struct WeakReference__Class* klass;
    MonitorData* monitor;
    struct WeakReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeakReference_FWDDECL)
#define IL2CPP_STRUCT_WeakReference_FWDDECL
#include <Modloader/app/structs/WeakReference__Class.h>
#endif
#undef IL2CPP_STRUCT_WeakReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakReference_DEFINED) && !defined(IL2CPP_STRUCT_WeakReference_FWDDECL)
#include <Modloader/app/structs/WeakReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeakReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
