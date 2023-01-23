#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotsManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotsManager__Fields_DEFINED
struct UberStateValueStore;
struct List_1_SaveSlotInfo_;
struct PlayerUberStateDescriptor;
struct SaveSlotsManager__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_currentSlotIndex;
    int32_t m_backupIndex;
    int32_t m_previousBackupIndex;
    struct UberStateValueStore* m_uberStateValueStore;
    struct List_1_SaveSlotInfo_* SaveSlots;
    int32_t m_slotsRefreshForVersion;
    struct PlayerUberStateDescriptor* PlayerDescriptor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotsManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotsManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SaveSlotInfo_.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/UberStateValueStore.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotsManager__Fields_FWDDECL)
#include <Modloader/app/structs/SaveSlotsManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotsManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
