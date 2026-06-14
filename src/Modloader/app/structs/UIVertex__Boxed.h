#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIVertex__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIVertex__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIVertex__Boxed_DEFINED)
#include <Modloader/app/structs/UIVertex.h>
#if defined(IL2CPP_STRUCT_UIVertex_DEFINED)
#define IL2CPP_STRUCT_UIVertex__Boxed_DEFINED
struct UIVertex__Class;
struct UIVertex__Boxed {
    struct UIVertex__Class* klass;
    MonitorData* monitor;
    struct UIVertex fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIVertex__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UIVertex__Boxed_FWDDECL
#include <Modloader/app/structs/UIVertex__Class.h>
#endif
#undef IL2CPP_STRUCT_UIVertex__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIVertex__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UIVertex__Boxed_FWDDECL)
#include <Modloader/app/structs/UIVertex__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIVertex__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
