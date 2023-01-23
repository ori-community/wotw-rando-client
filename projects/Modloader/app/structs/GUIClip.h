#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIClip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIClip_DEFINED)
#define IL2CPP_STRUCT_GUIClip_DEFINED
struct GUIClip__Class;
struct GUIClip {
    struct GUIClip__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIClip_FWDDECL)
#define IL2CPP_STRUCT_GUIClip_FWDDECL
#include <Modloader/app/structs/GUIClip__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIClip_DEFINED) && !defined(IL2CPP_STRUCT_GUIClip_FWDDECL)
#include <Modloader/app/structs/GUIClip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIClip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
