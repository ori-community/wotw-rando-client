#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVROverlay__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVROverlay__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVROverlay__Boxed_DEFINED)
#include <Modloader/app/structs/IVROverlay.h>
#if defined(IL2CPP_STRUCT_IVROverlay_DEFINED)
#define IL2CPP_STRUCT_IVROverlay__Boxed_DEFINED
struct IVROverlay__Class;
struct IVROverlay__Boxed {
    struct IVROverlay__Class* klass;
    MonitorData* monitor;
    struct IVROverlay fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVROverlay__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IVROverlay__Boxed_FWDDECL
#include <Modloader/app/structs/IVROverlay__Class.h>
#endif
#undef IL2CPP_STRUCT_IVROverlay__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVROverlay__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IVROverlay__Boxed_FWDDECL)
#include <Modloader/app/structs/IVROverlay__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVROverlay__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
