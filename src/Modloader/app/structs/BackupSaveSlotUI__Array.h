#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BackupSaveSlotUI__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BackupSaveSlotUI__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Array_DEFINED)
#define IL2CPP_STRUCT_BackupSaveSlotUI__Array_DEFINED
struct BackupSaveSlotUI__Array__Class;
struct BackupSaveSlotUI;
struct BackupSaveSlotUI__Array {
    struct BackupSaveSlotUI__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct BackupSaveSlotUI* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Array_FWDDECL)
#define IL2CPP_STRUCT_BackupSaveSlotUI__Array_FWDDECL
#include <Modloader/app/structs/BackupSaveSlotUI.h>
#include <Modloader/app/structs/BackupSaveSlotUI__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_BackupSaveSlotUI__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Array_DEFINED) && !defined(IL2CPP_STRUCT_BackupSaveSlotUI__Array_FWDDECL)
#include <Modloader/app/structs/BackupSaveSlotUI__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BackupSaveSlotUI__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
