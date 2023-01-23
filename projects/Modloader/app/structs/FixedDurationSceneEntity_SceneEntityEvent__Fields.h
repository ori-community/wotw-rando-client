#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_DEFINED)
#include <Modloader/app/structs/FixedDurationSceneEntity_Markers__Enum.h>
#if defined(IL2CPP_STRUCT_FixedDurationSceneEntity_Markers__Enum_DEFINED)
#define IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_DEFINED
struct String;
struct __declspec(align(8)) FixedDurationSceneEntity_SceneEntityEvent__Fields {
    struct String* m_name;
    FixedDurationSceneEntity_Markers__Enum _Event_k__BackingField;

    float _StaticTime_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_SceneEntityEvent__Fields_FWDDECL)
#include <Modloader/app/structs/FixedDurationSceneEntity_SceneEntityEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedDurationSceneEntity_SceneEntityEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
