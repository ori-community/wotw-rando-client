#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarkerEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarkerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarkerEntity__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_AnimatorPlayState__Enum_DEFINED) && defined(IL2CPP_STRUCT_EntityId_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_MarkerEntity__Fields_DEFINED
struct PlaybackStatus;
struct MoonReference_1_Moon_Timeline_ITimelineEntityParent_;
struct IEventReciever;
struct __declspec(align(8)) MarkerEntity__Fields {
    AnimatorPlayState__Enum _PlayState_k__BackingField;

    struct PlaybackStatus* _PlaybackStatus_k__BackingField;
    struct EntityId m_entityId;
    struct MoonReference_1_Moon_Timeline_ITimelineEntityParent_* m_entityParent;
    struct Nullable_1_Boolean_ m_isFinished;
    double _PreviewTime_k__BackingField;
    int32_t m_hash;
    struct IEventReciever* _EventReciever_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarkerEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_MarkerEntity__Fields_FWDDECL
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntityParent_.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#endif
#undef IL2CPP_STRUCT_MarkerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarkerEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MarkerEntity__Fields_FWDDECL)
#include <Modloader/app/structs/MarkerEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarkerEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
