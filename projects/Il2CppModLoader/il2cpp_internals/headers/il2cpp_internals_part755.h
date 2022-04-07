namespace app {
struct BugReporter__Fields {
  struct MonoBehaviour__Fields _;
  bool ShowStatusOverlay;
  struct VideoEditor * VideoEditor;
  struct String * Server;
  struct GameObject * VideoEditorPrefab;
  struct Queue_1_List_1_System_Byte_ * m_messageQueue;
  struct Thread * m_connectThread;
  bool m_status;
  bool m_attemptSend;
  bool m_connected;
  float m_updateInterval;
  float m_updateTime;
  float m_currentStateTime;
  struct TcpClient * m_client;
  struct NetworkStream * m_stream;
  int32_t m_messageIndex;
  struct List_1_System_Byte__1 * m_messages;
  bool Active;
  float m_activeTime;
  struct BugReporter_BugReport * m_bug;
  struct List_1_System_String_ * m_attachments;
  struct List_1_System_String_ * m_dropboxAttachments;
  struct String * m_date;
  struct String * m_bugPath;
  struct String * m_bugContents;
  struct List_1_BugReporter_Attachment_ * m_attachmentsGUI;
  struct String * m_replay;
  struct List_1_BugReporter_Attachment_ * m_screenshots;
  struct Dictionary_2_System_String_System_Boolean_ * m_recordings;
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
  struct String * m_recordingType;
  bool m_showAdvancedControls;
  struct String__Array * m_controls;
  struct String__Array * m_defaultControls;
  struct String__Array * m_advancedControls;
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
  struct String * m_recordingDirectory;
  struct String * m_dataDirectory;
  bool m_dataDirectoryReceived;
  bool m_setDataDirectory;
  bool m_activationAttempted;
  bool m_showShortcuts;
  struct Texture2D * m_recordingTexture;
  struct GUIStyle * m_errorStyle;
  struct String * m_errorText;
  float m_errorTime;
  struct GUIStyle * m_exceptionStyle;
  struct String * m_exceptionText;
  float m_exceptionTime;
  bool m_fastReport;
  bool m_recordingWarmup;
  int32_t m_recordingCount;
  float m_lastDirectoryCheck;
  bool m_obsStarted;
  struct String * m_obsDirectory;
  struct String * m_obsCommand;
  struct String * m_obsScene;
  struct String * m_ffmpegPath;
  int32_t m_replayCount;
  struct ConsoleConnection * ConsoleConnection;
  int32_t m_stuckReports;
  enum BugReporter_State__Enum m_state;
  bool m_simpleFps;
  bool m_instantiation;
  bool m_microProfiler;
};
struct BugReporter {
  struct BugReporter__Class *klass;
  struct MonitorData *monitor;
  struct BugReporter__Fields fields;
};
struct VideoEditor__Fields {
  struct MonoBehaviour__Fields _;
  struct Button * m_recordButton;
  struct Button * m_playButton;
  struct Canvas * m_canvas;
  struct EventSystem * m_eventSystem;
  struct List_1_UnityEngine_UI_Button_ * m_buttonsToDestroyOnSwitch;
  struct VideoPlayer * m_videoPlayer;
  struct AudioSource * m_audioSource;
  struct VideoProgressBar * m_progressBar;
  struct VideoTrimMarker * m_start;
  struct VideoTrimMarker * m_end;
  struct Image * segment;
  struct RawImage * m_image;
  struct RectTransform * m_imageTransform;
  bool m_playing;
  float m_playTime;
  struct List_1_UnityEngine_GameObject_ * m_segments;
  struct Vector3 m_mousePosition;
  bool m_recording;
  struct ColorBlock m_activeColor;
  struct ColorBlock m_inactiveColor;
  bool DoTrim;
  bool TrimReady;
  bool DoneSeeking;
  struct GUIStyle * m_labelStyle;
};
struct VideoEditor {
  struct VideoEditor__Class *klass;
  struct MonitorData *monitor;
  struct VideoEditor__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_Button___Fields {
  struct Button__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_Button_ {
  struct List_1_UnityEngine_UI_Button___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_Button___Fields fields;
};
struct Button__Array {
  struct Button__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Button * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_Button_ {
  struct IEnumerator_1_UnityEngine_UI_Button___Class *klass;
  struct MonitorData *monitor;
};
struct VideoProgressBar__Fields {
  struct MonoBehaviour__Fields _;
  struct VideoEditor * videoEditor;
  struct Image * progress;
  struct PointerEventData * m_lastEvent;
  bool m_seekRequested;
  float m_skipDelay;
};
struct VideoProgressBar {
  struct VideoProgressBar__Class *klass;
  struct MonitorData *monitor;
  struct VideoProgressBar__Fields fields;
};
struct VideoTrimMarker__Fields {
  struct MonoBehaviour__Fields _;
  struct VideoProgressBar * m_progressBar;
  bool end;
  struct VideoTrimMarker * m_marker;
  struct VideoEditor * m_videoEditor;
  bool Dragging;
  bool m_timeCached;
  double m_time;
};
struct VideoTrimMarker {
  struct VideoTrimMarker__Class *klass;
  struct MonitorData *monitor;
  struct VideoTrimMarker__Fields fields;
};
struct __declspec(align(8)) Queue_1_List_1_System_Byte___Fields {
  struct List_1_System_Byte__1__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_List_1_System_Byte_ {
  struct Queue_1_List_1_System_Byte___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_List_1_System_Byte___Fields fields;
};
struct List_1_System_Byte__1__Array {
  struct List_1_System_Byte__1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_System_Byte__1 * vector[32];
};
struct IEnumerator_1_List_1_System_Byte__1 {
  struct IEnumerator_1_List_1_System_Byte__1__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) BugReporter_BugReport__Fields {
  struct String * description;
  struct String * detailedDescription;
  struct String * projectName;
  struct String * scene;
  struct String__Array * attachments;
  struct String__Array * dropboxAttachments;
  struct String__Array * directoryAttachments;
  float trimStart;
  float trimEnd;
  bool switchNoHost;
  struct String * buildId;
  struct String * assignee;
  struct String * priority;
  int32_t exceptionHash;
  struct String * topic;
};
struct BugReporter_BugReport {
  struct BugReporter_BugReport__Class *klass;
  struct MonitorData *monitor;
  struct BugReporter_BugReport__Fields fields;
};
struct __declspec(align(8)) List_1_BugReporter_Attachment___Fields {
  struct BugReporter_Attachment__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_BugReporter_Attachment_ {
  struct List_1_BugReporter_Attachment___Class *klass;
  struct MonitorData *monitor;
  struct List_1_BugReporter_Attachment___Fields fields;
};
struct __declspec(align(8)) BugReporter_Attachment__Fields {
  struct String * Path;
  bool Included;
};
struct BugReporter_Attachment {
  struct BugReporter_Attachment__Class *klass;
  struct MonitorData *monitor;
  struct BugReporter_Attachment__Fields fields;
};
struct BugReporter_Attachment__Array {
  struct BugReporter_Attachment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BugReporter_Attachment * vector[32];
};
struct IEnumerator_1_BugReporter_Attachment_ {
  struct IEnumerator_1_BugReporter_Attachment___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ConcurrentQueue_1_System_String___Fields {
  struct Object * _crossSegmentLock;
  struct ConcurrentQueue_1_T_Segment_System_String_ * _tail;
  struct ConcurrentQueue_1_T_Segment_System_String_ * _head;
};
struct ConcurrentQueue_1_System_String_ {
  struct ConcurrentQueue_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentQueue_1_System_String___Fields fields;
};
struct PaddedHeadAndTail {
  int32_t Head;
  int32_t Tail;
};
struct PaddedHeadAndTail__Boxed {
  struct PaddedHeadAndTail__Class *klass;
  struct MonitorData *monitor;
  struct PaddedHeadAndTail fields;
};
struct __declspec(align(8)) ConcurrentQueue_1_T_Segment_System_String___Fields {
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array * _slots;
  int32_t _slotsMask;
  struct PaddedHeadAndTail _headAndTail;
  bool _preservedForObservation;
  bool _frozenForEnqueues;
  struct ConcurrentQueue_1_T_Segment_System_String_ * _nextSegment;
};
struct ConcurrentQueue_1_T_Segment_System_String_ {
  struct ConcurrentQueue_1_T_Segment_System_String___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentQueue_1_T_Segment_System_String___Fields fields;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_String_ {
  struct String * Item;
  int32_t SequenceNumber;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Boxed {
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_String_ fields;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array {
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_String_ vector[32];
};
enum ConsoleConnection_State__Enum : int32_t {
  ConsoleConnection_State__Enum_Disconnected = 0,
  ConsoleConnection_State__Enum_Connecting = 1,
  ConsoleConnection_State__Enum_Ready = 2,
  ConsoleConnection_State__Enum_Receiving = 3,
  ConsoleConnection_State__Enum_Pinging = 4,
};
struct ConsoleConnection_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConsoleConnection_State__Enum value;
};
struct __declspec(align(8)) ConsoleConnection__Fields {
  bool Received;
  struct TcpListener * m_server;
  struct TcpClient * m_client;
  struct NetworkStream * m_stream;
  float m_currentStateTime;
  bool m_connected;
  struct Thread * m_connectThread;
  struct Thread * m_fileThread;
  float m_replayDuration;
  struct String * m_replayPath;
  bool m_takeScreenshot;
  struct String * m_screenshotPath;
  struct String * m_ip;
  bool m_receiveFiles;
  enum ConsoleConnection_State__Enum m_state;
};
struct ConsoleConnection {
  struct ConsoleConnection__Class *klass;
  struct MonitorData *monitor;
  struct ConsoleConnection__Fields fields;
};
struct IEnumerator_1_UnityEngine_UI_Button___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UI_Button___StaticFields {
};
struct IEnumerator_1_UnityEngine_UI_Button___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UI_Button___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UI_Button___VTable vtable;
};
struct List_1_UnityEngine_UI_Button___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_UI_Button___StaticFields {
  struct Button__Array * _emptyArray;
};
struct List_1_UnityEngine_UI_Button___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UI_Button___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UI_Button___VTable vtable;
};
struct VideoProgressBar__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnDrag;
  VirtualInvokeData OnPointerDown;
};
struct VideoProgressBar__StaticFields {
};
struct VideoProgressBar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoProgressBar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoProgressBar__VTable vtable;
};
struct VideoTrimMarker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnDrag;
  VirtualInvokeData OnPointerUp;
  VirtualInvokeData OnPointerDown;
};
struct VideoTrimMarker__StaticFields {
};
struct VideoTrimMarker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoTrimMarker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoTrimMarker__VTable vtable;
};
struct VideoEditor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VideoEditor__StaticFields {
};
struct VideoEditor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoEditor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoEditor__VTable vtable;
};
struct IEnumerator_1_List_1_System_Byte__1__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_System_Byte__1__StaticFields {
};
struct IEnumerator_1_List_1_System_Byte__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_System_Byte__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_System_Byte__1__VTable vtable;
};
struct Queue_1_List_1_System_Byte___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Queue_1_List_1_System_Byte___StaticFields {
};
struct Queue_1_List_1_System_Byte___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_List_1_System_Byte___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_List_1_System_Byte___VTable vtable;
};
struct BugReporter_BugReport__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BugReporter_BugReport__StaticFields {
};
struct BugReporter_BugReport__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BugReporter_BugReport__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BugReporter_BugReport__VTable vtable;
};
struct BugReporter_Attachment__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BugReporter_Attachment__StaticFields {
};
struct BugReporter_Attachment__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BugReporter_Attachment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BugReporter_Attachment__VTable vtable;
};
struct IEnumerator_1_BugReporter_Attachment___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_BugReporter_Attachment___StaticFields {
};
struct IEnumerator_1_BugReporter_Attachment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_BugReporter_Attachment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_BugReporter_Attachment___VTable vtable;
};
struct List_1_BugReporter_Attachment___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_BugReporter_Attachment___StaticFields {
  struct BugReporter_Attachment__Array * _emptyArray;
};
struct List_1_BugReporter_Attachment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_BugReporter_Attachment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_BugReporter_Attachment___VTable vtable;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___StaticFields {
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___VTable vtable;
};
struct PaddedHeadAndTail__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PaddedHeadAndTail__StaticFields {
};
struct PaddedHeadAndTail__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PaddedHeadAndTail__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PaddedHeadAndTail__VTable vtable;
};
struct ConcurrentQueue_1_T_Segment_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentQueue_1_T_Segment_System_String___StaticFields {
};
struct ConcurrentQueue_1_T_Segment_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentQueue_1_T_Segment_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentQueue_1_T_Segment_System_String___VTable vtable;
};
struct ConcurrentQueue_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd;
  VirtualInvokeData System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake;
  VirtualInvokeData ToArray;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData CopyTo;
};
struct ConcurrentQueue_1_System_String___StaticFields {
};
struct ConcurrentQueue_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentQueue_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentQueue_1_System_String___VTable vtable;
};
struct ConsoleConnection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsoleConnection__StaticFields {
};
struct ConsoleConnection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsoleConnection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsoleConnection__VTable vtable;
};
struct BugReporter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BugReporter__StaticFields {
  struct BugReporter * Instance;
  struct HashSet_1_Moon_ISuspendable_ * SuspendablesToIgnoreForGameplay;
  struct ConcurrentQueue_1_System_String_ * s_screenshotQueue;
};
struct BugReporter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BugReporter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BugReporter__VTable vtable;
};

struct BugReporter_c {
  struct BugReporter_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_IO_FileInfo_DateTime___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_IO_FileInfo_DateTime_ {
  struct Func_2_System_IO_FileInfo_DateTime___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_IO_FileInfo_DateTime___Fields fields;
};
struct Func_2_System_IO_FileInfo_DateTime___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Func_2_System_IO_FileInfo_DateTime___StaticFields {
};
struct Func_2_System_IO_FileInfo_DateTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_IO_FileInfo_DateTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_IO_FileInfo_DateTime___VTable vtable;
};
struct BugReporter_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BugReporter_c__StaticFields {
  struct BugReporter_c * __9;
  struct Func_2_System_IO_FileInfo_DateTime_ * __9__124_0;
};
struct BugReporter_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BugReporter_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BugReporter_c__VTable vtable;
};

struct __declspec(align(8)) BugReporter_RecordScreenshot_d_129__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct String * path;
};
struct BugReporter_RecordScreenshot_d_129 {
  struct BugReporter_RecordScreenshot_d_129__Class *klass;
  struct MonitorData *monitor;
  struct BugReporter_RecordScreenshot_d_129__Fields fields;
};
struct BugReporter_RecordScreenshot_d_129__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct BugReporter_RecordScreenshot_d_129__StaticFields {
};
struct BugReporter_RecordScreenshot_d_129__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BugReporter_RecordScreenshot_d_129__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BugReporter_RecordScreenshot_d_129__VTable vtable;
};

enum AutomationRunType__Enum : int32_t {
  AutomationRunType__Enum_Performance = 0,
  AutomationRunType__Enum_Stress = 1,
  AutomationRunType__Enum_Exception = 2,
  AutomationRunType__Enum_PoolPerformance = 3,
  AutomationRunType__Enum_SceneLoad = 4,
};
struct AutomationRunType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AutomationRunType__Enum value;
};
struct __declspec(align(8)) AutomationRunWrapper__Fields {
  enum AutomationRunType__Enum m_type;
  double m_previousRealTimeSinceStartup;
  double m_runtime;
  bool m_hasStarted;
};
struct AutomationRunWrapper {
  struct AutomationRunWrapper__Class *klass;
  struct MonitorData *monitor;
  struct AutomationRunWrapper__Fields fields;
};
struct AutomationRunWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AutomationRunWrapper__StaticFields {
};
struct AutomationRunWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutomationRunWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutomationRunWrapper__VTable vtable;
};

struct __declspec(align(8)) JUnitReporter_TestSuites__Fields {
  struct String * m_id;
  struct String * m_name;
  struct TimeSpan m_duration;
  struct List_1_JUnitReporter_TestSuite_ * m_testSuites;
  int32_t m_numberOfTestSuitesWritten;
  int32_t m_numberOfTestCasesWrittenToOutput;
};
struct JUnitReporter_TestSuites {
  struct JUnitReporter_TestSuites__Class *klass;
  struct MonitorData *monitor;
  struct JUnitReporter_TestSuites__Fields fields;
};
struct __declspec(align(8)) List_1_JUnitReporter_TestSuite___Fields {
  struct JUnitReporter_TestSuite__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_JUnitReporter_TestSuite_ {
  struct List_1_JUnitReporter_TestSuite___Class *klass;
  struct MonitorData *monitor;
  struct List_1_JUnitReporter_TestSuite___Fields fields;
};
struct JUnitReporter_TestSuite__Array {
  struct JUnitReporter_TestSuite__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JUnitReporter_TestSuite * vector[32];
};
struct IEnumerator_1_JUnitReporter_TestSuite_ {
  struct IEnumerator_1_JUnitReporter_TestSuite___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_JUnitReporter_TestSuite___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_JUnitReporter_TestSuite___StaticFields {
};
struct IEnumerator_1_JUnitReporter_TestSuite___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_JUnitReporter_TestSuite___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_JUnitReporter_TestSuite___VTable vtable;
};
struct List_1_JUnitReporter_TestSuite___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_JUnitReporter_TestSuite___StaticFields {
  struct JUnitReporter_TestSuite__Array * _emptyArray;
};
struct List_1_JUnitReporter_TestSuite___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_JUnitReporter_TestSuite___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_JUnitReporter_TestSuite___VTable vtable;
};
struct JUnitReporter_TestSuites__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JUnitReporter_TestSuites__StaticFields {
};
struct JUnitReporter_TestSuites__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JUnitReporter_TestSuites__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JUnitReporter_TestSuites__VTable vtable;
};

struct JUnitReporter_TestSuites_c {
  struct JUnitReporter_TestSuites_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_JUnitReporter_TestSuite_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_JUnitReporter_TestSuite_Int32_ {
  struct Func_2_JUnitReporter_TestSuite_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_JUnitReporter_TestSuite_Int32___Fields fields;
};
struct Func_2_JUnitReporter_TestSuite_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Func_2_JUnitReporter_TestSuite_Int32___StaticFields {
};
struct Func_2_JUnitReporter_TestSuite_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_JUnitReporter_TestSuite_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_JUnitReporter_TestSuite_Int32___VTable vtable;
};
struct JUnitReporter_TestSuites_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JUnitReporter_TestSuites_c__StaticFields {
  struct JUnitReporter_TestSuites_c * __9;
  struct Func_2_JUnitReporter_TestSuite_Int32_ * __9__8_0;
  struct Func_2_JUnitReporter_TestSuite_Int32_ * __9__8_1;
};
struct JUnitReporter_TestSuites_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JUnitReporter_TestSuites_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JUnitReporter_TestSuites_c__VTable vtable;
};

struct JUnitReporter_TestSuite_c {
  struct JUnitReporter_TestSuite_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_JUnitReporter_TestCase_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_JUnitReporter_TestCase_Int32_ {
  struct Func_2_JUnitReporter_TestCase_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_JUnitReporter_TestCase_Int32___Fields fields;
};}