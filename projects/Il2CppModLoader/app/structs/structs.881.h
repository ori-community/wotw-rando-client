namespace app {
    struct FadingSound__Fields {
        struct MonoBehaviour__Fields _;
        struct AudioSource* m_audioSource;
        float m_originalVolume;
    };

    struct FadingSound {
        struct FadingSound__Class* klass;
        MonitorData* monitor;
        struct FadingSound__Fields fields;
    };

    struct FadingSound__Array {
        struct FadingSound__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FadingSound* vector[32];
    };

    enum class AnimatingFloat_WrapType__Enum : int32_t {
        Clamp = 0x00000000,
        Repeat = 0x00000001,
    };

    struct AnimatingFloat_WrapType__Enum__Boxed {
        struct AnimatingFloat_WrapType__Enum__Class* klass;
        MonitorData* monitor;
        AnimatingFloat_WrapType__Enum value;
    };

    struct __declspec(align(8)) AnimatingFloat__Fields {
        float Max;
        float Min;
        float Speed;
        float Value;
        AnimatingFloat_WrapType__Enum Wrap;
    };

    struct AnimatingFloat {
        struct AnimatingFloat__Class* klass;
        MonitorData* monitor;
        struct AnimatingFloat__Fields fields;
    };

    struct FadingSound__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FadingSound__StaticFields {
    };

    struct FadingSound__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FadingSound__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FadingSound__VTable vtable;
    };

    struct FadingSound__Array__VTable {
    };

    struct FadingSound__Array__StaticFields {
    };

    struct FadingSound__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FadingSound__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FadingSound__Array__VTable vtable;
    };

    struct AnimatingFloat_WrapType__Enum__VTable {
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

    struct AnimatingFloat_WrapType__Enum__StaticFields {
    };

    struct AnimatingFloat_WrapType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimatingFloat_WrapType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimatingFloat_WrapType__Enum__VTable vtable;
    };

    struct AnimatingFloat__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
    };

    struct AnimatingFloat__StaticFields {
    };

    struct AnimatingFloat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimatingFloat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimatingFloat__VTable vtable;
    };

    struct AmbientSoundZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AmbientSoundZone__StaticFields {
        bool Muted;
    };

    struct AmbientSoundZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbientSoundZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbientSoundZone__VTable vtable;
    };

    struct AudioStateZone__Fields {
        struct MonoBehaviour__Fields _;
        bool _Activated_k__BackingField;
        struct State* StateOnEnter;
        struct State* StateOnExit;
        struct Switch_1* SwitchOnEnter;
        struct Switch_1* SwitchOnExit;
        struct Trigger* TriggerOnEnter;
        struct Trigger* TriggerOnExit;
        struct List_1_AmbienceZone_WiseAuxSend_* AuxSends;
        struct Polygon_1* Polygon;
        struct Rect Bounds;
    };

    struct AudioStateZone {
        struct AudioStateZone__Class* klass;
        MonitorData* monitor;
        struct AudioStateZone__Fields fields;
    };

    struct __declspec(align(8)) List_1_AudioStateZone___Fields {
        struct AudioStateZone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AudioStateZone_ {
        struct List_1_AudioStateZone___Class* klass;
        MonitorData* monitor;
        struct List_1_AudioStateZone___Fields fields;
    };

    struct AudioStateZone__Array {
        struct AudioStateZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AudioStateZone* vector[32];
    };

    struct IEnumerator_1_AudioStateZone_ {
        struct IEnumerator_1_AudioStateZone___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_AmbienceZone_WiseAuxSend___Fields {
        struct AmbienceZone_WiseAuxSend__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AmbienceZone_WiseAuxSend_ {
        struct List_1_AmbienceZone_WiseAuxSend___Class* klass;
        MonitorData* monitor;
        struct List_1_AmbienceZone_WiseAuxSend___Fields fields;
    };

    struct AmbienceZone_WiseAuxSend {
        struct AuxBus* AuxBus;
        float Send;
    };

    struct AmbienceZone_WiseAuxSend__Boxed {
        struct AmbienceZone_WiseAuxSend__Class* klass;
        MonitorData* monitor;
        struct AmbienceZone_WiseAuxSend fields;
    };

    struct AmbienceZone_WiseAuxSend__Array {
        struct AmbienceZone_WiseAuxSend__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AmbienceZone_WiseAuxSend vector[32];
    };

    struct IEnumerator_1_AmbienceZone_WiseAuxSend_ {
        struct IEnumerator_1_AmbienceZone_WiseAuxSend___Class* klass;
        MonitorData* monitor;
    };

    struct AudioStateZone__Array__VTable {
    };

    struct AudioStateZone__Array__StaticFields {
    };

    struct AudioStateZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioStateZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioStateZone__Array__VTable vtable;
    };

    struct IEnumerator_1_AudioStateZone___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AudioStateZone___StaticFields {
    };

    struct IEnumerator_1_AudioStateZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AudioStateZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AudioStateZone___VTable vtable;
    };

    struct List_1_AudioStateZone___VTable {
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

    struct List_1_AudioStateZone___StaticFields {
        struct AudioStateZone__Array* _emptyArray;
    };

    struct List_1_AudioStateZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AudioStateZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AudioStateZone___VTable vtable;
    };

    struct AmbienceZone_WiseAuxSend__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AmbienceZone_WiseAuxSend__StaticFields {
    };

    struct AmbienceZone_WiseAuxSend__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbienceZone_WiseAuxSend__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbienceZone_WiseAuxSend__VTable vtable;
    };

    struct AmbienceZone_WiseAuxSend__Array__VTable {
    };

    struct AmbienceZone_WiseAuxSend__Array__StaticFields {
    };

    struct AmbienceZone_WiseAuxSend__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbienceZone_WiseAuxSend__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbienceZone_WiseAuxSend__Array__VTable vtable;
    };

    struct IEnumerator_1_AmbienceZone_WiseAuxSend___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AmbienceZone_WiseAuxSend___StaticFields {
    };

    struct IEnumerator_1_AmbienceZone_WiseAuxSend___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AmbienceZone_WiseAuxSend___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AmbienceZone_WiseAuxSend___VTable vtable;
    };

    struct List_1_AmbienceZone_WiseAuxSend___VTable {
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

    struct List_1_AmbienceZone_WiseAuxSend___StaticFields {
        struct AmbienceZone_WiseAuxSend__Array* _emptyArray;
    };

    struct List_1_AmbienceZone_WiseAuxSend___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AmbienceZone_WiseAuxSend___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AmbienceZone_WiseAuxSend___VTable vtable;
    };

    struct AudioStateZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct AudioStateZone__StaticFields {
        struct List_1_AudioStateZone_* AllZones;
    };

    struct AudioStateZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioStateZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioStateZone__VTable vtable;
    };

    struct BrightnessProvider__Fields {
        struct FloatValueProvider__Fields _;
    };

    struct BrightnessProvider {
        struct BrightnessProvider__Class* klass;
        MonitorData* monitor;
        struct BrightnessProvider__Fields fields;
    };

    struct BrightnessProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetFloatValue;
    };

    struct BrightnessProvider__StaticFields {
    };

    struct BrightnessProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrightnessProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrightnessProvider__VTable vtable;
    };

    struct ContrastProvider__Fields {
        struct FloatValueProvider__Fields _;
    };

    struct ContrastProvider {
        struct ContrastProvider__Class* klass;
        MonitorData* monitor;
        struct ContrastProvider__Fields fields;
    };

    struct ContrastProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetFloatValue;
    };

    struct ContrastProvider__StaticFields {
    };

    struct ContrastProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContrastProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContrastProvider__VTable vtable;
    };

    struct FollowGameplayCamera__Fields {
        struct MonoBehaviour__Fields _;
        bool FollowCameraComponent;
    };

    struct FollowGameplayCamera {
        struct FollowGameplayCamera__Class* klass;
        MonitorData* monitor;
        struct FollowGameplayCamera__Fields fields;
    };

    struct FollowGameplayCamera__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FollowGameplayCamera__StaticFields {
    };

    struct FollowGameplayCamera__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FollowGameplayCamera__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FollowGameplayCamera__VTable vtable;
    };

    struct LegacyPointAmbienceZone__Fields {
        struct MonoBehaviour__Fields _;
        struct SoundProvider* SoundProvider;
        struct Transform* Target;
        float WWiseFadeOutDuration;
        AkCurveInterpolation__Enum WWiseFadeType;

        struct Event_1* WiseEvent;
        struct RTPC* RTPC;
        struct Object_1__Array* RTPCFeedObjects;
        bool m_activated;
        struct Bounds m_bounds;
        float m_lastRtpcValue;
        struct Action* m_nullifyDelegate;
        struct ArtificialSoundHostReference m_soundHost;
    };

    struct LegacyPointAmbienceZone {
        struct LegacyPointAmbienceZone__Class* klass;
        MonitorData* monitor;
        struct LegacyPointAmbienceZone__Fields fields;
    };

    struct LegacyPointAmbienceZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct LegacyPointAmbienceZone__StaticFields {
    };

    struct LegacyPointAmbienceZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyPointAmbienceZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyPointAmbienceZone__VTable vtable;
    };

    struct ListenerSoundZone__Fields {
        struct AudioListenerZone__Fields _;
        AudioZoneShape__Enum Shape;
    };

    struct ListenerSoundZone {
        struct ListenerSoundZone__Class* klass;
        MonitorData* monitor;
        struct ListenerSoundZone__Fields fields;
    };

    struct ListenerSoundZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_GizmoText;
        VirtualInvokeData OnListenerEnteredZone;
        VirtualInvokeData OnListenerExitsZone;
        VirtualInvokeData OnListenerUpdateZone;
        VirtualInvokeData ResetAdditionalTracking;
    };

    struct ListenerSoundZone__StaticFields {
    };

    struct ListenerSoundZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListenerSoundZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListenerSoundZone__VTable vtable;
    };

    enum class MusicAction_MusicCommand__Enum : int32_t {
        Play = 0x00000000,
        Stop = 0x00000001,
    };

    struct MusicAction_MusicCommand__Enum__Boxed {
        struct MusicAction_MusicCommand__Enum__Class* klass;
        MonitorData* monitor;
        MusicAction_MusicCommand__Enum value;
    };

    struct MusicAction__Fields {
        struct ActionMethod__Fields _;
        struct MusicSource* Music;
        MusicAction_MusicCommand__Enum Command;
    };

    struct MusicAction {
        struct MusicAction__Class* klass;
        MonitorData* monitor;
        struct MusicAction__Fields fields;
    };

    struct MusicSource__Fields {
        struct MonoBehaviour__Fields _;
        struct SoundProvider* SoundProvider;
        struct Music_Layer* m_musicLayer;
        float FadeInDuration;
        float FadeOutDuration;
        bool PlayAtStart;
        int32_t Priority;
    };

    struct MusicSource {
        struct MusicSource__Class* klass;
        MonitorData* monitor;
        struct MusicSource__Fields fields;
    };

    struct MusicSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MusicSource__StaticFields {
    };

    struct MusicSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MusicSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MusicSource__VTable vtable;
    };

    struct MusicAction_MusicCommand__Enum__VTable {
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

    struct MusicAction_MusicCommand__Enum__StaticFields {
    };

    struct MusicAction_MusicCommand__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MusicAction_MusicCommand__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MusicAction_MusicCommand__Enum__VTable vtable;
    };

    struct MusicAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

    struct MusicAction__StaticFields {
    };

    struct MusicAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MusicAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MusicAction__VTable vtable;
    };

    struct MusicListener__Fields {
        struct MonoBehaviour__Fields _;
        struct SceneRoot* m_lastSceneRoot;
        struct Music_Layer* m_lastMusicLayer;
        struct Event_1* MusicListenerReady;
    };

    struct MusicListener {
        struct MusicListener__Class* klass;
        MonitorData* monitor;
        struct MusicListener__Fields fields;
    };

    struct MusicListener__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MusicListener__StaticFields {
        float FadeInDuration;
        float FadeOutDuration;
    };

    struct MusicListener__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MusicListener__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MusicListener__VTable vtable;
    };

    struct MusicSourceTrigger__Fields {
        struct MusicSource__Fields _;
    };

    struct MusicSourceTrigger {
        struct MusicSourceTrigger__Class* klass;
        MonitorData* monitor;
        struct MusicSourceTrigger__Fields fields;
    };

    struct MusicSourceTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MusicSourceTrigger__StaticFields {
    };

    struct MusicSourceTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MusicSourceTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MusicSourceTrigger__VTable vtable;
    };

    struct MusicVolumeProvider__Fields {
        struct FloatValueProvider__Fields _;
    };

    struct MusicVolumeProvider {
        struct MusicVolumeProvider__Class* klass;
        MonitorData* monitor;
        struct MusicVolumeProvider__Fields fields;
    };

    struct MusicVolumeProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetFloatValue;
    };

    struct MusicVolumeProvider__StaticFields {
    };

    struct MusicVolumeProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MusicVolumeProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MusicVolumeProvider__VTable vtable;
    };

    struct SoundController2D__Fields {
        struct MonoBehaviour__Fields _;
        float Volume;
        float MinDistance;
        float MaxDistance;
        AudioRolloffMode__Enum RolloffMode;

        struct AudioSource* m_audio;
        struct Transform* m_transform;
    };

    struct SoundController2D {
        struct SoundController2D__Class* klass;
        MonitorData* monitor;
        struct SoundController2D__Fields fields;
    };

    struct SoundController2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SoundController2D__StaticFields {
    };

    struct SoundController2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundController2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundController2D__VTable vtable;
    };

    struct SoundVolumeProvider__Fields {
        struct FloatValueProvider__Fields _;
    };

    struct SoundVolumeProvider {
        struct SoundVolumeProvider__Class* klass;
        MonitorData* monitor;
        struct SoundVolumeProvider__Fields fields;
    };

    struct SoundVolumeProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetFloatValue;
    };

    struct SoundVolumeProvider__StaticFields {
    };

    struct SoundVolumeProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundVolumeProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundVolumeProvider__VTable vtable;
    };

    struct ZoneProcessor_2_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Fields {
        struct ZoneProcessor__Fields _;
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array* m_listenerZoneTasks;
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array* m_emitterZoneTasks;
        int32_t m_validListenerZoneTasksSize;
        int32_t m_validEmitterZoneTasksSize;
        struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask__1* m_listenerTasksToReset;
        struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask__1* m_emitterTasksToReset;
    };

    struct ZoneProcessor_2_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ {
        struct ZoneProcessor_2_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Class* klass;
        MonitorData* monitor;
        struct ZoneProcessor_2_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Fields fields;
    };

    struct SoundZoneProcessor__Fields {
        struct ZoneProcessor_2_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Fields _;
    };

    struct SoundZoneProcessor {
        struct SoundZoneProcessor__Class* klass;
        MonitorData* monitor;
        struct SoundZoneProcessor__Fields fields;
    };

    enum class AudioZoneShape2D__Enum : int32_t {
        Circle = 0x00000000,
        Square = 0x00000001,
    };

    struct AudioZoneShape2D__Enum__Boxed {
        struct AudioZoneShape2D__Enum__Class* klass;
        MonitorData* monitor;
        AudioZoneShape2D__Enum value;
    };

    struct ListenerSoundZoneTaskData {
        struct Bounds Bounds;
        AudioZoneShape2D__Enum Shape;
    };

    struct ListenerSoundZoneTaskData__Boxed {
        struct ListenerSoundZoneTaskData__Class* klass;
        MonitorData* monitor;
        struct ListenerSoundZoneTaskData fields;
    };

    struct __declspec(align(8)) ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Fields {
        int32_t Id;
        struct ListenerSoundZoneTaskData _Data_k__BackingField;
        int32_t _FrameQuantinization_k__BackingField;
        struct AudioListenerZoneReference Zone;
        bool _ForceFirstFrame_k__BackingField;
        bool _IsBound_k__BackingField;
    };

    struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ {
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Class* klass;
        MonitorData* monitor;
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Fields fields;
    };

    struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array {
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* vector[32];
    };

    struct EmitterSoundZoneTaskData {
        struct Bounds Bounds;
        AudioZoneShape2D__Enum Shape;
    };

    struct EmitterSoundZoneTaskData__Boxed {
        struct EmitterSoundZoneTaskData__Class* klass;
        MonitorData* monitor;
        struct EmitterSoundZoneTaskData fields;
    };

    struct __declspec(align(8)) ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Fields {
        int32_t Id;
        struct EmitterSoundZoneTaskData _Data_k__BackingField;
        int32_t _FrameQuantinization_k__BackingField;
        struct AudioEmitterZoneReference _Zone_k__BackingField;
        bool _IsBound_k__BackingField;
        bool _ForceFirstFrame_k__BackingField;
    };

    struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ {
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Class* klass;
        MonitorData* monitor;
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Fields fields;
    };

    struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array {
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* vector[32];
    };

} // namespace app
