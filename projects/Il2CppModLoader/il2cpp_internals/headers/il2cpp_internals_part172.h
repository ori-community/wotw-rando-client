namespace app {

enum InputTracking_TrackingStateEventType__Enum : int32_t {
  InputTracking_TrackingStateEventType__Enum_NodeAdded = 0,
  InputTracking_TrackingStateEventType__Enum_NodeRemoved = 1,
  InputTracking_TrackingStateEventType__Enum_TrackingAcquired = 2,
  InputTracking_TrackingStateEventType__Enum_TrackingLost = 3,
};
struct InputTracking_TrackingStateEventType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InputTracking_TrackingStateEventType__Enum value;
};
enum XRNode__Enum : int32_t {
  XRNode__Enum_LeftEye = 0,
  XRNode__Enum_RightEye = 1,
  XRNode__Enum_CenterEye = 2,
  XRNode__Enum_Head = 3,
  XRNode__Enum_LeftHand = 4,
  XRNode__Enum_RightHand = 5,
  XRNode__Enum_GameController = 6,
  XRNode__Enum_TrackingReference = 7,
  XRNode__Enum_HardwareTracker = 8,
};
struct XRNode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XRNode__Enum value;
};

enum AvailableTrackingData__Enum : int32_t {
  AvailableTrackingData__Enum_None = 0,
  AvailableTrackingData__Enum_PositionAvailable = 1,
  AvailableTrackingData__Enum_RotationAvailable = 2,
  AvailableTrackingData__Enum_VelocityAvailable = 4,
  AvailableTrackingData__Enum_AngularVelocityAvailable = 8,
  AvailableTrackingData__Enum_AccelerationAvailable = 16,
  AvailableTrackingData__Enum_AngularAccelerationAvailable = 32,
};
struct AvailableTrackingData__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AvailableTrackingData__Enum value;
};
struct XRNodeState {
  enum XRNode__Enum m_Type;
  enum AvailableTrackingData__Enum m_AvailableFields;
  struct Vector3 m_Position;
  struct Quaternion m_Rotation;
  struct Vector3 m_Velocity;
  struct Vector3 m_AngularVelocity;
  struct Vector3 m_Acceleration;
  struct Vector3 m_AngularAcceleration;
  int32_t m_Tracked;
  uint64_t m_UniqueID;
};
struct XRNodeState__Boxed {
  struct XRNodeState__Class *klass;
  struct MonitorData *monitor;
  struct XRNodeState fields;
};
struct XRNodeState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XRNodeState__StaticFields {
};
struct XRNodeState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRNodeState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRNodeState__VTable vtable;
};

struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___Fields {
  struct IntegratedSubsystem__Fields _;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor_ {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___Fields fields;
};
struct XRCameraSubsystem__Fields {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___Fields _;
  struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs_ * FrameReceived;
};
struct XRCameraSubsystem {
  struct XRCameraSubsystem__Class *klass;
  struct MonitorData *monitor;
  struct XRCameraSubsystem__Fields fields;
};
struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs_ {
  struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___Fields fields;
};
struct FrameReceivedEventArgs {
  struct XRCameraSubsystem * m_CameraSubsystem;
};
struct FrameReceivedEventArgs__Boxed {
  struct FrameReceivedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct FrameReceivedEventArgs fields;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___StaticFields {
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRCameraSubsystemDescriptor___VTable vtable;
};
struct FrameReceivedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FrameReceivedEventArgs__StaticFields {
};
struct FrameReceivedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameReceivedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameReceivedEventArgs__VTable vtable;
};
struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___VTable {
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
struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___StaticFields {
};
struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Experimental_XR_FrameReceivedEventArgs___VTable vtable;
};
struct XRCameraSubsystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XRCameraSubsystem__StaticFields {
};
struct XRCameraSubsystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRCameraSubsystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRCameraSubsystem__VTable vtable;
};

struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___Fields {
  struct IntegratedSubsystemDescriptor__Fields _;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem_ {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___Fields fields;
};
struct XRCameraSubsystemDescriptor__Fields {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___Fields _;
};
struct XRCameraSubsystemDescriptor {
  struct XRCameraSubsystemDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct XRCameraSubsystemDescriptor__Fields fields;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___StaticFields {
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRCameraSubsystem___VTable vtable;
};
struct XRCameraSubsystemDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct XRCameraSubsystemDescriptor__StaticFields {
};
struct XRCameraSubsystemDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRCameraSubsystemDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRCameraSubsystemDescriptor__VTable vtable;
};

struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___Fields {
  struct IntegratedSubsystem__Fields _;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor_ {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___Fields fields;
};
struct XRDepthSubsystem__Fields {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___Fields _;
  struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs_ * PointCloudUpdated;
};
struct XRDepthSubsystem {
  struct XRDepthSubsystem__Class *klass;
  struct MonitorData *monitor;
  struct XRDepthSubsystem__Fields fields;
};
struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs_ {
  struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___Fields fields;
};
struct PointCloudUpdatedEventArgs {
  struct XRDepthSubsystem * m_DepthSubsystem;
};
struct PointCloudUpdatedEventArgs__Boxed {
  struct PointCloudUpdatedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct PointCloudUpdatedEventArgs fields;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___StaticFields {
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRDepthSubsystemDescriptor___VTable vtable;
};
struct PointCloudUpdatedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PointCloudUpdatedEventArgs__StaticFields {
};
struct PointCloudUpdatedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointCloudUpdatedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointCloudUpdatedEventArgs__VTable vtable;
};
struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___VTable {
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
struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___StaticFields {
};
struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Experimental_XR_PointCloudUpdatedEventArgs___VTable vtable;
};
struct XRDepthSubsystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XRDepthSubsystem__StaticFields {
};
struct XRDepthSubsystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRDepthSubsystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRDepthSubsystem__VTable vtable;
};

struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___Fields {
  struct IntegratedSubsystemDescriptor__Fields _;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem_ {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___Fields fields;
};
struct XRDepthSubsystemDescriptor__Fields {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___Fields _;
};
struct XRDepthSubsystemDescriptor {
  struct XRDepthSubsystemDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct XRDepthSubsystemDescriptor__Fields fields;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___StaticFields {
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRDepthSubsystem___VTable vtable;
};
struct XRDepthSubsystemDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct XRDepthSubsystemDescriptor__StaticFields {
};
struct XRDepthSubsystemDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRDepthSubsystemDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRDepthSubsystemDescriptor__VTable vtable;
};

enum MeshGenerationStatus__Enum : int32_t {
  MeshGenerationStatus__Enum_Success = 0,
  MeshGenerationStatus__Enum_InvalidMeshId = 1,
  MeshGenerationStatus__Enum_GenerationAlreadyInProgress = 2,
  MeshGenerationStatus__Enum_Canceled = 3,
  MeshGenerationStatus__Enum_UnknownError = 4,
};
struct MeshGenerationStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MeshGenerationStatus__Enum value;
};
enum MeshVertexAttributes__Enum : int32_t {
  MeshVertexAttributes__Enum_None = 0,
  MeshVertexAttributes__Enum_Normals = 1,
  MeshVertexAttributes__Enum_Tangents = 2,
  MeshVertexAttributes__Enum_UVs = 4,
  MeshVertexAttributes__Enum_Colors = 8,
};
struct MeshVertexAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MeshVertexAttributes__Enum value;
};
struct MeshGenerationResult {
  struct TrackableId _MeshId_k__BackingField;
  struct Mesh * _Mesh_k__BackingField;
  struct MeshCollider * _MeshCollider_k__BackingField;
  enum MeshGenerationStatus__Enum _Status_k__BackingField;
  enum MeshVertexAttributes__Enum _Attributes_k__BackingField;
};
struct MeshGenerationResult__Boxed {
  struct MeshGenerationResult__Class *klass;
  struct MonitorData *monitor;
  struct MeshGenerationResult fields;
};
struct MeshGenerationResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct MeshGenerationResult__StaticFields {
};
struct MeshGenerationResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshGenerationResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshGenerationResult__VTable vtable;
};

struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___Fields {
  struct IntegratedSubsystem__Fields _;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor_ {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___Fields fields;
};
struct XRMeshSubsystem__Fields {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___Fields _;
};
struct XRMeshSubsystem {
  struct XRMeshSubsystem__Class *klass;
  struct MonitorData *monitor;
  struct XRMeshSubsystem__Fields fields;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___StaticFields {
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRMeshSubsystemDescriptor___VTable vtable;
};
struct XRMeshSubsystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XRMeshSubsystem__StaticFields {
};
struct XRMeshSubsystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRMeshSubsystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRMeshSubsystem__VTable vtable;
};

struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult_ {
  struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___Fields fields;
};
struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___VTable {
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
struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___StaticFields {
};
struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Experimental_XR_MeshGenerationResult___VTable vtable;
};

struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___Fields {
  struct IntegratedSubsystemDescriptor__Fields _;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem_ {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___Fields fields;
};
struct XRMeshSubsystemDescriptor__Fields {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___Fields _;
};
struct XRMeshSubsystemDescriptor {
  struct XRMeshSubsystemDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct XRMeshSubsystemDescriptor__Fields fields;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___StaticFields {
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRMeshSubsystem___VTable vtable;
};
struct XRMeshSubsystemDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct XRMeshSubsystemDescriptor__StaticFields {
};
struct XRMeshSubsystemDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRMeshSubsystemDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRMeshSubsystemDescriptor__VTable vtable;
};

enum PlaneAlignment__Enum : int32_t {
  PlaneAlignment__Enum_Horizontal = 1,
  PlaneAlignment__Enum_Vertical = 2,
  PlaneAlignment__Enum_NonAxis = 4,
};
struct PlaneAlignment__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlaneAlignment__Enum value;
};
struct BoundedPlane {
  uint32_t m_InstanceId;
  struct TrackableId _Id_k__BackingField;
  struct TrackableId _SubsumedById_k__BackingField;
  struct Pose _Pose_k__BackingField;
  struct Vector3 _Center_k__BackingField;
  struct Vector2 _Size_k__BackingField;
  enum PlaneAlignment__Enum _Alignment_k__BackingField;
};
struct BoundedPlane__Boxed {
  struct BoundedPlane__Class *klass;
  struct MonitorData *monitor;
  struct BoundedPlane fields;
};
struct PlaneAddedEventArgs {
  struct XRPlaneSubsystem * _PlaneSubsystem_k__BackingField;
  struct BoundedPlane _Plane_k__BackingField;
};
struct PlaneAddedEventArgs__Boxed {
  struct PlaneAddedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct PlaneAddedEventArgs fields;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___Fields {
  struct IntegratedSubsystem__Fields _;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor_ {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___Fields fields;
};
struct XRPlaneSubsystem__Fields {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___Fields _;
  struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs_ * PlaneAdded;
  struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_ * PlaneUpdated;
  struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs_ * PlaneRemoved;
};
struct XRPlaneSubsystem {
  struct XRPlaneSubsystem__Class *klass;
  struct MonitorData *monitor;
  struct XRPlaneSubsystem__Fields fields;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs_ {
  struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___Fields fields;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_ {
  struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___Fields fields;
};
struct PlaneUpdatedEventArgs {
  struct XRPlaneSubsystem * _PlaneSubsystem_k__BackingField;
  struct BoundedPlane _Plane_k__BackingField;
};
struct PlaneUpdatedEventArgs__Boxed {
  struct PlaneUpdatedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct PlaneUpdatedEventArgs fields;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs_ {
  struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___Fields fields;
};
struct PlaneRemovedEventArgs {
  struct XRPlaneSubsystem * _PlaneSubsystem_k__BackingField;
  struct BoundedPlane _Plane_k__BackingField;
};
struct PlaneRemovedEventArgs__Boxed {
  struct PlaneRemovedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct PlaneRemovedEventArgs fields;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___StaticFields {
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRPlaneSubsystemDescriptor___VTable vtable;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___VTable {
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
struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___StaticFields {
};
struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Experimental_XR_PlaneAddedEventArgs___VTable vtable;
};
struct BoundedPlane__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BoundedPlane__StaticFields {
};
struct BoundedPlane__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BoundedPlane__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BoundedPlane__VTable vtable;
};
struct PlaneUpdatedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlaneUpdatedEventArgs__StaticFields {
};
struct PlaneUpdatedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaneUpdatedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaneUpdatedEventArgs__VTable vtable;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___VTable {
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
struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___StaticFields {
};
struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs___VTable vtable;
};
struct PlaneRemovedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlaneRemovedEventArgs__StaticFields {
};
struct PlaneRemovedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaneRemovedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaneRemovedEventArgs__VTable vtable;
};
struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___VTable {
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
struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___StaticFields {
};
struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Experimental_XR_PlaneRemovedEventArgs___VTable vtable;
};
struct XRPlaneSubsystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XRPlaneSubsystem__StaticFields {
};
struct XRPlaneSubsystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRPlaneSubsystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRPlaneSubsystem__VTable vtable;
};
struct PlaneAddedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlaneAddedEventArgs__StaticFields {
};
struct PlaneAddedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaneAddedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaneAddedEventArgs__VTable vtable;
};

struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___Fields {
  struct IntegratedSubsystemDescriptor__Fields _;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem_ {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___Fields fields;
};
struct XRPlaneSubsystemDescriptor__Fields {
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___Fields _;
};
struct XRPlaneSubsystemDescriptor {
  struct XRPlaneSubsystemDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct XRPlaneSubsystemDescriptor__Fields fields;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___StaticFields {
};
struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntegratedSubsystemDescriptor_1_UnityEngine_Experimental_XR_XRPlaneSubsystem___VTable vtable;
};
struct XRPlaneSubsystemDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_Experimental_ISubsystemDescriptorImpl_set_ptr;
};
struct XRPlaneSubsystemDescriptor__StaticFields {
};
struct XRPlaneSubsystemDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRPlaneSubsystemDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRPlaneSubsystemDescriptor__VTable vtable;
};

enum TrackingState__Enum : int32_t {
  TrackingState__Enum_Unknown = 0,
  TrackingState__Enum_Tracking = 1,
  TrackingState__Enum_Unavailable = 2,
};
struct TrackingState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TrackingState__Enum value;
};
struct ReferencePoint {
  struct TrackableId _Id_k__BackingField;
  enum TrackingState__Enum _TrackingState_k__BackingField;
  struct Pose _Pose_k__BackingField;
};
struct ReferencePoint__Boxed {
  struct ReferencePoint__Class *klass;
  struct MonitorData *monitor;
  struct ReferencePoint fields;
};
struct ReferencePointUpdatedEventArgs {
  struct ReferencePoint _ReferencePoint_k__BackingField;
  enum TrackingState__Enum _PreviousTrackingState_k__BackingField;
  struct Pose _PreviousPose_k__BackingField;
};
struct ReferencePointUpdatedEventArgs__Boxed {
  struct ReferencePointUpdatedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct ReferencePointUpdatedEventArgs fields;
};
struct ReferencePoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReferencePoint__StaticFields {
};
struct ReferencePoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReferencePoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReferencePoint__VTable vtable;
};
struct ReferencePointUpdatedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReferencePointUpdatedEventArgs__StaticFields {
};
struct ReferencePointUpdatedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReferencePointUpdatedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReferencePointUpdatedEventArgs__VTable vtable;
};

struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRReferencePointSubsystemDescriptor___Fields {
  struct IntegratedSubsystem__Fields _;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRReferencePointSubsystemDescriptor_ {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRReferencePointSubsystemDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRReferencePointSubsystemDescriptor___Fields fields;
};
struct XRReferencePointSubsystem__Fields {
  struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRReferencePointSubsystemDescriptor___Fields _;
  struct Action_1_UnityEngine_Experimental_XR_ReferencePointUpdatedEventArgs_ * ReferencePointUpdated;
};
struct XRReferencePointSubsystem {
  struct XRReferencePointSubsystem__Class *klass;
  struct MonitorData *monitor;
  struct XRReferencePointSubsystem__Fields fields;
};
struct Action_1_UnityEngine_Experimental_XR_ReferencePointUpdatedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_XR_ReferencePointUpdatedEventArgs_ {
  struct Action_1_UnityEngine_Experimental_XR_ReferencePointUpdatedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_XR_ReferencePointUpdatedEventArgs___Fields fields;
};
struct IntegratedSubsystem_1_UnityEngine_Experimental_XR_XRReferencePointSubsystemDescriptor___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}