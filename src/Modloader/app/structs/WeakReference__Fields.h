#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeakReference__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeakReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakReference__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_WeakReference__Fields_DEFINED
struct __declspec(align(8)) WeakReference__Fields {
    bool isLongReference;
    struct GCHandle gcHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeakReference__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeakReference__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WeakReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakReference__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeakReference__Fields_FWDDECL)
#include <Modloader/app/structs/WeakReference__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeakReference__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
