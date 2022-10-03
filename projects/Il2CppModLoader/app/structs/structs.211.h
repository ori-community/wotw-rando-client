namespace app {
    enum class CaptureFlags__Enum : uint32_t {
        ManagedObjects = 0x00000001,
        NativeObjects = 0x00000002,
        NativeAllocations = 0x00000004,
        NativeAllocationSites = 0x00000008,
        NativeStackTraces = 0x00000010,
    };

    struct CaptureFlags__Enum__Boxed {
        struct CaptureFlags__Enum__Class* klass;
        MonitorData* monitor;
        CaptureFlags__Enum value;
    };

    struct CaptureFlags__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct CaptureFlags__Enum__StaticFields {
    };

    struct CaptureFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CaptureFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CaptureFlags__Enum__VTable vtable;
    };

    struct __declspec(align(8)) Recorder__Fields {
        void* m_Ptr;
    };

    struct Recorder {
        struct Recorder__Class* klass;
        MonitorData* monitor;
        struct Recorder__Fields fields;
    };

    struct Recorder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Recorder__StaticFields {
        struct Recorder* s_InvalidRecorder;
    };

    struct Recorder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Recorder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Recorder__VTable vtable;
    };

    enum class BuiltinCategory__Enum : int32_t {
        Render = 0x00000000,
        Scripts = 0x00000001,
    };

    struct BuiltinCategory__Enum__Boxed {
        struct BuiltinCategory__Enum__Class* klass;
        MonitorData* monitor;
        BuiltinCategory__Enum value;
    };

    struct BuiltinCategory__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct BuiltinCategory__Enum__StaticFields {
    };

    struct BuiltinCategory__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuiltinCategory__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuiltinCategory__Enum__VTable vtable;
    };

    struct DrivenRectTransformTracker {
    };

    struct DrivenRectTransformTracker__Boxed {
        struct DrivenRectTransformTracker__Class* klass;
        MonitorData* monitor;
        struct DrivenRectTransformTracker fields;
    };

    struct RectTransform__Fields {
        struct Transform__Fields _;
    };

    struct RectTransform {
        struct RectTransform__Class* klass;
        MonitorData* monitor;
        struct RectTransform__Fields fields;
    };

    struct RectTransform_ReapplyDrivenProperties__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct RectTransform_ReapplyDrivenProperties {
        struct RectTransform_ReapplyDrivenProperties__Class* klass;
        MonitorData* monitor;
        struct RectTransform_ReapplyDrivenProperties__Fields fields;
    };

    enum class DrivenTransformProperties__Enum : int32_t {
        None = 0x00000000,
        All = -1,
        AnchoredPositionX = 0x00000002,
        AnchoredPositionY = 0x00000004,
        AnchoredPositionZ = 0x00000008,
        Rotation = 0x00000010,
        ScaleX = 0x00000020,
        ScaleY = 0x00000040,
        ScaleZ = 0x00000080,
        AnchorMinX = 0x00000100,
        AnchorMinY = 0x00000200,
        AnchorMaxX = 0x00000400,
        AnchorMaxY = 0x00000800,
        SizeDeltaX = 0x00001000,
        SizeDeltaY = 0x00002000,
        PivotX = 0x00004000,
        PivotY = 0x00008000,
        AnchoredPosition = 0x00000006,
        AnchoredPosition3D = 0x0000000e,
        Scale = 0x000000e0,
        AnchorMin = 0x00000300,
        AnchorMax = 0x00000c00,
        Anchors = 0x00000f00,
        SizeDelta = 0x00003000,
        Pivot = 0x0000c000,
    };

    struct DrivenTransformProperties__Enum__Boxed {
        struct DrivenTransformProperties__Enum__Class* klass;
        MonitorData* monitor;
        DrivenTransformProperties__Enum value;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DrivenRectTransformTracker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RectTransform_ReapplyDrivenProperties__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct RectTransform_ReapplyDrivenProperties* reapplyDrivenProperties;
    };

    struct RectTransform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RectTransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RectTransform__VTable vtable;
    };

    struct DrivenTransformProperties__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct DrivenTransformProperties__Enum__StaticFields {
    };

    struct DrivenTransformProperties__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DrivenTransformProperties__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DrivenTransformProperties__Enum__VTable vtable;
    };

    enum class RectTransform_Edge__Enum : int32_t {
        Left = 0x00000000,
        Right = 0x00000001,
        Top = 0x00000002,
        Bottom = 0x00000003,
    };

    struct RectTransform_Edge__Enum__Boxed {
        struct RectTransform_Edge__Enum__Class* klass;
        MonitorData* monitor;
        RectTransform_Edge__Enum value;
    };

    struct RectTransform_Edge__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct RectTransform_Edge__Enum__StaticFields {
    };

    struct RectTransform_Edge__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RectTransform_Edge__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RectTransform_Edge__Enum__VTable vtable;
    };

    enum class RectTransform_Axis__Enum : int32_t {
        Horizontal = 0x00000000,
        Vertical = 0x00000001,
    };

    struct RectTransform_Axis__Enum__Boxed {
        struct RectTransform_Axis__Enum__Class* klass;
        MonitorData* monitor;
        RectTransform_Axis__Enum value;
    };

    struct RectTransform_Axis__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct RectTransform_Axis__Enum__StaticFields {
    };

    struct RectTransform_Axis__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RectTransform_Axis__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RectTransform_Axis__Enum__VTable vtable;
    };

    enum class RotationOrder__Enum : int32_t {
        OrderXYZ = 0x00000000,
        OrderXZY = 0x00000001,
        OrderYZX = 0x00000002,
        OrderYXZ = 0x00000003,
        OrderZXY = 0x00000004,
        OrderZYX = 0x00000005,
    };

    struct RotationOrder__Enum__Boxed {
        struct RotationOrder__Enum__Class* klass;
        MonitorData* monitor;
        RotationOrder__Enum value;
    };

    struct RotationOrder__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct RotationOrder__Enum__StaticFields {
    };

    struct RotationOrder__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationOrder__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationOrder__Enum__VTable vtable;
    };

    struct Quaternion__Array {
        struct Quaternion__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Quaternion vector[32];
    };

    struct Quaternion__Array__VTable {
    };

    struct Quaternion__Array__StaticFields {
    };

    struct Quaternion__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Quaternion__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Quaternion__Array__VTable vtable;
    };

    enum class Space__Enum : int32_t {
        World = 0x00000000,
        Self = 0x00000001,
    };

    struct Space__Enum__Boxed {
        struct Space__Enum__Class* klass;
        MonitorData* monitor;
        Space__Enum value;
    };

    struct Space__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct Space__Enum__StaticFields {
    };

    struct Space__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Space__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Space__Enum__VTable vtable;
    };

    struct __declspec(align(8)) Transform_Enumerator__Fields {
        struct Transform* outer;
        int32_t currentIndex;
    };

    struct Transform_Enumerator {
        struct Transform_Enumerator__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Transform_Enumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Transform_Enumerator__VTable vtable;
    };

    struct TransformAccess {
        void* hierarchy;
        int32_t index;
    };

    struct TransformAccess__Boxed {
        struct TransformAccess__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransformAccess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransformAccess__VTable vtable;
    };

    struct TransformAccess___VTable {
    };

    struct TransformAccess___StaticFields {
    };

    struct TransformAccess___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransformAccess___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransformAccess___VTable vtable;
    };

    struct TransformAccessArray {
        void* m_TransformArray;
    };

    struct TransformAccessArray__Boxed {
        struct TransformAccessArray__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransformAccessArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransformAccessArray__VTable vtable;
    };

    struct TransformAccessArray___VTable {
    };

    struct TransformAccessArray___StaticFields {
    };

    struct TransformAccessArray___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransformAccessArray___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransformAccessArray___VTable vtable;
    };

    struct Sprite__Fields {
        struct Object_1__Fields _;
    };

    struct Sprite {
        struct Sprite__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Sprite__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Sprite__VTable vtable;
    };

    struct SpriteRenderer__Fields {
        struct Renderer__Fields _;
    };

    struct SpriteRenderer {
        struct SpriteRenderer__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteRenderer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteRenderer__VTable vtable;
    };

    enum class SpriteMeshType__Enum : int32_t {
        FullRect = 0x00000000,
        Tight = 0x00000001,
    };

    struct SpriteMeshType__Enum__Boxed {
        struct SpriteMeshType__Enum__Class* klass;
        MonitorData* monitor;
        SpriteMeshType__Enum value;
    };

    struct SpriteMeshType__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct SpriteMeshType__Enum__StaticFields {
    };

    struct SpriteMeshType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteMeshType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteMeshType__Enum__VTable vtable;
    };

    enum class SpritePackingMode__Enum : int32_t {
        Tight = 0x00000000,
        Rectangle = 0x00000001,
    };

    struct SpritePackingMode__Enum__Boxed {
        struct SpritePackingMode__Enum__Class* klass;
        MonitorData* monitor;
        SpritePackingMode__Enum value;
    };

    struct SpritePackingMode__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct SpritePackingMode__Enum__StaticFields {
    };

    struct SpritePackingMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpritePackingMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpritePackingMode__Enum__VTable vtable;
    };

    enum class SpritePackingRotation__Enum : int32_t {
        None = 0x00000000,
        FlipHorizontal = 0x00000001,
        FlipVertical = 0x00000002,
        Rotate180 = 0x00000003,
        Any = 0x0000000f,
    };

    struct SpritePackingRotation__Enum__Boxed {
        struct SpritePackingRotation__Enum__Class* klass;
        MonitorData* monitor;
        SpritePackingRotation__Enum value;
    };

    struct SpritePackingRotation__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct SpritePackingRotation__Enum__StaticFields {
    };

    struct SpritePackingRotation__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpritePackingRotation__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpritePackingRotation__Enum__VTable vtable;
    };

    struct IList_1_UnityEngine_Vector2_ {
        struct IList_1_UnityEngine_Vector2___Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_UnityEngine_Vector2___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_UnityEngine_Vector2___VTable vtable;
    };

    struct Action_1_UnityEngine_U2D_SpriteAtlas___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_UnityEngine_U2D_SpriteAtlas_ {
        struct Action_1_UnityEngine_U2D_SpriteAtlas___Class* klass;
        MonitorData* monitor;
        struct Action_1_UnityEngine_U2D_SpriteAtlas___Fields fields;
    };

    struct SpriteAtlas__Fields {
        struct Object_1__Fields _;
    };

    struct SpriteAtlas {
        struct SpriteAtlas__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteAtlas__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_UnityEngine_U2D_SpriteAtlas___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_UnityEngine_U2D_SpriteAtlas___VTable vtable;
    };

    enum class FontStyle__Enum : int32_t {
        Normal = 0x00000000,
        Bold = 0x00000001,
        Italic = 0x00000002,
        BoldAndItalic = 0x00000003,
    };

    struct FontStyle__Enum__Boxed {
        struct FontStyle__Enum__Class* klass;
        MonitorData* monitor;
        FontStyle__Enum value;
    };

    enum class TextAnchor__Enum : int32_t {
        UpperLeft = 0x00000000,
        UpperCenter = 0x00000001,
        UpperRight = 0x00000002,
        MiddleLeft = 0x00000003,
        MiddleCenter = 0x00000004,
        MiddleRight = 0x00000005,
        LowerLeft = 0x00000006,
        LowerCenter = 0x00000007,
        LowerRight = 0x00000008,
    };

    struct TextAnchor__Enum__Boxed {
        struct TextAnchor__Enum__Class* klass;
        MonitorData* monitor;
        TextAnchor__Enum value;
    };

    enum class VerticalWrapMode__Enum : int32_t {
        Truncate = 0x00000000,
        Overflow = 0x00000001,
    };

    struct VerticalWrapMode__Enum__Boxed {
        struct VerticalWrapMode__Enum__Class* klass;
        MonitorData* monitor;
        VerticalWrapMode__Enum value;
    };

} // namespace app
