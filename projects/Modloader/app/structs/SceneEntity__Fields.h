#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneEntity__Fields_DEFINED)
#include <Modloader/app/structs/FixedDurationSceneEntity__Fields.h>
#if defined(IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneEntity__Fields_DEFINED
struct Condition_1;
struct SceneEntity__Fields {
    struct FixedDurationSceneEntity__Fields _;
    struct Condition_1* SkipLoadCondition;
    bool m_isSkipping;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneEntity__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_SceneEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SceneEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
