#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicRaycaster_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicRaycaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicRaycaster_DEFINED)
#include <Modloader/app/structs/GraphicRaycaster__Fields.h>
#if defined(IL2CPP_STRUCT_GraphicRaycaster__Fields_DEFINED)
#define IL2CPP_STRUCT_GraphicRaycaster_DEFINED
struct GraphicRaycaster__Class;
struct GraphicRaycaster {
    struct GraphicRaycaster__Class* klass;
    MonitorData* monitor;
    struct GraphicRaycaster__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GraphicRaycaster_FWDDECL)
#define IL2CPP_STRUCT_GraphicRaycaster_FWDDECL
#include <Modloader/app/structs/GraphicRaycaster__Class.h>
#endif
#undef IL2CPP_STRUCT_GraphicRaycaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicRaycaster_DEFINED) && !defined(IL2CPP_STRUCT_GraphicRaycaster_FWDDECL)
#include <Modloader/app/structs/GraphicRaycaster.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicRaycaster.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
