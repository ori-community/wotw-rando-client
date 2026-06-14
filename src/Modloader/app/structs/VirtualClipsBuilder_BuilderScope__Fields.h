#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_DEFINED)
#define IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_DEFINED
struct Stack_1_VirtualClipsBuilder_Layout_;
struct VirtualMoonTimeline;
struct ITimelineEntity;
struct __declspec(align(8)) VirtualClipsBuilder_BuilderScope__Fields {
    struct Stack_1_VirtualClipsBuilder_Layout_* m_layoutStack;
    struct VirtualMoonTimeline* Root;
    int32_t IndentLevel;
    struct ITimelineEntity* LastAdded;
};
#endif
#if !defined(IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_FWDDECL)
#define IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_FWDDECL
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/Stack_1_VirtualClipsBuilder_Layout_.h>
#include <Modloader/app/structs/VirtualMoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VirtualClipsBuilder_BuilderScope__Fields_FWDDECL)
#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
