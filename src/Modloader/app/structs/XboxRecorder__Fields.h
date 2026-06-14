#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxRecorder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxRecorder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxRecorder__Fields_DEFINED
struct TcpClient;
struct NetworkStream;
struct XboxRecorder__Fields {
    struct MonoBehaviour__Fields _;
    struct TcpClient* m_client;
    struct NetworkStream* m_stream;
    float m_recordTime;
    bool _Recording_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxRecorder__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxRecorder__Fields_FWDDECL
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/TcpClient.h>
#endif
#undef IL2CPP_STRUCT_XboxRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxRecorder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxRecorder__Fields_FWDDECL)
#include <Modloader/app/structs/XboxRecorder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxRecorder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
