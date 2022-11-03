namespace app {
    struct List_1_ParticleSystemAnimator___VTable {
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

    struct List_1_ParticleSystemAnimator___StaticFields {
        struct ParticleSystemAnimator_1__Array* _emptyArray;
    };

    struct List_1_ParticleSystemAnimator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ParticleSystemAnimator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ParticleSystemAnimator___VTable vtable;
    };

    struct ShurikenParticleAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct ShurikenParticleAnimator__StaticFields {
    };

    struct ShurikenParticleAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShurikenParticleAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShurikenParticleAnimator__VTable vtable;
    };

    enum class SoundAnimator_PlaybackModeType__Enum : int32_t {
        TimelineBound = 0x00000000,
        TimelineIndependent = 0x00000001,
    };

    struct SoundAnimator_PlaybackModeType__Enum__Boxed {
        struct SoundAnimator_PlaybackModeType__Enum__Class* klass;
        MonitorData* monitor;
        SoundAnimator_PlaybackModeType__Enum value;
    };

    struct SoundAnimator__Fields {
        struct BaseAnimator__Fields _;
        SoundAnimator_PlaybackModeType__Enum PlaybackMode;

        struct SoundProvider* SoundProvider;
        struct Transform* Target;
        float ClipLength;
        struct GameObject* SoundPreplayHandler;
        bool Loop;
        struct SoundHost* SoundHost;
        struct SoundPlayer* m_soundPlayer;
        struct SoundDescriptor* m_soundDescriptor;
        bool m_started;
        float m_previusTime;
        float m_length;
        float m_prevRecursiveCheckTime;
    };

    struct SoundAnimator {
        struct SoundAnimator__Class* klass;
        MonitorData* monitor;
        struct SoundAnimator__Fields fields;
    };

    struct SoundAnimator_PlaybackModeType__Enum__VTable {
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

    struct SoundAnimator_PlaybackModeType__Enum__StaticFields {
    };

    struct SoundAnimator_PlaybackModeType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundAnimator_PlaybackModeType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundAnimator_PlaybackModeType__Enum__VTable vtable;
    };

    struct SoundAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct SoundAnimator__StaticFields {
    };

    struct SoundAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundAnimator__VTable vtable;
    };

    struct TimelineActionTrigger__Fields {
        struct BaseAnimator__Fields _;
        struct ActionMethod* Action;
    };

    struct TimelineActionTrigger {
        struct TimelineActionTrigger__Class* klass;
        MonitorData* monitor;
        struct TimelineActionTrigger__Fields fields;
    };

    struct TimelineActionTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct TimelineActionTrigger__StaticFields {
    };

    struct TimelineActionTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimelineActionTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimelineActionTrigger__VTable vtable;
    };

    struct TimelineEventTrigger_c {
        struct TimelineEventTrigger_c__Class* klass;
        MonitorData* monitor;
    };

    struct TimelineEventTrigger_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimelineEventTrigger_c__StaticFields {
        struct TimelineEventTrigger_c* __9;
        struct Action_1_TimelineEventTrigger_* __9__28_0;
        struct Action* __9__28_1;
        struct Action* __9__28_2;
        struct Action* __9__28_3;
    };

    struct TimelineEventTrigger_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimelineEventTrigger_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimelineEventTrigger_c__VTable vtable;
    };

    struct TransformAnimator__Fields {
        struct BaseAnimator__Fields _;
        struct Transform* TargetTransform;
        struct AnimationCurve* X;
        struct AnimationCurve* Y;
        struct AnimationCurve* Z;
        struct Vector3 m_originalPosition;
    };

    struct TransformAnimator {
        struct TransformAnimator__Class* klass;
        MonitorData* monitor;
        struct TransformAnimator__Fields fields;
    };

    struct TransformAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct TransformAnimator__StaticFields {
    };

    struct TransformAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransformAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransformAnimator__VTable vtable;
    };

    struct UberInteractionExplosionAnimator__Fields {
        struct BaseAnimator__Fields _;
        struct AnimationCurve* AnimationCurve;
        struct Vector4 m_originalStrength;
        struct UberExplosionActor* m_actor;
    };

    struct UberInteractionExplosionAnimator {
        struct UberInteractionExplosionAnimator__Class* klass;
        MonitorData* monitor;
        struct UberInteractionExplosionAnimator__Fields fields;
    };

    struct UberInteractionExplosionAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct UberInteractionExplosionAnimator__StaticFields {
    };

    struct UberInteractionExplosionAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberInteractionExplosionAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberInteractionExplosionAnimator__VTable vtable;
    };

    struct UberPostAnimator__Fields {
        struct BaseAnimator__Fields _;
        struct AnimationCurve* AnimationCurve;
        struct List_1_CameraSettingsAsset_* CameraPostSettings;
        struct List_1_FogSettings_* FogSettings;
        struct CameraSettings* m_transitionSceneSettings;
        struct CameraPostProcessing* m_cameraPostProcessing;
        struct List_1_CameraSettings_* m_cameraSettings;
        struct SceneSettings* m_sceneSettings;
        struct CameraSettings* m_originalCameraSettings;
    };

    struct UberPostAnimator {
        struct UberPostAnimator__Class* klass;
        MonitorData* monitor;
        struct UberPostAnimator__Fields fields;
    };

    struct __declspec(align(8)) List_1_CameraSettingsAsset___Fields {
        struct CameraSettingsAsset__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CameraSettingsAsset_ {
        struct List_1_CameraSettingsAsset___Class* klass;
        MonitorData* monitor;
        struct List_1_CameraSettingsAsset___Fields fields;
    };

    struct CameraSettingsAsset__Array {
        struct CameraSettingsAsset__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CameraSettingsAsset* vector[32];
    };

    struct IEnumerator_1_CameraSettingsAsset_ {
        struct IEnumerator_1_CameraSettingsAsset___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_FogSettings___Fields {
        struct FogSettings__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FogSettings_ {
        struct List_1_FogSettings___Class* klass;
        MonitorData* monitor;
        struct List_1_FogSettings___Fields fields;
    };

    struct FogSettings__Array {
        struct FogSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FogSettings* vector[32];
    };

    struct IEnumerator_1_FogSettings_ {
        struct IEnumerator_1_FogSettings___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_CameraSettings___Fields {
        struct CameraSettings__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CameraSettings_ {
        struct List_1_CameraSettings___Class* klass;
        MonitorData* monitor;
        struct List_1_CameraSettings___Fields fields;
    };

    struct CameraSettings__Array {
        struct CameraSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CameraSettings* vector[32];
    };

    struct IEnumerator_1_CameraSettings_ {
        struct IEnumerator_1_CameraSettings___Class* klass;
        MonitorData* monitor;
    };

    struct CameraSettingsAsset__Array__VTable {
    };

    struct CameraSettingsAsset__Array__StaticFields {
    };

    struct CameraSettingsAsset__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraSettingsAsset__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraSettingsAsset__Array__VTable vtable;
    };

    struct IEnumerator_1_CameraSettingsAsset___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CameraSettingsAsset___StaticFields {
    };

    struct IEnumerator_1_CameraSettingsAsset___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CameraSettingsAsset___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CameraSettingsAsset___VTable vtable;
    };

    struct List_1_CameraSettingsAsset___VTable {
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

    struct List_1_CameraSettingsAsset___StaticFields {
        struct CameraSettingsAsset__Array* _emptyArray;
    };

    struct List_1_CameraSettingsAsset___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CameraSettingsAsset___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CameraSettingsAsset___VTable vtable;
    };

    struct FogSettings__Array__VTable {
    };

    struct FogSettings__Array__StaticFields {
    };

    struct FogSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FogSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FogSettings__Array__VTable vtable;
    };

    struct IEnumerator_1_FogSettings___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FogSettings___StaticFields {
    };

    struct IEnumerator_1_FogSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FogSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_FogSettings___VTable vtable;
    };

    struct List_1_FogSettings___VTable {
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

    struct List_1_FogSettings___StaticFields {
        struct FogSettings__Array* _emptyArray;
    };

    struct List_1_FogSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_FogSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_FogSettings___VTable vtable;
    };

    struct CameraSettings__Array__VTable {
    };

    struct CameraSettings__Array__StaticFields {
    };

    struct CameraSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraSettings__Array__VTable vtable;
    };

    struct IEnumerator_1_CameraSettings___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CameraSettings___StaticFields {
    };

    struct IEnumerator_1_CameraSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CameraSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CameraSettings___VTable vtable;
    };

    struct List_1_CameraSettings___VTable {
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

    struct List_1_CameraSettings___StaticFields {
        struct CameraSettings__Array* _emptyArray;
    };

    struct List_1_CameraSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CameraSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CameraSettings___VTable vtable;
    };

    struct UberPostAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct UberPostAnimator__StaticFields {
    };

    struct UberPostAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberPostAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberPostAnimator__VTable vtable;
    };

    struct UberPostBloomAnimator__Fields {
        struct BaseAnimator__Fields _;
        struct AnimationCurve* IntensityAnimationCurve;
        struct AnimationCurve* ThreshholdAnimationCurve;
        struct CameraPostProcessing* m_cameraPostProcessing;
    };

    struct UberPostBloomAnimator {
        struct UberPostBloomAnimator__Class* klass;
        MonitorData* monitor;
        struct UberPostBloomAnimator__Fields fields;
    };

    struct __declspec(align(8)) List_1_UberPostBloomAnimator___Fields {
        struct UberPostBloomAnimator__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UberPostBloomAnimator_ {
        struct List_1_UberPostBloomAnimator___Class* klass;
        MonitorData* monitor;
        struct List_1_UberPostBloomAnimator___Fields fields;
    };

    struct UberPostBloomAnimator__Array {
        struct UberPostBloomAnimator__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberPostBloomAnimator* vector[32];
    };

    struct IEnumerator_1_UberPostBloomAnimator_ {
        struct IEnumerator_1_UberPostBloomAnimator___Class* klass;
        MonitorData* monitor;
    };

    struct UberPostBloomAnimator__Array__VTable {
    };

    struct UberPostBloomAnimator__Array__StaticFields {
    };

    struct UberPostBloomAnimator__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberPostBloomAnimator__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberPostBloomAnimator__Array__VTable vtable;
    };

    struct IEnumerator_1_UberPostBloomAnimator___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UberPostBloomAnimator___StaticFields {
    };

    struct IEnumerator_1_UberPostBloomAnimator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UberPostBloomAnimator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UberPostBloomAnimator___VTable vtable;
    };

    struct List_1_UberPostBloomAnimator___VTable {
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

    struct List_1_UberPostBloomAnimator___StaticFields {
        struct UberPostBloomAnimator__Array* _emptyArray;
    };

    struct List_1_UberPostBloomAnimator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UberPostBloomAnimator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UberPostBloomAnimator___VTable vtable;
    };

    struct UberPostBloomAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

} // namespace app
