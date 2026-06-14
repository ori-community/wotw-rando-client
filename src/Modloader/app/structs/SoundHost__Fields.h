#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundHost__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundHost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHost__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundHost__Fields_DEFINED
struct Event_1__Array;
struct Transform;
struct GameObject;
struct AkAuxSendArray;
struct List_1_System_UInt32_;
struct SoundHost__Fields {
    struct MonoBehaviour__Fields _;
    bool SyncPosition;
    struct Event_1__Array* StartEvents;
    struct Transform* m_transform;
    struct GameObject* m_gameObject;
    bool m_isListener;
    bool _IsActive_k__BackingField;
    int32_t _Version_k__BackingField;
    uint64_t m_id;
    struct AkAuxSendArray* AuxSendArray;
    struct List_1_System_UInt32_* m_playingIDsToStopOnDisable;
    bool m_isRegistered;
    int32_t m_framesWithCount0;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundHost__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundHost__Fields_FWDDECL
#include <Modloader/app/structs/AkAuxSendArray.h>
#include <Modloader/app/structs/Event_1__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_System_UInt32_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SoundHost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHost__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundHost__Fields_FWDDECL)
#include <Modloader/app/structs/SoundHost__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundHost__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
