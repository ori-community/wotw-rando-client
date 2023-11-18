#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameGraph__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameGraph__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameGraph__Fields_DEFINED
struct Material;
struct FrameGraph__Fields {
    struct MonoBehaviour__Fields _;
    struct Material* m_material;
    int32_t m_lastScreenWidth;
    int32_t m_graphWidth;
    int32_t m_graphHeight;
    int32_t m_graphOffsX;
    int32_t m_graphOffsY;
    int64_t m_currentFrameStartNs;
    int64_t m_currentFrameEndNs;
    int64_t m_currentFrameDurationNs;
    int64_t m_currentGraphMaxNs;
    int32_t m_shrinkTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameGraph__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrameGraph__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_FrameGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameGraph__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrameGraph__Fields_FWDDECL)
#include <Modloader/app/structs/FrameGraph__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameGraph__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
