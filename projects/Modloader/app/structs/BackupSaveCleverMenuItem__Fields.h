#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_DEFINED
struct MessageBox;
struct ActionMethod;
struct SaveSlotInfo;
struct BackupSaveCleverMenuItem__Fields {
    struct CleverMenuItem__Fields _;
    struct MessageBox* NameMessageBox;
    struct MessageBox* TimeMessageBox;
    struct ActionMethod* LoadGameAction;
    int32_t m_saveSlotIndex;
    struct SaveSlotInfo* m_saveSlotInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/SaveSlotInfo.h>
#endif
#undef IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BackupSaveCleverMenuItem__Fields_FWDDECL)
#include <Modloader/app/structs/BackupSaveCleverMenuItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BackupSaveCleverMenuItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
