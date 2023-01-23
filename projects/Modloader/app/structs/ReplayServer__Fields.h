#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayServer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayServer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayServer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ServerConfigurationProperties_DEFINED)
#define IL2CPP_STRUCT_ReplayServer__Fields_DEFINED
struct StreamReader;
struct StreamWriter;
struct TcpListener;
struct TcpClient;
struct Queue_1_List_1_ServerObject_;
struct Rigidbody__Array;
struct GameObject;
struct Thread;
struct GhostServerRecorder;
struct BinaryFormatter;
struct ReplayServer__Fields {
    struct MonoBehaviour__Fields _;
    struct StreamReader* m_reader;
    struct StreamWriter* m_writer;
    struct TcpListener* m_listener;
    struct TcpClient* m_client;
    struct Queue_1_List_1_ServerObject_* m_requestQueue;
    struct Rigidbody__Array* m_dynamicObjects;
    struct GameObject* m_simulationRoot;
    struct Thread* m_listenThread;
    bool m_isReceiving;
    bool m_isReceivingThreadAlive;
    struct GhostServerRecorder* m_recorder;
    struct BinaryFormatter* m_serializer;
    struct ServerConfigurationProperties m_defaultConfiguration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayServer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplayServer__Fields_FWDDECL
#include <Modloader/app/structs/BinaryFormatter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GhostServerRecorder.h>
#include <Modloader/app/structs/Queue_1_List_1_ServerObject_.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/StreamReader.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/TcpClient.h>
#include <Modloader/app/structs/TcpListener.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_ReplayServer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayServer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayServer__Fields_FWDDECL)
#include <Modloader/app/structs/ReplayServer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayServer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
