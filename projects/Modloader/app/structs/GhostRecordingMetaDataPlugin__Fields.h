#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_DEFINED)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_DEFINED
struct GhostRecordingMetaDataData;
struct GhostRecordingMetaDataPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct GhostRecordingMetaDataData* Data;
    struct Vector3 m_startingPlayerPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_FWDDECL
#include <Modloader/app/structs/GhostRecordingMetaDataData.h>
#endif
#undef IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
