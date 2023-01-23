#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_DEFINED
struct RecorderTimelineManager;
struct RecorderTimelineManager__StaticFields {
    struct RecorderTimelineManager* Instance;
    int32_t FPS;
    bool m_hideUI;
};
#endif
#if !defined(IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_FWDDECL
#include <Modloader/app/structs/RecorderTimelineManager.h>
#endif
#undef IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderTimelineManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/RecorderTimelineManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderTimelineManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
