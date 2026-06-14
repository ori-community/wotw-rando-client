#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoClip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoClip_DEFINED)
#include <Modloader/app/structs/VideoClip__Fields.h>
#if defined(IL2CPP_STRUCT_VideoClip__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoClip_DEFINED
struct VideoClip__Class;
struct VideoClip {
    struct VideoClip__Class* klass;
    MonitorData* monitor;
    struct VideoClip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoClip_FWDDECL)
#define IL2CPP_STRUCT_VideoClip_FWDDECL
#include <Modloader/app/structs/VideoClip__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoClip_DEFINED) && !defined(IL2CPP_STRUCT_VideoClip_FWDDECL)
#include <Modloader/app/structs/VideoClip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoClip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
