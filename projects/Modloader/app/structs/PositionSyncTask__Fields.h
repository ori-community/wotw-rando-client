#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionSyncTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionSyncTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionSyncTask__Fields_DEFINED)
#include <Modloader/app/structs/PositionSyncTask_PositioningCache.h>
#include <Modloader/app/structs/SoundHostReference.h>
#include <Modloader/app/structs/SoundListenerReference.h>
#if defined(IL2CPP_STRUCT_SoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_PositionSyncTask_PositioningCache_DEFINED) && defined(IL2CPP_STRUCT_SoundListenerReference_DEFINED)
#define IL2CPP_STRUCT_PositionSyncTask__Fields_DEFINED
struct HashSet_1_System_Int32_;
struct __declspec(align(8)) PositionSyncTask__Fields {
    int32_t Id;
    int32_t FrameQuantinization;
    struct SoundHostReference Host;
    struct PositionSyncTask_PositioningCache CachedPositioning;
    struct SoundListenerReference _AsListener_k__BackingField;
    struct HashSet_1_System_Int32_* Effectors;
    bool HasChangedThisFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionSyncTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionSyncTask__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_PositionSyncTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionSyncTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionSyncTask__Fields_FWDDECL)
#include <Modloader/app/structs/PositionSyncTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionSyncTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
