#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostFrame__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostFrame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostFrame__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostFrame__Fields_DEFINED
struct List_1_IGhostFrameData_;
struct IGhostFrameData__Array;
struct __declspec(align(8)) GhostFrame__Fields {
    float Time;
    struct List_1_IGhostFrameData_* FrameData;
    int32_t FrameDataCount;
    struct IGhostFrameData__Array* FrameDataArray;
    struct IGhostFrameData__Array* m_frameDatasCache;
    int32_t m_frameDatasCacheCount;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostFrame__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostFrame__Fields_FWDDECL
#include <Modloader/app/structs/IGhostFrameData__Array.h>
#include <Modloader/app/structs/List_1_IGhostFrameData_.h>
#endif
#undef IL2CPP_STRUCT_GhostFrame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostFrame__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostFrame__Fields_FWDDECL)
#include <Modloader/app/structs/GhostFrame__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostFrame__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
