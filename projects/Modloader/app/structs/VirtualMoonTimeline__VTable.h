#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualMoonTimeline__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualMoonTimeline__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline__VTable_DEFINED)
#define IL2CPP_STRUCT_VirtualMoonTimeline__VTable_DEFINED
struct VirtualMoonTimeline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EntityRecords;
    VirtualInvokeData get_ConstraintMetaDatas;
    VirtualInvokeData get_MarkerRecords;
    VirtualInvokeData get_ExternalRecords;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData RecursivelySetupExecutionOrder;
    VirtualInvokeData get_TrimController;
    VirtualInvokeData set_TrimController;
    VirtualInvokeData get_FullAddress;
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
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_ConstrainedEntitiesCount;
    VirtualInvokeData get_Progress;
    VirtualInvokeData GetConstrainedEntityFrom;
    VirtualInvokeData GetConstrainedEntity;
    VirtualInvokeData get_GetITimelineEntityParent;
    VirtualInvokeData IsTheSame;
    VirtualInvokeData get_StartConstraint;
    VirtualInvokeData get_EndConstraint;
    VirtualInvokeData get_EntityId;
    VirtualInvokeData get_Entity;
    VirtualInvokeData HasFinished;
    VirtualInvokeData ApproximateEvent;
    VirtualInvokeData get_UseHorizontalCollapse;
    VirtualInvokeData set_UseHorizontalCollapse;
    VirtualInvokeData OnBeforeAddChild;
    VirtualInvokeData CustomAddChild;
    VirtualInvokeData OnBeforeRemoveChild;
    VirtualInvokeData CustomRemoveChild;
};
#endif
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline__VTable_FWDDECL)
#define IL2CPP_STRUCT_VirtualMoonTimeline__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_VirtualMoonTimeline__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline__VTable_DEFINED) && !defined(IL2CPP_STRUCT_VirtualMoonTimeline__VTable_FWDDECL)
#include <Modloader/app/structs/VirtualMoonTimeline__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualMoonTimeline__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
