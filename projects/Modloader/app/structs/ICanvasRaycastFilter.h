#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICanvasRaycastFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICanvasRaycastFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICanvasRaycastFilter_DEFINED)
#define IL2CPP_STRUCT_ICanvasRaycastFilter_DEFINED
struct ICanvasRaycastFilter__Class;
struct ICanvasRaycastFilter {
    struct ICanvasRaycastFilter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICanvasRaycastFilter_FWDDECL)
#define IL2CPP_STRUCT_ICanvasRaycastFilter_FWDDECL
#include <Modloader/app/structs/ICanvasRaycastFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_ICanvasRaycastFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICanvasRaycastFilter_DEFINED) && !defined(IL2CPP_STRUCT_ICanvasRaycastFilter_FWDDECL)
#include <Modloader/app/structs/ICanvasRaycastFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICanvasRaycastFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
