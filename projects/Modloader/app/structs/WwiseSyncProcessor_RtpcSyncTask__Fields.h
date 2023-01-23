#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_DEFINED)
#include <Modloader/app/structs/SoundHostReference.h>
#if defined(IL2CPP_STRUCT_SoundHostReference_DEFINED)
#define IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_DEFINED
struct Func_1_Single_;
struct RTPC;
struct __declspec(align(8)) WwiseSyncProcessor_RtpcSyncTask__Fields {
    int32_t Id;
    struct Func_1_Single_* _Getter_k__BackingField;
    struct SoundHostReference _Host_k__BackingField;
    struct RTPC* _Target_k__BackingField;
    float _CachedValue_k__BackingField;
    int32_t _FrameQuantinization_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Single_.h>
#include <Modloader/app/structs/RTPC.h>
#endif
#undef IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WwiseSyncProcessor_RtpcSyncTask__Fields_FWDDECL)
#include <Modloader/app/structs/WwiseSyncProcessor_RtpcSyncTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseSyncProcessor_RtpcSyncTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
