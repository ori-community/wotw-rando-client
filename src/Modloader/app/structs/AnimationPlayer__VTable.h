#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPlayer__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPlayer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPlayer__VTable_DEFINED)
#define IL2CPP_STRUCT_AnimationPlayer__VTable_DEFINED
struct AnimationPlayer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData Play;
    VirtualInvokeData OnActiveAnimationStopEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationPlayer__VTable_FWDDECL)
#define IL2CPP_STRUCT_AnimationPlayer__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationPlayer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPlayer__VTable_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPlayer__VTable_FWDDECL)
#include <Modloader/app/structs/AnimationPlayer__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPlayer__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
