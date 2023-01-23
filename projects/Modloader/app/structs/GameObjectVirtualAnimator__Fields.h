#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#if defined(IL2CPP_STRUCT_VirtualTimelineRepresentationGroup__Enum_DEFINED) && defined(IL2CPP_STRUCT_AnimatorPlayState__Enum_DEFINED)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_DEFINED
struct GameObject;
struct String;
struct PlaybackStatus;
struct __declspec(align(8)) GameObjectVirtualAnimator__Fields {
    struct GameObject* m_target;
    struct String* m_customName;
    VirtualTimelineRepresentationGroup__Enum _Group_k__BackingField;

    AnimatorPlayState__Enum _PlayState_k__BackingField;

    struct PlaybackStatus* _PlaybackStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/GameObjectVirtualAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectVirtualAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
