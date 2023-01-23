#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReporter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter__Fields_DEFINED)
#include <Modloader/app/structs/BugReporter_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_BugReporter_State__Enum_DEFINED)
#define IL2CPP_STRUCT_BugReporter__Fields_DEFINED
struct VideoEditor;
struct String;
struct GameObject;
struct Queue_1_List_1_System_Byte_;
struct Thread;
struct TcpClient;
struct NetworkStream;
struct List_1_System_Byte__1;
struct BugReporter_BugReport;
struct List_1_System_String_;
struct List_1_BugReporter_Attachment_;
struct Dictionary_2_System_String_System_Boolean_;
struct String__Array;
struct Texture2D;
struct GUIStyle;
struct ConsoleConnection;
struct BugReporter__Fields {
    struct MonoBehaviour__Fields _;
    bool ShowStatusOverlay;
    struct VideoEditor* VideoEditor;
    struct String* Server;
    struct GameObject* VideoEditorPrefab;
    struct Queue_1_List_1_System_Byte_* m_messageQueue;
    struct Thread* m_connectThread;
    bool m_status;
    bool m_attemptSend;
    bool m_connected;
    float m_updateInterval;
    float m_updateTime;
    float m_currentStateTime;
    struct TcpClient* m_client;
    struct NetworkStream* m_stream;
    int32_t m_messageIndex;
    struct List_1_System_Byte__1* m_messages;
    bool Active;
    float m_activeTime;
    struct BugReporter_BugReport* m_bug;
    struct List_1_System_String_* m_attachments;
    struct List_1_System_String_* m_dropboxAttachments;
    struct String* m_date;
    struct String* m_bugPath;
    struct String* m_bugContents;
    struct List_1_BugReporter_Attachment_* m_attachmentsGUI;
    struct String* m_replay;
    struct List_1_BugReporter_Attachment_* m_screenshots;
    struct Dictionary_2_System_String_System_Boolean_* m_recordings;
    bool m_attachReplay;
    bool m_attachLog;
    bool m_attachTrim;
    bool m_attachSave;
    bool m_attachOutputDir;
    bool m_defaultAttachments;
    bool m_submissionPrepared;
    bool RecordingActive;
    float RecordTime;
    int32_t RecordingCount;
    bool QueueRecordingUpdate;
    bool m_replayReady;
    bool m_recordingAvailable;
    struct String* m_recordingType;
    bool m_showAdvancedControls;
    struct String__Array* m_controls;
    struct String__Array* m_defaultControls;
    struct String__Array* m_advancedControls;
    int32_t m_controlIndex;
    int32_t m_previousControlIndex;
    bool m_doKeyboardFocus;
    bool m_queueImGuiUnregister;
    struct Vector2 m_scrollPosition;
    bool m_collapseUI;
    float m_preparationTime;
    float m_submissionQueueTime;
    bool m_replayLoaded;
    bool m_submissionQueued;
    bool SwitchHost;
    struct String* m_recordingDirectory;
    struct String* m_dataDirectory;
    bool m_dataDirectoryReceived;
    bool m_setDataDirectory;
    bool m_activationAttempted;
    bool m_showShortcuts;
    struct Texture2D* m_recordingTexture;
    struct GUIStyle* m_errorStyle;
    struct String* m_errorText;
    float m_errorTime;
    struct GUIStyle* m_exceptionStyle;
    struct String* m_exceptionText;
    float m_exceptionTime;
    bool m_fastReport;
    bool m_recordingWarmup;
    int32_t m_recordingCount;
    float m_lastDirectoryCheck;
    bool m_obsStarted;
    struct String* m_obsDirectory;
    struct String* m_obsCommand;
    struct String* m_obsScene;
    struct String* m_ffmpegPath;
    int32_t m_replayCount;
    struct ConsoleConnection* ConsoleConnection;
    int32_t m_stuckReports;
    BugReporter_State__Enum m_state;

    bool m_simpleFps;
    bool m_instantiation;
    bool m_microProfiler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugReporter__Fields_FWDDECL)
#define IL2CPP_STRUCT_BugReporter__Fields_FWDDECL
#include <Modloader/app/structs/BugReporter_BugReport.h>
#include <Modloader/app/structs/ConsoleConnection.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_BugReporter_Attachment_.h>
#include <Modloader/app/structs/List_1_System_Byte__1.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/Queue_1_List_1_System_Byte_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TcpClient.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/VideoEditor.h>
#endif
#undef IL2CPP_STRUCT_BugReporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BugReporter__Fields_FWDDECL)
#include <Modloader/app/structs/BugReporter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReporter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
