#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckpointPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckpointPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointPlugin__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CheckpointPlugin__Fields_DEFINED
struct CheckpointData;
struct List_1_MoonGuid_;
struct CheckpointPlugin__Fields {
    struct MonoBehaviour__Fields _;
    struct CheckpointData* m_data;
    bool m_createCheckpoint;
    int32_t m_frame;
    struct List_1_MoonGuid_* m_sceneNames;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheckpointPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_CheckpointPlugin__Fields_FWDDECL
#include <Modloader/app/structs/CheckpointData.h>
#include <Modloader/app/structs/List_1_MoonGuid_.h>
#endif
#undef IL2CPP_STRUCT_CheckpointPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CheckpointPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/CheckpointPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckpointPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
