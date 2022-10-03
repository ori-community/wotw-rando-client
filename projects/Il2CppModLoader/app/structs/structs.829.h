namespace app {
    struct MoonReference_1_LegacyTrigger_ {
        struct MoonReference_1_LegacyTrigger___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_LegacyTrigger___Fields fields;
    };

    struct IMoonType_1_LegacyTrigger_ {
        struct IMoonType_1_LegacyTrigger___Class* klass;
        MonitorData* monitor;
    };

    struct ChallengeShrineManager_ChallengeWave__Array {
        struct ChallengeShrineManager_ChallengeWave__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ChallengeShrineManager_ChallengeWave vector[32];
    };

    struct ChallengeShrineManager_AddTimeTrigger {
        struct MoonReference_1_LegacyTrigger_* Trigger;
        float TimeToAdd;
    };

    struct ChallengeShrineManager_AddTimeTrigger__Boxed {
        struct ChallengeShrineManager_AddTimeTrigger__Class* klass;
        MonitorData* monitor;
        struct ChallengeShrineManager_AddTimeTrigger fields;
    };

    struct ChallengeShrineManager_AddTimeTrigger__Array {
        struct ChallengeShrineManager_AddTimeTrigger__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ChallengeShrineManager_AddTimeTrigger vector[32];
    };

    struct __declspec(align(8)) MoonReference_1_ColosseumTimer___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_ColosseumTimer_* m_cachedProxyType;
        struct ColosseumTimer* m_volatileValue;
    };

    struct MoonReference_1_ColosseumTimer_ {
        struct MoonReference_1_ColosseumTimer___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_ColosseumTimer___Fields fields;
    };

    struct IMoonType_1_ColosseumTimer_ {
        struct IMoonType_1_ColosseumTimer___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_ChallengeShrineTrigger___Fields {
        struct ChallengeShrineTrigger__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ChallengeShrineTrigger_ {
        struct List_1_ChallengeShrineTrigger___Class* klass;
        MonitorData* monitor;
        struct List_1_ChallengeShrineTrigger___Fields fields;
    };

    enum class ChallengeShrineTrigger_ShrineTriggerType__Enum : int32_t {
        StartShrine = 0x00000000,
        AddTime = 0x00000001,
        EndWave = 0x00000002,
    };

    struct ChallengeShrineTrigger_ShrineTriggerType__Enum__Boxed {
        struct ChallengeShrineTrigger_ShrineTriggerType__Enum__Class* klass;
        MonitorData* monitor;
        ChallengeShrineTrigger_ShrineTriggerType__Enum value;
    };

    struct ChallengeShrineTrigger__Fields {
        struct MonoBehaviour__Fields _;
        ChallengeShrineTrigger_ShrineTriggerType__Enum TriggerType;

        float CheckpointTimeToAdd;
        bool m_alreadyTriggered;
    };

    struct ChallengeShrineTrigger {
        struct ChallengeShrineTrigger__Class* klass;
        MonitorData* monitor;
        struct ChallengeShrineTrigger__Fields fields;
    };

    struct ChallengeShrineTrigger__Array {
        struct ChallengeShrineTrigger__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ChallengeShrineTrigger* vector[32];
    };

    struct IEnumerator_1_ChallengeShrineTrigger_ {
        struct IEnumerator_1_ChallengeShrineTrigger___Class* klass;
        MonitorData* monitor;
    };

    struct IMoonType_1_LegacyTrigger___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_LegacyTrigger___StaticFields {
    };

    struct IMoonType_1_LegacyTrigger___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_LegacyTrigger___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_LegacyTrigger___VTable vtable;
    };

    struct LegacyTrigger___VTable {
    };

    struct LegacyTrigger___StaticFields {
    };

    struct LegacyTrigger___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyTrigger___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyTrigger___VTable vtable;
    };

    struct MoonReference_1_LegacyTrigger___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
        VirtualInvokeData get_IsStaticValue;
        VirtualInvokeData GetTypeData;
        VirtualInvokeData CanResolve;
        VirtualInvokeData get_IsCrossSceneReference;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct MoonReference_1_LegacyTrigger___StaticFields {
    };

    struct MoonReference_1_LegacyTrigger___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_LegacyTrigger___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_LegacyTrigger___VTable vtable;
    };

    struct ChallengeShrineManager_ChallengeWave__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChallengeShrineManager_ChallengeWave__StaticFields {
    };

    struct ChallengeShrineManager_ChallengeWave__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineManager_ChallengeWave__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineManager_ChallengeWave__VTable vtable;
    };

    struct ChallengeShrineManager_ChallengeWave__Array__VTable {
    };

    struct ChallengeShrineManager_ChallengeWave__Array__StaticFields {
    };

    struct ChallengeShrineManager_ChallengeWave__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineManager_ChallengeWave__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineManager_ChallengeWave__Array__VTable vtable;
    };

    struct ChallengeShrineManager_AddTimeTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChallengeShrineManager_AddTimeTrigger__StaticFields {
    };

    struct ChallengeShrineManager_AddTimeTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineManager_AddTimeTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineManager_AddTimeTrigger__VTable vtable;
    };

    struct ChallengeShrineManager_AddTimeTrigger__Array__VTable {
    };

    struct ChallengeShrineManager_AddTimeTrigger__Array__StaticFields {
    };

    struct ChallengeShrineManager_AddTimeTrigger__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineManager_AddTimeTrigger__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineManager_AddTimeTrigger__Array__VTable vtable;
    };

    struct IMoonType_1_ColosseumTimer___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_ColosseumTimer___StaticFields {
    };

    struct IMoonType_1_ColosseumTimer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_ColosseumTimer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_ColosseumTimer___VTable vtable;
    };

    struct ColosseumTimer___VTable {
    };

    struct ColosseumTimer___StaticFields {
    };

    struct ColosseumTimer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColosseumTimer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColosseumTimer___VTable vtable;
    };

    struct MoonReference_1_ColosseumTimer___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
        VirtualInvokeData get_IsStaticValue;
        VirtualInvokeData GetTypeData;
        VirtualInvokeData CanResolve;
        VirtualInvokeData get_IsCrossSceneReference;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct MoonReference_1_ColosseumTimer___StaticFields {
    };

    struct MoonReference_1_ColosseumTimer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_ColosseumTimer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_ColosseumTimer___VTable vtable;
    };

    struct ChallengeShrineTrigger_ShrineTriggerType__Enum__VTable {
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

    struct ChallengeShrineTrigger_ShrineTriggerType__Enum__StaticFields {
    };

    struct ChallengeShrineTrigger_ShrineTriggerType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineTrigger_ShrineTriggerType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineTrigger_ShrineTriggerType__Enum__VTable vtable;
    };

    struct ChallengeShrineTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChallengeShrineTrigger__StaticFields {
    };

    struct ChallengeShrineTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineTrigger__VTable vtable;
    };

    struct ChallengeShrineTrigger__Array__VTable {
    };

    struct ChallengeShrineTrigger__Array__StaticFields {
    };

    struct ChallengeShrineTrigger__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineTrigger__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineTrigger__Array__VTable vtable;
    };

    struct IEnumerator_1_ChallengeShrineTrigger___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ChallengeShrineTrigger___StaticFields {
    };

    struct IEnumerator_1_ChallengeShrineTrigger___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ChallengeShrineTrigger___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ChallengeShrineTrigger___VTable vtable;
    };

    struct List_1_ChallengeShrineTrigger___VTable {
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

    struct List_1_ChallengeShrineTrigger___StaticFields {
        struct ChallengeShrineTrigger__Array* _emptyArray;
    };

    struct List_1_ChallengeShrineTrigger___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ChallengeShrineTrigger___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ChallengeShrineTrigger___VTable vtable;
    };

    struct ChallengeShrineManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct ChallengeShrineManager__StaticFields {
        struct ChallengeShrineManager* ActiveChallengeShrine;
    };

    struct ChallengeShrineManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeShrineManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeShrineManager__VTable vtable;
    };

    struct CharacterAnimationController__Fields {
        struct Suspendable__Fields _;
        struct List_1_CharacterAnimationStateBase_* States;
        struct CharacterAnimationStateBase* CurrentState;
        struct SpriteAnimatorWithTransitions* SpriteAnimator;
        struct CharacterSpriteMirror* SpriteMirror;
        bool m_wasFacingLeft;
        bool _IsSuspended_k__BackingField;
    };

    struct CharacterAnimationController {
        struct CharacterAnimationController__Class* klass;
        MonitorData* monitor;
        struct CharacterAnimationController__Fields fields;
    };

    struct __declspec(align(8)) List_1_CharacterAnimationStateBase___Fields {
        struct CharacterAnimationStateBase__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CharacterAnimationStateBase_ {
        struct List_1_CharacterAnimationStateBase___Class* klass;
        MonitorData* monitor;
        struct List_1_CharacterAnimationStateBase___Fields fields;
    };

    struct CharacterAnimationStateBase__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct CharacterAnimationStateBase {
        struct CharacterAnimationStateBase__Class* klass;
        MonitorData* monitor;
        struct CharacterAnimationStateBase__Fields fields;
    };

    struct CharacterAnimationStateBase__Array {
        struct CharacterAnimationStateBase__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CharacterAnimationStateBase* vector[32];
    };

    struct IEnumerator_1_CharacterAnimationStateBase_ {
        struct IEnumerator_1_CharacterAnimationStateBase___Class* klass;
        MonitorData* monitor;
    };

    struct CharacterAnimationStateBase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnAnimationEnd;
        VirtualInvokeData __unknown_1;
    };

    struct CharacterAnimationStateBase__StaticFields {
    };

    struct CharacterAnimationStateBase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterAnimationStateBase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterAnimationStateBase__VTable vtable;
    };

    struct CharacterAnimationStateBase__Array__VTable {
    };

    struct CharacterAnimationStateBase__Array__StaticFields {
    };

    struct CharacterAnimationStateBase__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterAnimationStateBase__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterAnimationStateBase__Array__VTable vtable;
    };

    struct IEnumerator_1_CharacterAnimationStateBase___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CharacterAnimationStateBase___StaticFields {
    };

    struct IEnumerator_1_CharacterAnimationStateBase___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CharacterAnimationStateBase___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CharacterAnimationStateBase___VTable vtable;
    };

    struct List_1_CharacterAnimationStateBase___VTable {
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

    struct List_1_CharacterAnimationStateBase___StaticFields {
        struct CharacterAnimationStateBase__Array* _emptyArray;
    };

    struct List_1_CharacterAnimationStateBase___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CharacterAnimationStateBase___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CharacterAnimationStateBase___VTable vtable;
    };

    struct CharacterAnimationController__VTable {
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
    };

    struct CharacterAnimationController__StaticFields {
    };

    struct CharacterAnimationController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterAnimationController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterAnimationController__VTable vtable;
    };

    struct CharacterAnimationState__Fields {
        struct CharacterAnimationStateBase__Fields _;
        struct TextureAnimationWithTransitions* Animation;
    };

    struct CharacterAnimationState {
        struct CharacterAnimationState__Class* klass;
        MonitorData* monitor;
        struct CharacterAnimationState__Fields fields;
    };

    struct CharacterAnimationState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnAnimationEnd;
        VirtualInvokeData get_AnimationToPlay;
    };

    struct CharacterAnimationState__StaticFields {
    };

    struct CharacterAnimationState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterAnimationState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterAnimationState__VTable vtable;
    };

    struct __declspec(align(8)) AnimationListSwap__Fields {
        bool ShouldOVerride;
        struct MoonAnimation__Array* AnimationOverride;
        struct MoonAnimation__Array* OverriddenAnimation;
    };

    struct AnimationListSwap {
        struct AnimationListSwap__Class* klass;
        MonitorData* monitor;
        struct AnimationListSwap__Fields fields;
    };

    struct AnimationListSwap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AnimationListSwap__StaticFields {
    };

    struct AnimationListSwap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimationListSwap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimationListSwap__VTable vtable;
    };

    struct SeinIdlePuppet__Fields {
        struct CharacterStatePuppet__Fields _;
        struct SoundProvider* YawnSound;
        struct MoonAnimation* Idle;
        struct FloatAnimationParameter* Slope;
        struct MoonAnimation* IdleYawn;
        struct MoonAnimation* LookBackIn;
        struct MoonAnimation* LookBackLoop;
        struct MoonAnimation* LookBackOut;
        struct FloatAnimationParameter* Ground;
        struct FloatAnimationParameter* SlopeB;
        struct FloatAnimationParameter* SlopeUp;
        struct FloatAnimationParameter* SlopeDown;
        struct FloatAnimationParameter* Speed;
        struct FloatAnimationParameter* FallSpeed;
        struct FloatAnimationParameter* bowAimAngle;
        struct FloatAnimationParameter* AimAngle;
        struct FloatAnimationParameter* ChargeJumpDirection;
        struct FloatAnimationParameter* DigBlend;
        struct FloatAnimationParameter* SwimAngle;
        struct FloatAnimationParameter* SwinCurvature;
        struct FloatAnimationParameter* GrabSurfaceSlopeParameter;
        struct FloatAnimationParameter* GrabSurfaceCurvatureParameter;
        struct SeinLeafParticles* LeafParticlesManager;
        struct GameObject* LeavesTrail;
        struct GameObject* LeavesTrailUnderwater;
        struct GameObject* m_leavesTrail;
        struct GameObject* m_leavesTrailUnderwater;
        struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_* m_floatAnimatorParamCache;
    };

    struct SeinIdlePuppet {
        struct SeinIdlePuppet__Class* klass;
        MonitorData* monitor;
        struct SeinIdlePuppet__Fields fields;
    };

    struct SeinLeafParticles__Fields {
        struct MonoBehaviour__Fields _;
        struct ParticleSystem* Particles;
        struct ParticleSystem* ParticlesUnderwater;
        struct AnimationCurve* ParticleRateOverSpeed;
        struct AnimationCurve* EmissionMultiplierOverDistance;
        float ParticleEmmisionRate;
        float ParticleUnderWaterEmmisionRate;
        struct SeinCharacter* m_seinCharacter;
        bool m_emission_initialized;
        struct ParticleSystem_EmissionModule m_emission;
        bool m_emissionUnderwater_initialized;
        struct ParticleSystem_EmissionModule m_emissionUnderwater;
        struct Vector3 m_lastPosition;
    };

    struct SeinLeafParticles {
        struct SeinLeafParticles__Class* klass;
        MonitorData* monitor;
        struct SeinLeafParticles__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_Moon_FloatAnimationParameter_System_Single___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_Moon_FloatAnimationParameter_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_ {
        struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single_ {
        int32_t hashCode;
        int32_t next;
        struct FloatAnimationParameter* key;
        float value;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array {
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single_ vector[32];
    };

    struct IEqualityComparer_1_Moon_FloatAnimationParameter_ {
        struct IEqualityComparer_1_Moon_FloatAnimationParameter___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___Fields {
        struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___Fields fields;
    };

    struct FloatAnimationParameter__Array {
        struct FloatAnimationParameter__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FloatAnimationParameter* vector[32];
    };

    struct IEnumerator_1_Moon_FloatAnimationParameter_ {
        struct IEnumerator_1_Moon_FloatAnimationParameter___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___Fields {
        struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___Fields fields;
    };

    struct ICollection_1_Moon_FloatAnimationParameter_ {
        struct ICollection_1_Moon_FloatAnimationParameter___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ {
        struct FloatAnimationParameter* key;
        float value;
    };

    struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Boxed {
        struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ fields;
    };

    struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Array {
        struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ {
        struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_FloatAnimationParameter_ {
        struct IEnumerable_1_Moon_FloatAnimationParameter___Class* klass;
        MonitorData* monitor;
    };

    struct SeinLeafParticles__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SeinLeafParticles__StaticFields {
    };

    struct SeinLeafParticles__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinLeafParticles__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinLeafParticles__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array__VTable vtable;
    };

    struct IEqualityComparer_1_Moon_FloatAnimationParameter___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_Moon_FloatAnimationParameter___StaticFields {
    };

    struct IEqualityComparer_1_Moon_FloatAnimationParameter___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_Moon_FloatAnimationParameter___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_Moon_FloatAnimationParameter___VTable vtable;
    };

    struct FloatAnimationParameter__Array__VTable {
    };

    struct FloatAnimationParameter__Array__StaticFields {
    };

    struct FloatAnimationParameter__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FloatAnimationParameter__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FloatAnimationParameter__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_FloatAnimationParameter___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_FloatAnimationParameter___StaticFields {
    };

    struct IEnumerator_1_Moon_FloatAnimationParameter___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_FloatAnimationParameter___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_FloatAnimationParameter___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

} // namespace app
