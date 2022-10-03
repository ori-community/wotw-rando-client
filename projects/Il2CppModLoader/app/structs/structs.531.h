namespace app {
    struct AkMusicSyncCallbackInfo__Fields {
        struct AkCallbackInfo__Fields _;
        void* swigCPtr;
    };

    struct AkMusicSyncCallbackInfo {
        struct AkMusicSyncCallbackInfo__Class* klass;
        MonitorData* monitor;
        struct AkMusicSyncCallbackInfo__Fields fields;
    };

    struct AkMusicSyncCallbackInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkMusicSyncCallbackInfo__StaticFields {
    };

    struct AkMusicSyncCallbackInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkMusicSyncCallbackInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkMusicSyncCallbackInfo__VTable vtable;
    };

    enum class AkCallbackType__Enum : int32_t {
        AK_EndOfEvent = 0x00000001,
        AK_EndOfDynamicSequenceItem = 0x00000002,
        AK_Marker = 0x00000004,
        AK_Duration = 0x00000008,
        AK_SpeakerVolumeMatrix = 0x00000010,
        AK_Starvation = 0x00000020,
        AK_MusicPlaylistSelect = 0x00000040,
        AK_MusicPlayStarted = 0x00000080,
        AK_MusicSyncBeat = 0x00000100,
        AK_MusicSyncBar = 0x00000200,
        AK_MusicSyncEntry = 0x00000400,
        AK_MusicSyncExit = 0x00000800,
        AK_MusicSyncGrid = 0x00001000,
        AK_MusicSyncUserCue = 0x00002000,
        AK_MusicSyncPoint = 0x00004000,
        AK_MusicSyncAll = 0x00007f00,
        AK_MIDIEvent = 0x00010000,
        AK_CallbackBits = 0x000fffff,
        AK_EnableGetSourcePlayPosition = 0x00100000,
        AK_EnableGetMusicPlayPosition = 0x00200000,
        AK_EnableGetSourceStreamBuffering = 0x00400000,
        AK_Monitoring = 0x20000000,
        AK_AudioSourceChange = 0x23000000,
        AK_Bank = 0x40000000,
        AK_AudioInterruption = 0x22000000,
    };

    struct AkCallbackType__Enum__Boxed {
        struct AkCallbackType__Enum__Class* klass;
        MonitorData* monitor;
        AkCallbackType__Enum value;
    };

    struct AkCallbackType__Enum__VTable {
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

    struct AkCallbackType__Enum__StaticFields {
    };

    struct AkCallbackType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkCallbackType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkCallbackType__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkObjectInfo__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkObjectInfo {
        struct AkObjectInfo__Class* klass;
        MonitorData* monitor;
        struct AkObjectInfo__Fields fields;
    };

    struct AkObjectInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkObjectInfo__StaticFields {
    };

    struct AkObjectInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkObjectInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkObjectInfo__VTable vtable;
    };

    struct __declspec(align(8)) AkObstructionOcclusionValues__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkObstructionOcclusionValues {
        struct AkObstructionOcclusionValues__Class* klass;
        MonitorData* monitor;
        struct AkObstructionOcclusionValues__Fields fields;
    };

    struct AkObstructionOcclusionValues__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkObstructionOcclusionValues__StaticFields {
    };

    struct AkObstructionOcclusionValues__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkObstructionOcclusionValues__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkObstructionOcclusionValues__VTable vtable;
    };

    enum class AkPanningRule__Enum : int32_t {
        AkPanningRule_Speakers = 0x00000000,
        AkPanningRule_Headphones = 0x00000001,
    };

    struct AkPanningRule__Enum__Boxed {
        struct AkPanningRule__Enum__Class* klass;
        MonitorData* monitor;
        AkPanningRule__Enum value;
    };

    struct AkPanningRule__Enum__VTable {
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

    struct AkPanningRule__Enum__StaticFields {
    };

    struct AkPanningRule__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPanningRule__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPanningRule__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkPathParams__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkPathParams {
        struct AkPathParams__Class* klass;
        MonitorData* monitor;
        struct AkPathParams__Fields fields;
    };

    struct AkPathParams__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkPathParams__StaticFields {
    };

    struct AkPathParams__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPathParams__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPathParams__VTable vtable;
    };

    struct __declspec(align(8)) AkPlaylistArray__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkPlaylistArray {
        struct AkPlaylistArray__Class* klass;
        MonitorData* monitor;
        struct AkPlaylistArray__Fields fields;
    };

    struct AkPlaylist__Fields {
        struct AkPlaylistArray__Fields _;
        void* swigCPtr;
    };

    struct AkPlaylist {
        struct AkPlaylist__Class* klass;
        MonitorData* monitor;
        struct AkPlaylist__Fields fields;
    };

    struct AkPlaylistArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkPlaylistArray__StaticFields {
    };

    struct AkPlaylistArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPlaylistArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPlaylistArray__VTable vtable;
    };

    struct AkPlaylist__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkPlaylist__StaticFields {
    };

    struct AkPlaylist__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPlaylist__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPlaylist__VTable vtable;
    };

    struct __declspec(align(8)) AkBaseArray_1_AkExternalSourceInfo___Fields {
        int32_t _Capacity_k__BackingField;
        void* m_Buffer;
    };

    struct AkBaseArray_1_AkExternalSourceInfo_ {
        struct AkBaseArray_1_AkExternalSourceInfo___Class* klass;
        MonitorData* monitor;
        struct AkBaseArray_1_AkExternalSourceInfo___Fields fields;
    };

    struct AkExternalSourceInfoArray__Fields {
        struct AkBaseArray_1_AkExternalSourceInfo___Fields _;
    };

    struct AkExternalSourceInfoArray {
        struct AkExternalSourceInfoArray__Class* klass;
        MonitorData* monitor;
        struct AkExternalSourceInfoArray__Fields fields;
    };

    struct AkBaseArray_1_AkExternalSourceInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData __unknown;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct AkBaseArray_1_AkExternalSourceInfo___StaticFields {
    };

    struct AkBaseArray_1_AkExternalSourceInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkBaseArray_1_AkExternalSourceInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkBaseArray_1_AkExternalSourceInfo___VTable vtable;
    };

    struct AkExternalSourceInfoArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData get_StructureSize;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData CreateNewReferenceFromIntPtr;
        VirtualInvokeData CloneIntoReferenceFromIntPtr;
    };

    struct AkExternalSourceInfoArray__StaticFields {
    };

    struct AkExternalSourceInfoArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkExternalSourceInfoArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkExternalSourceInfoArray__VTable vtable;
    };

    struct __declspec(align(8)) AkPositioningInfo__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkPositioningInfo {
        struct AkPositioningInfo__Class* klass;
        MonitorData* monitor;
        struct AkPositioningInfo__Fields fields;
    };

    struct AkPositioningInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkPositioningInfo__StaticFields {
    };

    struct AkPositioningInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPositioningInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPositioningInfo__VTable vtable;
    };

    enum class AkSpeakerPanningType__Enum : int32_t {
        AK_DirectSpeakerAssignment = 0x00000000,
        AK_BalanceFadeHeight = 0x00000001,
    };

    struct AkSpeakerPanningType__Enum__Boxed {
        struct AkSpeakerPanningType__Enum__Class* klass;
        MonitorData* monitor;
        AkSpeakerPanningType__Enum value;
    };

    struct AkSpeakerPanningType__Enum__VTable {
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

    struct AkSpeakerPanningType__Enum__StaticFields {
    };

    struct AkSpeakerPanningType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkSpeakerPanningType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkSpeakerPanningType__Enum__VTable vtable;
    };

    enum class Ak3DPositionType__Enum : int32_t {
        AK_3DPositionType_Emitter = 0x00000000,
        AK_3DPositionType_EmitterWithAutomation = 0x00000001,
        AK_3DPositionType_ListenerWithAutomation = 0x00000002,
    };

    struct Ak3DPositionType__Enum__Boxed {
        struct Ak3DPositionType__Enum__Class* klass;
        MonitorData* monitor;
        Ak3DPositionType__Enum value;
    };

    struct Ak3DPositionType__Enum__VTable {
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

    struct Ak3DPositionType__Enum__StaticFields {
    };

    struct Ak3DPositionType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Ak3DPositionType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Ak3DPositionType__Enum__VTable vtable;
    };

    enum class Ak3DSpatializationMode__Enum : int32_t {
        AK_SpatializationMode_None = 0x00000000,
        AK_SpatializationMode_PositionOnly = 0x00000001,
        AK_SpatializationMode_PositionAndOrientation = 0x00000002,
    };

    struct Ak3DSpatializationMode__Enum__Boxed {
        struct Ak3DSpatializationMode__Enum__Class* klass;
        MonitorData* monitor;
        Ak3DSpatializationMode__Enum value;
    };

    struct Ak3DSpatializationMode__Enum__VTable {
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

    struct Ak3DSpatializationMode__Enum__StaticFields {
    };

    struct Ak3DSpatializationMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Ak3DSpatializationMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Ak3DSpatializationMode__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkRamp__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkRamp {
        struct AkRamp__Class* klass;
        MonitorData* monitor;
        struct AkRamp__Fields fields;
    };

    struct AkRamp__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkRamp__StaticFields {
    };

    struct AkRamp__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkRamp__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkRamp__VTable vtable;
    };

    struct __declspec(align(8)) AkReflectionPathInfo__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkReflectionPathInfo {
        struct AkReflectionPathInfo__Class* klass;
        MonitorData* monitor;
        struct AkReflectionPathInfo__Fields fields;
    };

    struct AkReflectionPathInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkReflectionPathInfo__StaticFields {
    };

    struct AkReflectionPathInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkReflectionPathInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkReflectionPathInfo__VTable vtable;
    };

    struct __declspec(align(8)) AkRoomParams__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkRoomParams {
        struct AkRoomParams__Class* klass;
        MonitorData* monitor;
        struct AkRoomParams__Fields fields;
    };

    struct AkRoomParams__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkRoomParams__StaticFields {
    };

    struct AkRoomParams__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkRoomParams__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkRoomParams__VTable vtable;
    };

    struct __declspec(align(8)) AkSegmentInfo__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkSegmentInfo {
        struct AkSegmentInfo__Class* klass;
        MonitorData* monitor;
        struct AkSegmentInfo__Fields fields;
    };

    struct AkSegmentInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkSegmentInfo__StaticFields {
    };

    struct AkSegmentInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkSegmentInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkSegmentInfo__VTable vtable;
    };

    struct __declspec(align(8)) AkSerializedCallbackHeader__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkSerializedCallbackHeader {
        struct AkSerializedCallbackHeader__Class* klass;
        MonitorData* monitor;
        struct AkSerializedCallbackHeader__Fields fields;
    };

    struct AkSerializedCallbackHeader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkSerializedCallbackHeader__StaticFields {
    };

    struct AkSerializedCallbackHeader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkSerializedCallbackHeader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkSerializedCallbackHeader__VTable vtable;
    };

    struct __declspec(align(8)) AkSourceSettings__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkSourceSettings {
        struct AkSourceSettings__Class* klass;
        MonitorData* monitor;
        struct AkSourceSettings__Fields fields;
    };

    struct AkSourceSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkSourceSettings__StaticFields {
    };

    struct AkSourceSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkSourceSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkSourceSettings__VTable vtable;
    };

    struct __declspec(align(8)) AkSpatialAudioInitSettings__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkSpatialAudioInitSettings {
        struct AkSpatialAudioInitSettings__Class* klass;
        MonitorData* monitor;
        struct AkSpatialAudioInitSettings__Fields fields;
    };

    struct AkSpatialAudioInitSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkSpatialAudioInitSettings__StaticFields {
    };

    struct AkSpatialAudioInitSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkSpatialAudioInitSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkSpatialAudioInitSettings__VTable vtable;
    };

    struct __declspec(align(8)) AkTaskContext__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkTaskContext {
        struct AkTaskContext__Class* klass;
        MonitorData* monitor;
        struct AkTaskContext__Fields fields;
    };

    struct AkTaskContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkTaskContext__StaticFields {
    };

    struct AkTaskContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkTaskContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkTaskContext__VTable vtable;
    };

    struct __declspec(align(8)) AkTriangle__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkTriangle {
        struct AkTriangle__Class* klass;
        MonitorData* monitor;
        struct AkTriangle__Fields fields;
    };

    struct AkTriangle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkTriangle__StaticFields {
    };

    struct AkTriangle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkTriangle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkTriangle__VTable vtable;
    };

    struct __declspec(align(8)) AkVertex__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkVertex {
        struct AkVertex__Class* klass;
        MonitorData* monitor;
        struct AkVertex__Fields fields;
    };

    struct AkVertex__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkVertex__StaticFields {
    };

    struct AkVertex__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkVertex__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkVertex__VTable vtable;
    };

    struct __declspec(align(8)) AkCommunicationSettings__Fields {
        void* swigCPtr;
        bool swigCMemOwn;
    };

    struct AkCommunicationSettings {
        struct AkCommunicationSettings__Class* klass;
        MonitorData* monitor;
        struct AkCommunicationSettings__Fields fields;
    };

    struct AkCommunicationSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData setCPtr;
        VirtualInvokeData Dispose_1;
    };

    struct AkCommunicationSettings__StaticFields {
    };

    struct AkCommunicationSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkCommunicationSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkCommunicationSettings__VTable vtable;
    };

    enum class AkAudioAPI__Enum : int32_t {
        AkAPI_Wasapi = 0x00000001,
        AkAPI_XAudio2 = 0x00000002,
        AkAPI_DirectSound = 0x00000004,
        AkAPI_Default = 0x00000007,
    };

    struct AkAudioAPI__Enum__Boxed {
        struct AkAudioAPI__Enum__Class* klass;
        MonitorData* monitor;
        AkAudioAPI__Enum value;
    };

    struct AkAudioAPI__Enum__VTable {
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

    struct AkAudioAPI__Enum__StaticFields {
    };

    struct AkAudioAPI__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkAudioAPI__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkAudioAPI__Enum__VTable vtable;
    };

    struct AkCallbackManager_EventCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AkCallbackManager_EventCallback {
        struct AkCallbackManager_EventCallback__Class* klass;
        MonitorData* monitor;
        struct AkCallbackManager_EventCallback__Fields fields;
    };

} // namespace app
