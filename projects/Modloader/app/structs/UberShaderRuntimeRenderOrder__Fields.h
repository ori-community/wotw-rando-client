#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_DEFINED
struct Renderer;
struct Transform;
struct UberShaderRuntimeRenderOrder__Fields {
    struct MonoBehaviour__Fields _;
    float OffsetPositionZ;
    bool ForceFirstUpdate;
    bool m_isInScene;
    float m_lastZ;
    float m_lastSkinnedZ;
    struct Renderer* m_rendererCached;
    struct Transform* m_rootBoneCached;
    bool m_fetchedRenderer;
    bool m_hasRenderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderRuntimeRenderOrder__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderRuntimeRenderOrder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderRuntimeRenderOrder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
