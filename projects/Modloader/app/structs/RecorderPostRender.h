#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPostRender_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPostRender_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPostRender_DEFINED)
#include <Modloader/app/structs/RecorderPostRender__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderPostRender__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderPostRender_DEFINED
struct RecorderPostRender__Class;
struct RecorderPostRender {
    struct RecorderPostRender__Class* klass;
    MonitorData* monitor;
    struct RecorderPostRender__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderPostRender_FWDDECL)
#define IL2CPP_STRUCT_RecorderPostRender_FWDDECL
#include <Modloader/app/structs/RecorderPostRender__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderPostRender_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPostRender_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPostRender_FWDDECL)
#include <Modloader/app/structs/RecorderPostRender.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPostRender.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
