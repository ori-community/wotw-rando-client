#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVirtualTimelineGameObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVirtualTimelineGameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVirtualTimelineGameObject_DEFINED)
#define IL2CPP_STRUCT_IVirtualTimelineGameObject_DEFINED
struct IVirtualTimelineGameObject__Class;
struct IVirtualTimelineGameObject {
    struct IVirtualTimelineGameObject__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IVirtualTimelineGameObject_FWDDECL)
#define IL2CPP_STRUCT_IVirtualTimelineGameObject_FWDDECL
#include <Modloader/app/structs/IVirtualTimelineGameObject__Class.h>
#endif
#undef IL2CPP_STRUCT_IVirtualTimelineGameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVirtualTimelineGameObject_DEFINED) && !defined(IL2CPP_STRUCT_IVirtualTimelineGameObject_FWDDECL)
#include <Modloader/app/structs/IVirtualTimelineGameObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVirtualTimelineGameObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
