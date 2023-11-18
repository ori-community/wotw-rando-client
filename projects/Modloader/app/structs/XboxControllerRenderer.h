#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer_DEFINED)
#include <Modloader/app/structs/XboxControllerRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_XboxControllerRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxControllerRenderer_DEFINED
struct XboxControllerRenderer__Class;
struct XboxControllerRenderer {
    struct XboxControllerRenderer__Class* klass;
    MonitorData* monitor;
    struct XboxControllerRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerRenderer_FWDDECL
#include <Modloader/app/structs/XboxControllerRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxControllerRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerRenderer_FWDDECL)
#include <Modloader/app/structs/XboxControllerRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
