#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuItemSelectionManager__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuItemSelectionManager__Fields_DEFINED)
#define IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_DEFINED
struct GameObject;
struct List_1_SaveSlotBackupInfo_;
struct BackupSaveCleverMenuItemSelectionManager__Fields {
    struct CleverMenuItemSelectionManager__Fields _;
    struct GameObject* NoBackupsText;
    struct GameObject* LoadingText;
    int32_t m_SelectedSlotIndex;
    struct List_1_SaveSlotBackupInfo_* m_infos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_SaveSlotBackupInfo_.h>
#endif
#undef IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItemSelectionManager__Fields_FWDDECL)
#include <Modloader/app/structs/BackupSaveCleverMenuItemSelectionManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BackupSaveCleverMenuItemSelectionManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
