#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateValueStore__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateValueStore__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueStore__Fields_DEFINED)
#include <Modloader/app/structs/UberStateSaveFileHandler_LoadStatus__Enum.h>
#if defined(IL2CPP_STRUCT_UberStateSaveFileHandler_LoadStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_UberStateValueStore__Fields_DEFINED
struct Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_;
struct Byte__Array;
struct __declspec(align(8)) UberStateValueStore__Fields {
    UberStateSaveFileHandler_LoadStatus__Enum LoadStatus;

    int32_t _Version_k__BackingField;
    struct Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_* m_groupMap;
    struct Byte__Array* m_data;
    struct Byte__Array* m_dataBackup;
    int32_t m_dataBackupSize;
    bool m_isInitialized;
    int32_t m_id;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateValueStore__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateValueStore__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_.h>
#endif
#undef IL2CPP_STRUCT_UberStateValueStore__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueStore__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateValueStore__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateValueStore__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateValueStore__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
