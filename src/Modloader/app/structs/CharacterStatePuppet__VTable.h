#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterStatePuppet__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterStatePuppet__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet__VTable_DEFINED)
#define IL2CPP_STRUCT_CharacterStatePuppet__VTable_DEFINED
struct CharacterStatePuppet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData __unknown;
    VirtualInvokeData get_UniqueRecordingId;
    VirtualInvokeData get_IsRecording;
    VirtualInvokeData OnInitializeGhostRecorder;
    VirtualInvokeData OnFinishedRecording;
    VirtualInvokeData OnFinishedPlayback;
    VirtualInvokeData OnPerform;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnPoolDespawned_1;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData OnInitializeLivePuppetMaster;
    VirtualInvokeData OnInitializeGhostPuppetMaster;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet__VTable_FWDDECL)
#define IL2CPP_STRUCT_CharacterStatePuppet__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_CharacterStatePuppet__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet__VTable_DEFINED) && !defined(IL2CPP_STRUCT_CharacterStatePuppet__VTable_FWDDECL)
#include <Modloader/app/structs/CharacterStatePuppet__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterStatePuppet__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
