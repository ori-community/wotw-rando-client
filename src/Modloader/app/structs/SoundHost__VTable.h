#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundHost__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundHost__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHost__VTable_DEFINED)
#define IL2CPP_STRUCT_SoundHost__VTable_DEFINED
struct SoundHost__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IsActiveVersion;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData get_Version;
    VirtualInvokeData get_Position;
    VirtualInvokeData get_Rotation;
    VirtualInvokeData get_GameObject;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_AsListener;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Position_1;
    VirtualInvokeData get_Rotation_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDrawGizmos;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundHost__VTable_FWDDECL)
#define IL2CPP_STRUCT_SoundHost__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SoundHost__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHost__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SoundHost__VTable_FWDDECL)
#include <Modloader/app/structs/SoundHost__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundHost__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
