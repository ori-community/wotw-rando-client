#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoProgressBar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoProgressBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoProgressBar_DEFINED)
#include <Modloader/app/structs/VideoProgressBar__Fields.h>
#if defined(IL2CPP_STRUCT_VideoProgressBar__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoProgressBar_DEFINED
struct VideoProgressBar__Class;
struct VideoProgressBar {
    struct VideoProgressBar__Class* klass;
    MonitorData* monitor;
    struct VideoProgressBar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoProgressBar_FWDDECL)
#define IL2CPP_STRUCT_VideoProgressBar_FWDDECL
#include <Modloader/app/structs/VideoProgressBar__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoProgressBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoProgressBar_DEFINED) && !defined(IL2CPP_STRUCT_VideoProgressBar_FWDDECL)
#include <Modloader/app/structs/VideoProgressBar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoProgressBar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
