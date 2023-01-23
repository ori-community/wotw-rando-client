#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarkerEntity__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarkerEntity__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarkerEntity__VTable_DEFINED)
#define IL2CPP_STRUCT_MarkerEntity__VTable_DEFINED
struct MarkerEntity__VTable {
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
    VirtualInvokeData HasFinished;
};
#endif
#if !defined(IL2CPP_STRUCT_MarkerEntity__VTable_FWDDECL)
#define IL2CPP_STRUCT_MarkerEntity__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_MarkerEntity__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarkerEntity__VTable_DEFINED) && !defined(IL2CPP_STRUCT_MarkerEntity__VTable_FWDDECL)
#include <Modloader/app/structs/MarkerEntity__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarkerEntity__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
