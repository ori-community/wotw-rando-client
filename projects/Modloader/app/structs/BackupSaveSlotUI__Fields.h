#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BackupSaveSlotUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BackupSaveSlotUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BackupSaveSlotUI__Fields_DEFINED
struct MessageBox;
struct BaseAnimator;
struct SaveSlotInfo;
struct BackupSaveSlotUI__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* AreaName;
    struct Vector2 Size;
    struct Vector2 Center;
    struct BaseAnimator* HighlightAnimator;
    bool m_highlighted;
    struct SaveSlotInfo* SaveSlot;
    int32_t Index;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_BackupSaveSlotUI__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/SaveSlotInfo.h>
#endif
#undef IL2CPP_STRUCT_BackupSaveSlotUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Fields_FWDDECL)
#include <Modloader/app/structs/BackupSaveSlotUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BackupSaveSlotUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
