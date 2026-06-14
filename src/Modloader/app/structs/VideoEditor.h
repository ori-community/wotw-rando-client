#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoEditor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoEditor_DEFINED)
#include <Modloader/app/structs/VideoEditor__Fields.h>
#if defined(IL2CPP_STRUCT_VideoEditor__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoEditor_DEFINED
struct VideoEditor__Class;
struct VideoEditor {
    struct VideoEditor__Class* klass;
    MonitorData* monitor;
    struct VideoEditor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoEditor_FWDDECL)
#define IL2CPP_STRUCT_VideoEditor_FWDDECL
#include <Modloader/app/structs/VideoEditor__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoEditor_DEFINED) && !defined(IL2CPP_STRUCT_VideoEditor_FWDDECL)
#include <Modloader/app/structs/VideoEditor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoEditor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
