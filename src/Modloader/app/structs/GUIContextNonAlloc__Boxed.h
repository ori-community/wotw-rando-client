#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_DEFINED)
#include <Modloader/app/structs/GUIContextNonAlloc.h>
#if defined(IL2CPP_STRUCT_GUIContextNonAlloc_DEFINED)
#define IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_DEFINED
struct GUIContextNonAlloc__Class;
struct GUIContextNonAlloc__Boxed {
    struct GUIContextNonAlloc__Class* klass;
    MonitorData* monitor;
    struct GUIContextNonAlloc fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_FWDDECL)
#define IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_FWDDECL
#include <Modloader/app/structs/GUIContextNonAlloc__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_GUIContextNonAlloc__Boxed_FWDDECL)
#include <Modloader/app/structs/GUIContextNonAlloc__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIContextNonAlloc__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
