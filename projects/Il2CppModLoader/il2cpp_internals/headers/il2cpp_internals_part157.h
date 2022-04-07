namespace app {
struct SemanticMeaning__StaticFields {
};
struct SemanticMeaning__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SemanticMeaning__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SemanticMeaning__VTable vtable;
};
struct PhraseRecognizedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PhraseRecognizedEventArgs__StaticFields {
};
struct PhraseRecognizedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhraseRecognizedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhraseRecognizedEventArgs__VTable vtable;
};
struct PhraseRecognizer_PhraseRecognizedDelegate__VTable {
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
struct PhraseRecognizer_PhraseRecognizedDelegate__StaticFields {
};
struct PhraseRecognizer_PhraseRecognizedDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhraseRecognizer_PhraseRecognizedDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhraseRecognizer_PhraseRecognizedDelegate__VTable vtable;
};
struct PhraseRecognizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct PhraseRecognizer__StaticFields {
};
struct PhraseRecognizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhraseRecognizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhraseRecognizer__VTable vtable;
};

struct __declspec(align(8)) DictationRecognizer__Fields {
  void * m_Recognizer;
  struct DictationRecognizer_DictationHypothesisDelegate * DictationHypothesis;
  struct DictationRecognizer_DictationResultDelegate * DictationResult;
  struct DictationRecognizer_DictationCompletedDelegate * DictationComplete;
  struct DictationRecognizer_DictationErrorHandler * DictationError;
};
struct DictationRecognizer {
  struct DictationRecognizer__Class *klass;
  struct MonitorData *monitor;
  struct DictationRecognizer__Fields fields;
};
struct DictationRecognizer_DictationHypothesisDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct DictationRecognizer_DictationHypothesisDelegate {
  struct DictationRecognizer_DictationHypothesisDelegate__Class *klass;
  struct MonitorData *monitor;
  struct DictationRecognizer_DictationHypothesisDelegate__Fields fields;
};
struct DictationRecognizer_DictationResultDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct DictationRecognizer_DictationResultDelegate {
  struct DictationRecognizer_DictationResultDelegate__Class *klass;
  struct MonitorData *monitor;
  struct DictationRecognizer_DictationResultDelegate__Fields fields;
};
struct DictationRecognizer_DictationCompletedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct DictationRecognizer_DictationCompletedDelegate {
  struct DictationRecognizer_DictationCompletedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct DictationRecognizer_DictationCompletedDelegate__Fields fields;
};
enum DictationCompletionCause__Enum : int32_t {
  DictationCompletionCause__Enum_Complete = 0,
  DictationCompletionCause__Enum_AudioQualityFailure = 1,
  DictationCompletionCause__Enum_Canceled = 2,
  DictationCompletionCause__Enum_TimeoutExceeded = 3,
  DictationCompletionCause__Enum_PauseLimitExceeded = 4,
  DictationCompletionCause__Enum_NetworkFailure = 5,
  DictationCompletionCause__Enum_MicrophoneUnavailable = 6,
  DictationCompletionCause__Enum_UnknownError = 7,
};
struct DictationCompletionCause__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DictationCompletionCause__Enum value;
};
struct DictationRecognizer_DictationErrorHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DictationRecognizer_DictationErrorHandler {
  struct DictationRecognizer_DictationErrorHandler__Class *klass;
  struct MonitorData *monitor;
  struct DictationRecognizer_DictationErrorHandler__Fields fields;
};
struct DictationRecognizer_DictationHypothesisDelegate__VTable {
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
struct DictationRecognizer_DictationHypothesisDelegate__StaticFields {
};
struct DictationRecognizer_DictationHypothesisDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictationRecognizer_DictationHypothesisDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictationRecognizer_DictationHypothesisDelegate__VTable vtable;
};
struct DictationRecognizer_DictationResultDelegate__VTable {
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
struct DictationRecognizer_DictationResultDelegate__StaticFields {
};
struct DictationRecognizer_DictationResultDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictationRecognizer_DictationResultDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictationRecognizer_DictationResultDelegate__VTable vtable;
};
struct DictationRecognizer_DictationCompletedDelegate__VTable {
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
struct DictationRecognizer_DictationCompletedDelegate__StaticFields {
};
struct DictationRecognizer_DictationCompletedDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictationRecognizer_DictationCompletedDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictationRecognizer_DictationCompletedDelegate__VTable vtable;
};
struct DictationRecognizer_DictationErrorHandler__VTable {
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
struct DictationRecognizer_DictationErrorHandler__StaticFields {
};
struct DictationRecognizer_DictationErrorHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictationRecognizer_DictationErrorHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictationRecognizer_DictationErrorHandler__VTable vtable;
};
struct DictationRecognizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct DictationRecognizer__StaticFields {
};
struct DictationRecognizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictationRecognizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictationRecognizer__VTable vtable;
};

struct JobHandle {
  void * jobGroup;
  int32_t version;
};
struct JobHandle__Boxed {
  struct JobHandle__Class *klass;
  struct MonitorData *monitor;
  struct JobHandle fields;
};
struct JobHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JobHandle__StaticFields {
};
struct JobHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JobHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JobHandle__VTable vtable;
};

struct __declspec(align(8)) JobProducerTypeAttribute__Fields {
  struct Type * _ProducerType_k__BackingField;
};
struct JobProducerTypeAttribute {
  struct JobProducerTypeAttribute__Class *klass;
  struct MonitorData *monitor;
  struct JobProducerTypeAttribute__Fields fields;
};
struct JobProducerTypeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct JobProducerTypeAttribute__StaticFields {
};
struct JobProducerTypeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JobProducerTypeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JobProducerTypeAttribute__VTable vtable;
};

struct JobRanges {
  int32_t BatchSize;
  int32_t NumJobs;
  int32_t TotalIterationCount;
  int32_t NumPhases;
  int32_t IndicesPerPhase;
  void * StartEndIndex;
  void * PhaseData;
};
struct JobRanges__Boxed {
  struct JobRanges__Class *klass;
  struct MonitorData *monitor;
  struct JobRanges fields;
};
struct JobRanges__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JobRanges__StaticFields {
};
struct JobRanges__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JobRanges__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JobRanges__VTable vtable;
};

struct JobsUtility_JobScheduleParameters {
  struct JobHandle Dependency;
  int32_t ScheduleMode;
  void * ReflectionData;
  void * JobDataPtr;
};
struct JobsUtility_JobScheduleParameters__Boxed {
  struct JobsUtility_JobScheduleParameters__Class *klass;
  struct MonitorData *monitor;
  struct JobsUtility_JobScheduleParameters fields;
};
struct JobsUtility_JobScheduleParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JobsUtility_JobScheduleParameters__StaticFields {
};
struct JobsUtility_JobScheduleParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JobsUtility_JobScheduleParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JobsUtility_JobScheduleParameters__VTable vtable;
};

enum JobType__Enum : int32_t {
  JobType__Enum_Single = 0,
  JobType__Enum_ParallelFor = 1,
};
struct JobType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JobType__Enum value;
};

enum ScheduleMode__Enum : int32_t {
  ScheduleMode__Enum_Run = 0,
  ScheduleMode__Enum_Batched = 1,
};
struct ScheduleMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScheduleMode__Enum value;
};

struct __declspec(align(8)) MetaData__Fields {
  struct String * content;
  struct String * platform;
  struct Texture2D * screenshot;
};
struct MetaData {
  struct MetaData__Class *klass;
  struct MonitorData *monitor;
  struct MetaData__Fields fields;
};
struct MetaData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MetaData__StaticFields {
};
struct MetaData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MetaData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MetaData__VTable vtable;
};

struct Action_2_String_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_String_Boolean_ {
  struct Action_2_String_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_String_Boolean___Fields fields;
};
struct Action_2_String_Boolean___VTable {
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
struct Action_2_String_Boolean___StaticFields {
};
struct Action_2_String_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_String_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_String_Boolean___VTable vtable;
};

enum CaptureFlags__Enum : uint32_t {
  CaptureFlags__Enum_ManagedObjects = 1,
  CaptureFlags__Enum_NativeObjects = 2,
  CaptureFlags__Enum_NativeAllocations = 4,
  CaptureFlags__Enum_NativeAllocationSites = 8,
  CaptureFlags__Enum_NativeStackTraces = 16,
};
struct CaptureFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CaptureFlags__Enum value;
};

struct __declspec(align(8)) Recorder__Fields {
  void * m_Ptr;
};
struct Recorder {
  struct Recorder__Class *klass;
  struct MonitorData *monitor;
  struct Recorder__Fields fields;
};
struct Recorder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Recorder__StaticFields {
  struct Recorder * s_InvalidRecorder;
};
struct Recorder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Recorder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Recorder__VTable vtable;
};

enum BuiltinCategory__Enum : int32_t {
  BuiltinCategory__Enum_Render = 0,
  BuiltinCategory__Enum_Scripts = 1,
};
struct BuiltinCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BuiltinCategory__Enum value;
};

struct DrivenRectTransformTracker {
};
struct DrivenRectTransformTracker__Boxed {
  struct DrivenRectTransformTracker__Class *klass;
  struct MonitorData *monitor;
  struct DrivenRectTransformTracker fields;
};
struct RectTransform__Fields {
  struct Transform__Fields _;
};
struct RectTransform {
  struct RectTransform__Class *klass;
  struct MonitorData *monitor;
  struct RectTransform__Fields fields;
};
struct RectTransform_ReapplyDrivenProperties__Fields {
  struct MulticastDelegate__Fields _;
};
struct RectTransform_ReapplyDrivenProperties {
  struct RectTransform_ReapplyDrivenProperties__Class *klass;
  struct MonitorData *monitor;
  struct RectTransform_ReapplyDrivenProperties__Fields fields;
};
enum DrivenTransformProperties__Enum : int32_t {
  DrivenTransformProperties__Enum_None = 0,
  DrivenTransformProperties__Enum_All = -1,
  DrivenTransformProperties__Enum_AnchoredPositionX = 2,
  DrivenTransformProperties__Enum_AnchoredPositionY = 4,
  DrivenTransformProperties__Enum_AnchoredPositionZ = 8,
  DrivenTransformProperties__Enum_Rotation = 16,
  DrivenTransformProperties__Enum_ScaleX = 32,
  DrivenTransformProperties__Enum_ScaleY = 64,
  DrivenTransformProperties__Enum_ScaleZ = 128,
  DrivenTransformProperties__Enum_AnchorMinX = 256,
  DrivenTransformProperties__Enum_AnchorMinY = 512,
  DrivenTransformProperties__Enum_AnchorMaxX = 1024,
  DrivenTransformProperties__Enum_AnchorMaxY = 2048,
  DrivenTransformProperties__Enum_SizeDeltaX = 4096,
  DrivenTransformProperties__Enum_SizeDeltaY = 8192,
  DrivenTransformProperties__Enum_PivotX = 16384,
  DrivenTransformProperties__Enum_PivotY = 32768,
  DrivenTransformProperties__Enum_AnchoredPosition = 6,
  DrivenTransformProperties__Enum_AnchoredPosition3D = 14,
  DrivenTransformProperties__Enum_Scale = 224,
  DrivenTransformProperties__Enum_AnchorMin = 768,
  DrivenTransformProperties__Enum_AnchorMax = 3072,
  DrivenTransformProperties__Enum_Anchors = 3840,
  DrivenTransformProperties__Enum_SizeDelta = 12288,
  DrivenTransformProperties__Enum_Pivot = 49152,
};
struct DrivenTransformProperties__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DrivenTransformProperties__Enum value;
};
struct DrivenRectTransformTracker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DrivenRectTransformTracker__StaticFields {
};
struct DrivenRectTransformTracker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DrivenRectTransformTracker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DrivenRectTransformTracker__VTable vtable;
};
struct RectTransform_ReapplyDrivenProperties__VTable {
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
struct RectTransform_ReapplyDrivenProperties__StaticFields {
};
struct RectTransform_ReapplyDrivenProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectTransform_ReapplyDrivenProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectTransform_ReapplyDrivenProperties__VTable vtable;
};
struct RectTransform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
};
struct RectTransform__StaticFields {
  struct RectTransform_ReapplyDrivenProperties * reapplyDrivenProperties;
};
struct RectTransform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectTransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectTransform__VTable vtable;
};

enum RectTransform_Edge__Enum : int32_t {
  RectTransform_Edge__Enum_Left = 0,
  RectTransform_Edge__Enum_Right = 1,
  RectTransform_Edge__Enum_Top = 2,
  RectTransform_Edge__Enum_Bottom = 3,
};
struct RectTransform_Edge__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RectTransform_Edge__Enum value;
};

enum RectTransform_Axis__Enum : int32_t {
  RectTransform_Axis__Enum_Horizontal = 0,
  RectTransform_Axis__Enum_Vertical = 1,
};
struct RectTransform_Axis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RectTransform_Axis__Enum value;
};

enum RotationOrder__Enum : int32_t {
  RotationOrder__Enum_OrderXYZ = 0,
  RotationOrder__Enum_OrderXZY = 1,
  RotationOrder__Enum_OrderYZX = 2,
  RotationOrder__Enum_OrderYXZ = 3,
  RotationOrder__Enum_OrderZXY = 4,
  RotationOrder__Enum_OrderZYX = 5,
};
struct RotationOrder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RotationOrder__Enum value;
};

struct Quaternion__Array {
  struct Quaternion__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Quaternion vector[32];
};

enum Space__Enum : int32_t {
  Space__Enum_World = 0,
  Space__Enum_Self = 1,
};
struct Space__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Space__Enum value;
};

struct __declspec(align(8)) Transform_Enumerator__Fields {
  struct Transform * outer;
  int32_t currentIndex;
};
struct Transform_Enumerator {
  struct Transform_Enumerator__Class *klass;
  struct MonitorData *monitor;
  struct Transform_Enumerator__Fields fields;
};
struct Transform_Enumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct Transform_Enumerator__StaticFields {
};
struct Transform_Enumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Transform_Enumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Transform_Enumerator__VTable vtable;
};

struct TransformAccess {
  void * hierarchy;
  int32_t index;
};
struct TransformAccess__Boxed {
  struct TransformAccess__Class *klass;
  struct MonitorData *monitor;
  struct TransformAccess fields;
};
struct TransformAccess__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TransformAccess__StaticFields {
};
struct TransformAccess__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransformAccess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransformAccess__VTable vtable;
};

struct TransformAccessArray {
  void * m_TransformArray;
};
struct TransformAccessArray__Boxed {
  struct TransformAccessArray__Class *klass;
  struct MonitorData *monitor;
  struct TransformAccessArray fields;
};
struct TransformAccessArray__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct TransformAccessArray__StaticFields {
};
struct TransformAccessArray__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransformAccessArray__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransformAccessArray__VTable vtable;
};

struct Sprite__Fields {
  struct Object_1__Fields _;
};
struct Sprite {
  struct Sprite__Class *klass;
  struct MonitorData *monitor;
  struct Sprite__Fields fields;
};
struct Sprite__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Sprite__StaticFields {
};
struct Sprite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Sprite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Sprite__VTable vtable;
};

struct SpriteRenderer__Fields {
  struct Renderer__Fields _;
};
struct SpriteRenderer {
  struct SpriteRenderer__Class *klass;
  struct MonitorData *monitor;
  struct SpriteRenderer__Fields fields;
};
struct SpriteRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpriteRenderer__StaticFields {
};
struct SpriteRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteRenderer__VTable vtable;
};

enum SpriteMeshType__Enum : int32_t {
  SpriteMeshType__Enum_FullRect = 0,
  SpriteMeshType__Enum_Tight = 1,
};
struct SpriteMeshType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpriteMeshType__Enum value;
};

enum SpritePackingMode__Enum : int32_t {
  SpritePackingMode__Enum_Tight = 0,
  SpritePackingMode__Enum_Rectangle = 1,
};
struct SpritePackingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpritePackingMode__Enum value;
};

enum SpritePackingRotation__Enum : int32_t {
  SpritePackingRotation__Enum_None = 0,
  SpritePackingRotation__Enum_FlipHorizontal = 1,
  SpritePackingRotation__Enum_FlipVertical = 2,
  SpritePackingRotation__Enum_Rotate180 = 3,
  SpritePackingRotation__Enum_Any = 15,
};
struct SpritePackingRotation__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpritePackingRotation__Enum value;
};

struct IList_1_UnityEngine_Vector2_ {
  struct IList_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_UnityEngine_Vector2___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_UnityEngine_Vector2___StaticFields {
};
struct IList_1_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_UnityEngine_Vector2___VTable vtable;
};

struct Action_1_UnityEngine_U2D_SpriteAtlas___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_U2D_SpriteAtlas_ {
  struct Action_1_UnityEngine_U2D_SpriteAtlas___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_U2D_SpriteAtlas___Fields fields;
};
struct SpriteAtlas__Fields {
  struct Object_1__Fields _;
};
struct SpriteAtlas {
  struct SpriteAtlas__Class *klass;
  struct MonitorData *monitor;
  struct SpriteAtlas__Fields fields;
};
struct SpriteAtlas__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpriteAtlas__StaticFields {
};
struct SpriteAtlas__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteAtlas__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteAtlas__VTable vtable;
};
struct Action_1_UnityEngine_U2D_SpriteAtlas___VTable {
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
struct Action_1_UnityEngine_U2D_SpriteAtlas___StaticFields {
};
struct Action_1_UnityEngine_U2D_SpriteAtlas___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_U2D_SpriteAtlas___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_U2D_SpriteAtlas___VTable vtable;
};

enum FontStyle__Enum : int32_t {
  FontStyle__Enum_Normal = 0,
  FontStyle__Enum_Bold = 1,
  FontStyle__Enum_Italic = 2,
  FontStyle__Enum_BoldAndItalic = 3,
};
struct FontStyle__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FontStyle__Enum value;
};
enum TextAnchor__Enum : int32_t {
  TextAnchor__Enum_UpperLeft = 0,
  TextAnchor__Enum_UpperCenter = 1,
  TextAnchor__Enum_UpperRight = 2,
  TextAnchor__Enum_MiddleLeft = 3,
  TextAnchor__Enum_MiddleCenter = 4,
  TextAnchor__Enum_MiddleRight = 5,
  TextAnchor__Enum_LowerLeft = 6,
  TextAnchor__Enum_LowerCenter = 7,
  TextAnchor__Enum_LowerRight = 8,
};
struct TextAnchor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextAnchor__Enum value;
};
enum VerticalWrapMode__Enum : int32_t {
  VerticalWrapMode__Enum_Truncate = 0,
  VerticalWrapMode__Enum_Overflow = 1,
};
struct VerticalWrapMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VerticalWrapMode__Enum value;
};
enum HorizontalWrapMode__Enum : int32_t {
  HorizontalWrapMode__Enum_Wrap = 0,
  HorizontalWrapMode__Enum_Overflow = 1,
};
struct HorizontalWrapMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HorizontalWrapMode__Enum value;
};
struct TextGenerationSettings {
  struct Font * font;
  struct Color color;
  int32_t fontSize;
  float lineSpacing;
  bool richText;
  float scaleFactor;
  enum FontStyle__Enum fontStyle;
  enum TextAnchor__Enum textAnchor;
  bool alignByGeometry;
  bool resizeTextForBestFit;
  int32_t resizeTextMinSize;
  int32_t resizeTextMaxSize;
  bool updateBounds;
  enum VerticalWrapMode__Enum verticalOverflow;
  enum HorizontalWrapMode__Enum horizontalOverflow;
  struct Vector2 generationExtents;
  struct Vector2 pivot;
  bool generateOutOfBounds;
};
struct TextGenerationSettings__Boxed {
  struct TextGenerationSettings__Class *klass;
  struct MonitorData *monitor;
  struct TextGenerationSettings fields;
};
struct Font__Fields {
  struct Object_1__Fields _;
  struct Font_FontTextureRebuildCallback * m_FontTextureRebuildCallback;
};
struct Font {
  struct Font__Class *klass;
  struct MonitorData *monitor;
  struct Font__Fields fields;
};
struct Action_1_UnityEngine_Font___Fields {
  struct MulticastDelegate__Fields _;
};}