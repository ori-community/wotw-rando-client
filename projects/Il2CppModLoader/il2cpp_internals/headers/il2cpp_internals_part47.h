namespace app {

struct __declspec(align(8)) SortedList_SortedListDebugView__Fields {
  struct SortedList * sortedList;
};
struct SortedList_SortedListDebugView {
  struct SortedList_SortedListDebugView__Class *klass;
  struct MonitorData *monitor;
  struct SortedList_SortedListDebugView__Fields fields;
};
struct SortedList_SortedListDebugView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SortedList_SortedListDebugView__StaticFields {
};
struct SortedList_SortedListDebugView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SortedList_SortedListDebugView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SortedList_SortedListDebugView__VTable vtable;
};

struct __declspec(align(8)) Stack_StackEnumerator__Fields {
  struct Stack * _stack;
  int32_t _index;
  int32_t _version;
  struct Object * currentElement;
};
struct Stack_StackEnumerator {
  struct Stack_StackEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct Stack_StackEnumerator__Fields fields;
};
struct Stack_StackEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData Clone;
  VirtualInvokeData MoveNext_1;
  VirtualInvokeData get_Current_1;
  VirtualInvokeData Reset_1;
};
struct Stack_StackEnumerator__StaticFields {
};
struct Stack_StackEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_StackEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_StackEnumerator__VTable vtable;
};

struct __declspec(align(8)) Stack_StackDebugView__Fields {
  struct Stack * stack;
};
struct Stack_StackDebugView {
  struct Stack_StackDebugView__Class *klass;
  struct MonitorData *monitor;
  struct Stack_StackDebugView__Fields fields;
};
struct Stack_StackDebugView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Stack_StackDebugView__StaticFields {
};
struct Stack_StackDebugView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_StackDebugView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_StackDebugView__VTable vtable;
};

enum EventSourceSettings__Enum : int32_t {
  EventSourceSettings__Enum_Default = 0,
  EventSourceSettings__Enum_ThrowOnEventWriteErrors = 1,
  EventSourceSettings__Enum_EtwManifestEventFormat = 4,
  EventSourceSettings__Enum_EtwSelfDescribingEventFormat = 8,
};
struct EventSourceSettings__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventSourceSettings__Enum value;
};
enum EventLevel__Enum : int32_t {
  EventLevel__Enum_LogAlways = 0,
  EventLevel__Enum_Critical = 1,
  EventLevel__Enum_Error = 2,
  EventLevel__Enum_Warning = 3,
  EventLevel__Enum_Informational = 4,
  EventLevel__Enum_Verbose = 5,
};
struct EventLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventLevel__Enum value;
};
enum EventKeywords__Enum : int64_t {
  EventKeywords__Enum_None = 0,
  EventKeywords__Enum_All = -1,
  EventKeywords__Enum_MicrosoftTelemetry = 562949953421312,
  EventKeywords__Enum_WdiContext = 562949953421312,
  EventKeywords__Enum_WdiDiagnostic = 1125899906842624,
  EventKeywords__Enum_Sqm = 2251799813685248,
  EventKeywords__Enum_AuditFailure = 4503599627370496,
  EventKeywords__Enum_AuditSuccess = 9007199254740992,
  EventKeywords__Enum_CorrelationHint = 4503599627370496,
  EventKeywords__Enum_EventLogClassic = 36028797018963968,
};
struct EventKeywords__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventKeywords__Enum value;
};
struct SessionMask {
  uint32_t m_mask;
};
struct SessionMask__Boxed {
  struct SessionMask__Class *klass;
  struct MonitorData *monitor;
  struct SessionMask fields;
};
struct __declspec(align(8)) EventSource__Fields {
  struct Byte__Array * providerMetadata;
  struct String * m_name;
  int32_t m_id;
  struct Guid m_guid;
  struct EventSource_EventMetadata__Array * m_eventData;
  struct Byte__Array * m_rawManifest;
  struct EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs_ * m_eventCommandExecuted;
  enum EventSourceSettings__Enum m_config;
  bool m_eventSourceEnabled;
  enum EventLevel__Enum m_level;
  enum EventKeywords__Enum m_matchAnyKeyword;
  struct EventDispatcher * m_Dispatchers;
  struct EventSource_OverideEventProvider * m_provider;
  bool m_completelyInited;
  struct Exception * m_constructionException;
  uint8_t m_outOfBandMessageCount;
  struct EventCommandEventArgs * m_deferredCommands;
  struct String__Array * m_traits;
  struct SessionMask m_curLiveSessions;
  struct EtwSession__Array * m_etwSessionIdMap;
  struct List_1_System_Diagnostics_Tracing_EtwSession_ * m_legacySessions;
  int64_t m_keywordTriggers;
  struct SessionMask m_activityFilteringForETWEnabled;
  struct ActivityTracker * m_activityTracker;
};
struct EventSource {
  struct EventSource__Class *klass;
  struct MonitorData *monitor;
  struct EventSource__Fields fields;
};
struct CDSCollectionETWBCLProvider__Fields {
  struct EventSource__Fields _;
};
struct CDSCollectionETWBCLProvider {
  struct CDSCollectionETWBCLProvider__Class *klass;
  struct MonitorData *monitor;
  struct CDSCollectionETWBCLProvider__Fields fields;
};
enum EventTags__Enum : int32_t {
  EventTags__Enum_None = 0,
};
struct EventTags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventTags__Enum value;
};
enum EventActivityOptions__Enum : int32_t {
  EventActivityOptions__Enum_None = 0,
  EventActivityOptions__Enum_Disable = 2,
  EventActivityOptions__Enum_Recursive = 4,
  EventActivityOptions__Enum_Detachable = 8,
};
struct EventActivityOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventActivityOptions__Enum value;
};
struct EventSource_EventMetadata {
  struct EventDescriptor Descriptor;
  enum EventTags__Enum Tags;
  bool EnabledForAnyListener;
  bool EnabledForETW;
  bool HasRelatedActivityID;
  uint8_t TriggersActivityTracking;
  struct String * Name;
  struct String * Message;
  struct ParameterInfo_1__Array * Parameters;
  struct TraceLoggingEventTypes * TraceLoggingEventTypes;
  enum EventActivityOptions__Enum ActivityOptions;
};
struct EventSource_EventMetadata__Boxed {
  struct EventSource_EventMetadata__Class *klass;
  struct MonitorData *monitor;
  struct EventSource_EventMetadata fields;
};
struct EventSource_EventMetadata__Array {
  struct EventSource_EventMetadata__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EventSource_EventMetadata vector[32];
};
struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo_ {
  struct NameInfo_1__Array * items;
};
struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Boxed {
  struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo_ fields;
};
struct __declspec(align(8)) TraceLoggingEventTypes__Fields {
  struct TraceLoggingTypeInfo__Array * typeInfos;
  struct String * name;
  enum EventTags__Enum tags;
  uint8_t level;
  uint8_t opcode;
  enum EventKeywords__Enum keywords;
  struct Byte__Array * typeMetadata;
  int32_t scratchSize;
  int32_t dataCount;
  int32_t pinCount;
  struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo_ nameInfos;
};
struct TraceLoggingEventTypes {
  struct TraceLoggingEventTypes__Class *klass;
  struct MonitorData *monitor;
  struct TraceLoggingEventTypes__Fields fields;
};
enum EventOpcode__Enum : int32_t {
  EventOpcode__Enum_Info = 0,
  EventOpcode__Enum_Start = 1,
  EventOpcode__Enum_Stop = 2,
  EventOpcode__Enum_DataCollectionStart = 3,
  EventOpcode__Enum_DataCollectionStop = 4,
  EventOpcode__Enum_Extension = 5,
  EventOpcode__Enum_Reply = 6,
  EventOpcode__Enum_Resume = 7,
  EventOpcode__Enum_Suspend = 8,
  EventOpcode__Enum_Send = 9,
  EventOpcode__Enum_Receive = 240,
};
struct EventOpcode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventOpcode__Enum value;
};
struct __declspec(align(8)) TraceLoggingTypeInfo__Fields {
  struct String * name;
  enum EventKeywords__Enum keywords;
  enum EventLevel__Enum level;
  enum EventOpcode__Enum opcode;
  enum EventTags__Enum tags;
  struct Type * dataType;
};
struct TraceLoggingTypeInfo {
  struct TraceLoggingTypeInfo__Class *klass;
  struct MonitorData *monitor;
  struct TraceLoggingTypeInfo__Fields fields;
};
struct TraceLoggingTypeInfo__Array {
  struct TraceLoggingTypeInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TraceLoggingTypeInfo * vector[32];
};
struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo_ {
  struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) NameInfo_1__Fields {
  struct String * name;
  enum EventTags__Enum tags;
  int32_t identity;
  struct Byte__Array * nameMetadata;
};
struct NameInfo_1 {
  struct NameInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct NameInfo_1__Fields fields;
};
struct NameInfo_1__Array {
  struct NameInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NameInfo_1 * vector[32];
};
struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_ {
  struct String * key;
  enum EventTags__Enum value;
};
struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Boxed {
  struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_ fields;
};
struct EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs_ {
  struct EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs___Fields fields;
};
enum EventCommand__Enum : int32_t {
  EventCommand__Enum_Update = 0,
  EventCommand__Enum_SendManifest = -1,
  EventCommand__Enum_Enable = -2,
  EventCommand__Enum_Disable = -3,
};
struct EventCommand__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventCommand__Enum value;
};
struct __declspec(align(8)) EventCommandEventArgs__Fields {
  enum EventCommand__Enum _Command_k__BackingField;
  struct IDictionary_2_System_String_System_String_ * _Arguments_k__BackingField;
  struct EventSource * eventSource;
  struct EventDispatcher * dispatcher;
  struct EventListener * listener;
  int32_t perEventSourceSessionId;
  int32_t etwSessionId;
  bool enable;
  enum EventLevel__Enum level;
  enum EventKeywords__Enum matchAnyKeyword;
  struct EventCommandEventArgs * nextCommand;
};
struct EventCommandEventArgs {
  struct EventCommandEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct EventCommandEventArgs__Fields fields;
};
struct __declspec(align(8)) EventDispatcher__Fields {
  struct EventListener * m_Listener;
  struct Boolean__Array * m_EventEnabled;
  bool m_activityFilteringEnabled;
  struct EventDispatcher * m_Next;
};
struct EventDispatcher {
  struct EventDispatcher__Class *klass;
  struct MonitorData *monitor;
  struct EventDispatcher__Fields fields;
};
struct __declspec(align(8)) EventListener__Fields {
  struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_ * _EventSourceCreated;
  struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs_ * EventWritten;
  struct EventListener * m_Next;
  struct ActivityFilter * m_activityFilter;
};
struct EventListener {
  struct EventListener__Class *klass;
  struct MonitorData *monitor;
  struct EventListener__Fields fields;
};
struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_ {
  struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___Fields fields;
};
struct __declspec(align(8)) EventSourceCreatedEventArgs__Fields {
  struct EventSource * _EventSource_k__BackingField;
};
struct EventSourceCreatedEventArgs {
  struct EventSourceCreatedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct EventSourceCreatedEventArgs__Fields fields;
};
struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs_ {
  struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___Fields fields;
};
struct __declspec(align(8)) EventWrittenEventArgs__Fields {
  int32_t _EventId_k__BackingField;
  struct Guid _RelatedActivityId_k__BackingField;
  struct ReadOnlyCollection_1_System_Object_ * _Payload_k__BackingField;
  struct String * m_message;
  struct String * m_eventName;
  struct EventSource * m_eventSource;
  struct ReadOnlyCollection_1_System_String_ * m_payloadNames;
};
struct EventWrittenEventArgs {
  struct EventWrittenEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct EventWrittenEventArgs__Fields fields;
};
struct __declspec(align(8)) ReadOnlyCollection_1_System_Object___Fields {
  struct IList_1_System_Object_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_System_Object_ {
  struct ReadOnlyCollection_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_System_Object___Fields fields;
};
struct __declspec(align(8)) ReadOnlyCollection_1_System_String___Fields {
  struct IList_1_System_String_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_System_String_ {
  struct ReadOnlyCollection_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_System_String___Fields fields;
};
struct IList_1_System_String_ {
  struct IList_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ActivityFilter__Fields {
  struct ConcurrentDictionary_2_System_Guid_System_Int32_ * m_activeActivities;
  struct ConcurrentDictionary_2_System_Guid_System_Tuple_2_ * m_rootActiveActivities;
  struct Guid m_providerGuid;
  int32_t m_eventId;
  int32_t m_samplingFreq;
  int32_t m_curSampleCount;
  int32_t m_perEventSourceSessionId;
  struct ActivityFilter * m_next;
  struct Action_1_Guid_ * m_myActivityDelegate;
};
struct ActivityFilter {
  struct ActivityFilter__Class *klass;
  struct MonitorData *monitor;
  struct ActivityFilter__Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_System_Guid_System_Int32___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32_ * _tables;
  struct IEqualityComparer_1_System_Guid_ * _comparer;
  bool _growLockArray;
  int32_t _budget;
};
struct ConcurrentDictionary_2_System_Guid_System_Int32_ {
  struct ConcurrentDictionary_2_System_Guid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_System_Guid_System_Int32___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array * _buckets;
  struct Object__Array * _locks;
  struct Int32__Array * _countPerLock;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32_ {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Fields {
  struct Guid _key;
  int32_t _value;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32_ * _next;
  int32_t _hashcode;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32_ {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Fields fields;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32_ * vector[32];
};
struct IEqualityComparer_1_System_Guid_ {
  struct IEqualityComparer_1_System_Guid___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Guid_ {
  struct ICollection_1_System_Guid___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Guid_System_Int32_ {
  struct Guid key;
  int32_t value;
};
struct KeyValuePair_2_System_Guid_System_Int32___Boxed {
  struct KeyValuePair_2_System_Guid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Guid_System_Int32_ fields;
};
struct KeyValuePair_2_System_Guid_System_Int32___Array {
  struct KeyValuePair_2_System_Guid_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Guid_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Guid_ {
  struct IEnumerable_1_System_Guid___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ConcurrentDictionary_2_System_Guid_System_Tuple_2___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Tuple_2_ * _tables;
  struct IEqualityComparer_1_System_Guid_ * _comparer;
  bool _growLockArray;
  int32_t _budget;
};
struct ConcurrentDictionary_2_System_Guid_System_Tuple_2_ {
  struct ConcurrentDictionary_2_System_Guid_System_Tuple_2___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_System_Guid_System_Tuple_2___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Tuple_2___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array * _buckets;
  struct Object__Array * _locks;
  struct Int32__Array * _countPerLock;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Tuple_2_ {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Tuple_2___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Tuple_2___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Fields {
  struct Guid _key;
  struct Tuple_2_Guid_Int32_ * _value;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2_ * _next;
  int32_t _hashcode;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2_ {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Fields fields;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2_ * vector[32];
};
struct __declspec(align(8)) Tuple_2_Guid_Int32___Fields {
  struct Guid m_Item1;
  int32_t m_Item2;
};
struct Tuple_2_Guid_Int32_ {
  struct Tuple_2_Guid_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Tuple_2_Guid_Int32___Fields fields;
};
struct ICollection_1_System_Tuple_2_ {
  struct ICollection_1_System_Tuple_2___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Guid_System_Tuple_2_ {
  struct Guid key;
  struct Tuple_2_Guid_Int32_ * value;
};
struct KeyValuePair_2_System_Guid_System_Tuple_2___Boxed {
  struct KeyValuePair_2_System_Guid_System_Tuple_2___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Guid_System_Tuple_2_ fields;
};
struct KeyValuePair_2_System_Guid_System_Tuple_2___Array {
  struct KeyValuePair_2_System_Guid_System_Tuple_2___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Guid_System_Tuple_2_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Tuple_2_ {
  struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Tuple_2___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Tuple_2_ {
  struct IEnumerable_1_System_Tuple_2___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_Guid___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Guid_ {
  struct Action_1_Guid___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Guid___Fields fields;
};
struct __declspec(align(8)) List_1_System_WeakReference___Fields {
  struct WeakReference__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_WeakReference_ {
  struct List_1_System_WeakReference___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_WeakReference___Fields fields;
};
struct WeakReference__Array {
  struct WeakReference__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WeakReference * vector[32];
};
struct IEnumerator_1_System_WeakReference_ {
  struct IEnumerator_1_System_WeakReference___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) EventProvider__Fields {
  struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * m_etwCallback;
  struct GCHandle m_thisGCHandle;
  int64_t m_regHandle;
  uint8_t m_level;
  int64_t m_anyKeywordMask;
  int64_t m_allKeywordMask;
  struct List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * m_liveSessions;
  bool m_enabled;
  struct Guid m_providerId;
  bool m_disposed;
};
struct EventProvider {
  struct EventProvider__Class *klass;
  struct MonitorData *monitor;
  struct EventProvider__Fields fields;
};
struct EventSource_OverideEventProvider__Fields {
  struct EventProvider__Fields _;
  struct EventSource * m_eventSource;
};
struct EventSource_OverideEventProvider {
  struct EventSource_OverideEventProvider__Class *klass;
  struct MonitorData *monitor;
  struct EventSource_OverideEventProvider__Fields fields;
};
struct __declspec(align(8)) List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo___Fields {
  struct EventProvider_SessionInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
  struct List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo___Fields fields;
};
struct EventProvider_SessionInfo {
  int32_t sessionIdBit;
  int32_t etwSessionId;
};
struct EventProvider_SessionInfo__Boxed {
  struct EventProvider_SessionInfo__Class *klass;
  struct MonitorData *monitor;
  struct EventProvider_SessionInfo fields;
};
struct EventProvider_SessionInfo__Array {
  struct EventProvider_SessionInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EventProvider_SessionInfo vector[32];
};
struct IEnumerator_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
  struct IEnumerator_1_System_Diagnostics_Tracing_EventProvider_SessionInfo___Class *klass;
  struct MonitorData *monitor;
};
enum EventProvider_WriteEventErrorCode__Enum : int32_t {
  EventProvider_WriteEventErrorCode__Enum_NoError = 0,
  EventProvider_WriteEventErrorCode__Enum_NoFreeBuffers = 1,
  EventProvider_WriteEventErrorCode__Enum_EventTooBig = 2,
  EventProvider_WriteEventErrorCode__Enum_NullInput = 3,
  EventProvider_WriteEventErrorCode__Enum_TooManyArgs = 4,
  EventProvider_WriteEventErrorCode__Enum_Other = 5,
};
struct EventProvider_WriteEventErrorCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventProvider_WriteEventErrorCode__Enum value;
};
enum ControllerCommand__Enum : int32_t {
  ControllerCommand__Enum_Update = 0,
  ControllerCommand__Enum_SendManifest = -1,
  ControllerCommand__Enum_Enable = -2,
  ControllerCommand__Enum_Disable = -3,
};
struct ControllerCommand__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ControllerCommand__Enum value;
};
struct __declspec(align(8)) EtwSession__Fields {
  int32_t m_etwSessionId;
  struct ActivityFilter * m_activityFilter;
};
struct EtwSession {
  struct EtwSession__Class *klass;
  struct MonitorData *monitor;
  struct EtwSession__Fields fields;
};
struct EtwSession__Array {
  struct EtwSession__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EtwSession * vector[32];
};
struct __declspec(align(8)) List_1_System_WeakReference_1___Fields {
  struct WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_WeakReference_1_ {
  struct List_1_System_WeakReference_1___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_WeakReference_1___Fields fields;
};
struct __declspec(align(8)) WeakReference_1_System_Diagnostics_Tracing_EtwSession___Fields {
  struct GCHandle handle;
  bool trackResurrection;
};
struct WeakReference_1_System_Diagnostics_Tracing_EtwSession_ {
  struct WeakReference_1_System_Diagnostics_Tracing_EtwSession___Class *klass;
  struct MonitorData *monitor;
  struct WeakReference_1_System_Diagnostics_Tracing_EtwSession___Fields fields;
};
struct WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array {
  struct WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WeakReference_1_System_Diagnostics_Tracing_EtwSession_ * vector[32];
};
struct IEnumerator_1_System_WeakReference_1_ {
  struct IEnumerator_1_System_WeakReference_1___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Diagnostics_Tracing_EtwSession___Fields {
  struct EtwSession__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Diagnostics_Tracing_EtwSession_ {
  struct List_1_System_Diagnostics_Tracing_EtwSession___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Diagnostics_Tracing_EtwSession___Fields fields;
};
struct IEnumerator_1_System_Diagnostics_Tracing_EtwSession_ {
  struct IEnumerator_1_System_Diagnostics_Tracing_EtwSession___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ActivityTracker__Fields {
  struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ * m_current;
  bool m_checkedForEnable;
};
struct ActivityTracker {
  struct ActivityTracker__Class *klass;
  struct MonitorData *monitor;
  struct ActivityTracker__Fields fields;
};
struct __declspec(align(8)) AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Fields {
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1 * m_valueChangedHandler;
};
struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ {
  struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Class *klass;
  struct MonitorData *monitor;
  struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Fields fields;
};
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1__Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1 {
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1__Fields fields;
};
struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ {
  struct ActivityTracker_ActivityInfo * _PreviousValue_k__BackingField;
  struct ActivityTracker_ActivityInfo * _CurrentValue_k__BackingField;
  bool _ThreadContextChanged_k__BackingField;
};
struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Boxed {
  struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Class *klass;
  struct MonitorData *monitor;
  struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ fields;
};
struct __declspec(align(8)) ActivityTracker_ActivityInfo__Fields {
  struct String * m_name;
  int64_t m_uniqueId;
  struct Guid m_guid;
  int32_t m_activityPathGuidOffset;
  int32_t m_level;
  enum EventActivityOptions__Enum m_eventOptions;
  int64_t m_lastChildID;
  int32_t m_stopped;
  struct ActivityTracker_ActivityInfo * m_creator;
  struct Guid m_activityIdToRestore;
};
struct ActivityTracker_ActivityInfo {
  struct ActivityTracker_ActivityInfo__Class *klass;
  struct MonitorData *monitor;
  struct ActivityTracker_ActivityInfo__Fields fields;
};
struct TraceLoggingTypeInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData GetData;
};
struct TraceLoggingTypeInfo__StaticFields {
};
struct TraceLoggingTypeInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceLoggingTypeInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceLoggingTypeInfo__VTable vtable;
};
struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___StaticFields {
};
struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___VTable vtable;
};
struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields {
};
struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable vtable;
};
struct NameInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
  VirtualInvokeData Compare_1;
};
struct NameInfo_1__StaticFields {
  int32_t lastIdentity;
};
struct NameInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameInfo_1__VTable vtable;
};
struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields {
};
struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable vtable;
};
struct TraceLoggingEventTypes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TraceLoggingEventTypes__StaticFields {
};
struct TraceLoggingEventTypes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceLoggingEventTypes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceLoggingEventTypes__VTable vtable;
};
struct EventSource_EventMetadata__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventSource_EventMetadata__StaticFields {
};
struct EventSource_EventMetadata__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventSource_EventMetadata__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventSource_EventMetadata__VTable vtable;
};
struct EventSourceCreatedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventSourceCreatedEventArgs__StaticFields {
};
struct EventSourceCreatedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventSourceCreatedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventSourceCreatedEventArgs__VTable vtable;
};
struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___VTable {
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
struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___StaticFields {
};
struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___VTable vtable;
};
struct ReadOnlyCollection_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_T__Insert;
  VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Count_2;
};}