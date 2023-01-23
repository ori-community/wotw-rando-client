#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostServerRecorder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostServerRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerRecorder__Fields_DEFINED)
#include <Modloader/app/structs/GhostRecorder__Fields.h>
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#if defined(IL2CPP_STRUCT_GhostRecorder__Fields_DEFINED) && defined(IL2CPP_STRUCT_ServerConfigurationProperties_DEFINED)
#define IL2CPP_STRUCT_GhostServerRecorder__Fields_DEFINED
struct Rigidbody__Array;
struct MoonGuid__Array;
struct String;
struct Action_1_Byte_;
struct GhostServerRecorder__Fields {
    struct GhostRecorder__Fields _;
    struct Rigidbody__Array* m_rigidBodies;
    struct MoonGuid__Array* m_targetGUIDs;
    struct String* m_serverSavePath;
    struct ServerConfigurationProperties m_serverConfigurationProperties;
    float timer;
    struct Action_1_Byte_* m_onEndRecording;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostServerRecorder__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostServerRecorder__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Byte_.h>
#include <Modloader/app/structs/MoonGuid__Array.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GhostServerRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerRecorder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostServerRecorder__Fields_FWDDECL)
#include <Modloader/app/structs/GhostServerRecorder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostServerRecorder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
