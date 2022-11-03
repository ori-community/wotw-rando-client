namespace app {
    struct WeaponJoint__Enum__VTable {
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

    struct WeaponJoint__Enum__StaticFields {
    };

    struct WeaponJoint__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeaponJoint__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeaponJoint__Enum__VTable vtable;
    };

    struct MeleeWeaponHammer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData GetComboMove;
        VirtualInvokeData get_ComboMoves;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData get_ProviderCooldown;
        VirtualInvokeData get_ProviderCooldownTimer;
        VirtualInvokeData set_ProviderCooldownTimer;
        VirtualInvokeData get_WeaponAnimator;
        VirtualInvokeData get_WeaponJoint;
        VirtualInvokeData SetAnimatorPosition;
        VirtualInvokeData GetAnimatorTransforms;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData SetAnimatorPosition_1;
        VirtualInvokeData GetAnimatorTransforms_1;
        VirtualInvokeData get_IsAutoEquippable;
        VirtualInvokeData get_IsAllowed;
        VirtualInvokeData get_IsAttackButtonUsed;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData GetComboMove_1;
        VirtualInvokeData Initialize;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData GetUsableMove;
        VirtualInvokeData OnEquip;
        VirtualInvokeData OnUnequip;
        VirtualInvokeData OnBeginCombo;
        VirtualInvokeData OnEndCombo;
        VirtualInvokeData CanDeactivateRoot;
        VirtualInvokeData Awake;
        VirtualInvokeData Update;
        VirtualInvokeData Deactivate;
        VirtualInvokeData ShowWeapon;
        VirtualInvokeData HideWeapon;
        VirtualInvokeData LateUpdate;
        VirtualInvokeData OnDamageResultReceived;
        VirtualInvokeData DebugWeapon;
        VirtualInvokeData get_TrackingExclusions_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnFixedUpdate;
    };

    struct MeleeWeaponHammer__StaticFields {
    };

    struct MeleeWeaponHammer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeWeaponHammer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeWeaponHammer__VTable vtable;
    };

    struct HammerComboMoveBase_BalancingData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HammerComboMoveBase_BalancingData__StaticFields {
    };

    struct HammerComboMoveBase_BalancingData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HammerComboMoveBase_BalancingData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HammerComboMoveBase_BalancingData__VTable vtable;
    };

    struct MeleeComboMoveHammerBase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoveHasFinished;
        VirtualInvokeData get_ComboMoveType;
        VirtualInvokeData get_ButtonInputType;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData CanExecute;
        VirtualInvokeData CanBeInterruptedBy;
        VirtualInvokeData CanInputBeQueued;
        VirtualInvokeData EnterMove;
        VirtualInvokeData UpdateMove;
        VirtualInvokeData ExitMove;
        VirtualInvokeData InterruptMove;
        VirtualInvokeData ModifyGravityPlatformMovementSettings;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
        VirtualInvokeData get_MoveCooldown;
        VirtualInvokeData get_MoveCooldownTimer;
        VirtualInvokeData set_MoveCooldownTimer;
        VirtualInvokeData get_WasGroundedSinceLastExecution;
        VirtualInvokeData set_WasGroundedSinceLastExecution;
        VirtualInvokeData OnAnimationEvent;
        VirtualInvokeData GetComboMove;
        VirtualInvokeData get_ComboMoves;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData get_ProviderCooldown;
        VirtualInvokeData get_ProviderCooldownTimer;
        VirtualInvokeData set_ProviderCooldownTimer;
        VirtualInvokeData __unknown;
        VirtualInvokeData get_EffectiveRootMotionMultiplier;
        VirtualInvokeData get_DealtDamage;
        VirtualInvokeData get_AnimationSpeedMultiplierParameterName;
        VirtualInvokeData OnCollision;
        VirtualInvokeData OnGroundCollision;
        VirtualInvokeData get_MoveHasFinished_1;
        VirtualInvokeData get_ButtonInputType_1;
        VirtualInvokeData get_ComboAbilityType_1;
        VirtualInvokeData EnterMove_1;
        VirtualInvokeData OnMoveWindowOpen;
        VirtualInvokeData OnMoveWindowClosed;
        VirtualInvokeData UpdateMove_1;
        VirtualInvokeData ExitMove_1;
        VirtualInvokeData get_IsAttackButtonUsed;
        VirtualInvokeData get_IsAttackButtonDown_1;
        VirtualInvokeData get_OnAttackButtonPressed_1;
        VirtualInvokeData get_OnAttackButtonReleased_1;
        VirtualInvokeData get_IsUninterruptable;
        VirtualInvokeData CanExecute_1;
        VirtualInvokeData CanBeInterruptedBy_1;
        VirtualInvokeData InterruptMove_1;
        VirtualInvokeData Initialize;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData OnAnimationEvent_1;
        VirtualInvokeData OnDestroyMove;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData get_NormalizedAttackTime;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData __unknown_6;
        VirtualInvokeData get_DetectGroundCollision;
        VirtualInvokeData CanDealDamage;
        VirtualInvokeData CanApplyBlastToAttackable;
    };

    struct MeleeComboMoveHammerBase__StaticFields {
    };

    struct MeleeComboMoveHammerBase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeComboMoveHammerBase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeComboMoveHammerBase__VTable vtable;
    };

    struct HammerComboMove_BalancingData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HammerComboMove_BalancingData__StaticFields {
    };

    struct HammerComboMove_BalancingData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HammerComboMove_BalancingData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HammerComboMove_BalancingData__VTable vtable;
    };

    struct MeleeComboMoveHammer_State__Enum__VTable {
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

    struct MeleeComboMoveHammer_State__Enum__StaticFields {
    };

    struct MeleeComboMoveHammer_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeComboMoveHammer_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeComboMoveHammer_State__Enum__VTable vtable;
    };

    struct HammerTrail_TrailPoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HammerTrail_TrailPoint__StaticFields {
    };

    struct HammerTrail_TrailPoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HammerTrail_TrailPoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HammerTrail_TrailPoint__VTable vtable;
    };

    struct HammerTrail_TrailPoint__Array__VTable {
    };

    struct HammerTrail_TrailPoint__Array__StaticFields {
    };

    struct HammerTrail_TrailPoint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HammerTrail_TrailPoint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HammerTrail_TrailPoint__Array__VTable vtable;
    };

    struct HammerTrail__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HammerTrail__StaticFields {
    };

    struct HammerTrail__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HammerTrail__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HammerTrail__VTable vtable;
    };

    struct MeleeComboMoveHammer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoveHasFinished;
        VirtualInvokeData get_ComboMoveType;
        VirtualInvokeData get_ButtonInputType;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData CanExecute;
        VirtualInvokeData CanBeInterruptedBy;
        VirtualInvokeData CanInputBeQueued;
        VirtualInvokeData EnterMove;
        VirtualInvokeData UpdateMove;
        VirtualInvokeData ExitMove;
        VirtualInvokeData InterruptMove;
        VirtualInvokeData ModifyGravityPlatformMovementSettings;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
        VirtualInvokeData get_MoveCooldown;
        VirtualInvokeData get_MoveCooldownTimer;
        VirtualInvokeData set_MoveCooldownTimer;
        VirtualInvokeData get_WasGroundedSinceLastExecution;
        VirtualInvokeData set_WasGroundedSinceLastExecution;
        VirtualInvokeData OnAnimationEvent;
        VirtualInvokeData GetComboMove;
        VirtualInvokeData get_ComboMoves;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData get_ProviderCooldown;
        VirtualInvokeData get_ProviderCooldownTimer;
        VirtualInvokeData set_ProviderCooldownTimer;
        VirtualInvokeData get_EffectiveDamage;
        VirtualInvokeData get_EffectiveRootMotionMultiplier;
        VirtualInvokeData get_DealtDamage;
        VirtualInvokeData get_AnimationSpeedMultiplierParameterName;
        VirtualInvokeData OnCollision;
        VirtualInvokeData OnGroundCollision;
        VirtualInvokeData get_MoveHasFinished_1;
        VirtualInvokeData get_ButtonInputType_1;
        VirtualInvokeData get_ComboAbilityType_1;
        VirtualInvokeData EnterMove_1;
        VirtualInvokeData OnMoveWindowOpen;
        VirtualInvokeData OnMoveWindowClosed;
        VirtualInvokeData UpdateMove_1;
        VirtualInvokeData ExitMove_1;
        VirtualInvokeData get_IsAttackButtonUsed;
        VirtualInvokeData get_IsAttackButtonDown_1;
        VirtualInvokeData get_OnAttackButtonPressed_1;
        VirtualInvokeData get_OnAttackButtonReleased_1;
        VirtualInvokeData get_IsUninterruptable;
        VirtualInvokeData CanExecute_1;
        VirtualInvokeData CanBeInterruptedBy_1;
        VirtualInvokeData InterruptMove_1;
        VirtualInvokeData Initialize;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData ModifyGravityPlatformMovementSettings_1;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings_1;
        VirtualInvokeData OnAnimationEvent_1;
        VirtualInvokeData OnDestroyMove;
        VirtualInvokeData get_BalancingBase;
        VirtualInvokeData get_NormalizedAttackTime;
        VirtualInvokeData OnHammerTopCollision;
        VirtualInvokeData OnHammerHandleCollision;
        VirtualInvokeData OnHammerHitGround;
        VirtualInvokeData get_DetectGroundCollision;
        VirtualInvokeData CanDealDamage;
        VirtualInvokeData CanApplyBlastToAttackable;
    };

    struct MeleeComboMoveHammer__StaticFields {
    };

    struct MeleeComboMoveHammer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeComboMoveHammer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeComboMoveHammer__VTable vtable;
    };

    struct MeleeComboMove__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoveHasFinished;
        VirtualInvokeData get_ComboMoveType;
        VirtualInvokeData get_ButtonInputType;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData CanExecute;
        VirtualInvokeData CanBeInterruptedBy;
        VirtualInvokeData CanInputBeQueued;
        VirtualInvokeData EnterMove;
        VirtualInvokeData UpdateMove;
        VirtualInvokeData ExitMove;
        VirtualInvokeData InterruptMove;
        VirtualInvokeData ModifyGravityPlatformMovementSettings;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
        VirtualInvokeData get_MoveCooldown;
        VirtualInvokeData get_MoveCooldownTimer;
        VirtualInvokeData set_MoveCooldownTimer;
        VirtualInvokeData get_WasGroundedSinceLastExecution;
        VirtualInvokeData set_WasGroundedSinceLastExecution;
        VirtualInvokeData OnAnimationEvent;
        VirtualInvokeData GetComboMove;
        VirtualInvokeData get_ComboMoves;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData get_ProviderCooldown;
        VirtualInvokeData get_ProviderCooldownTimer;
        VirtualInvokeData set_ProviderCooldownTimer;
        VirtualInvokeData __unknown;
        VirtualInvokeData get_EffectiveRootMotionMultiplier;
        VirtualInvokeData get_DealtDamage;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData OnGroundCollision;
        VirtualInvokeData get_MoveHasFinished_1;
        VirtualInvokeData get_ButtonInputType_1;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData EnterMove_1;
        VirtualInvokeData OnMoveWindowOpen;
        VirtualInvokeData OnMoveWindowClosed;
        VirtualInvokeData UpdateMove_1;
        VirtualInvokeData ExitMove_1;
        VirtualInvokeData get_IsAttackButtonUsed;
        VirtualInvokeData get_IsAttackButtonDown_1;
        VirtualInvokeData get_OnAttackButtonPressed_1;
        VirtualInvokeData get_OnAttackButtonReleased_1;
        VirtualInvokeData get_IsUninterruptable;
        VirtualInvokeData CanExecute_1;
        VirtualInvokeData CanBeInterruptedBy_1;
        VirtualInvokeData InterruptMove_1;
        VirtualInvokeData Initialize;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData OnAnimationEvent_1;
        VirtualInvokeData OnDestroyMove;
    };

    struct MeleeComboMove__StaticFields {
    };

    struct MeleeComboMove__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeComboMove__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeComboMove__VTable vtable;
    };

    struct MeleeComboTransition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MeleeComboTransition__StaticFields {
    };

    struct MeleeComboTransition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeComboTransition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeComboTransition__VTable vtable;
    };

    struct MeleeComboTransition__Array__VTable {
    };

    struct MeleeComboTransition__Array__StaticFields {
    };

    struct MeleeComboTransition__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeComboTransition__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeComboTransition__Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array__VTable vtable;
    };

    struct IEqualityComparer_1_Moon_WeaponJoint___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_Moon_WeaponJoint___StaticFields {
    };

    struct IEqualityComparer_1_Moon_WeaponJoint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_Moon_WeaponJoint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_Moon_WeaponJoint___VTable vtable;
    };

    struct WeaponJoint__Enum__Array__VTable {
    };

    struct WeaponJoint__Enum__Array__StaticFields {
    };

    struct WeaponJoint__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeaponJoint__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeaponJoint__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_WeaponJoint___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_WeaponJoint___StaticFields {
    };

    struct IEnumerator_1_Moon_WeaponJoint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_WeaponJoint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_WeaponJoint___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___VTable vtable;
    };

    struct ICollection_1_Moon_WeaponJoint___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Moon_WeaponJoint___StaticFields {
    };

    struct ICollection_1_Moon_WeaponJoint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Moon_WeaponJoint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Moon_WeaponJoint___VTable vtable;
    };

    struct KeyValuePair_2_Moon_WeaponJoint_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_Moon_WeaponJoint_System_String___StaticFields {
    };

    struct KeyValuePair_2_Moon_WeaponJoint_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_Moon_WeaponJoint_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_Moon_WeaponJoint_System_String___VTable vtable;
    };

    struct KeyValuePair_2_Moon_WeaponJoint_System_String___Array__VTable {
    };

    struct KeyValuePair_2_Moon_WeaponJoint_System_String___Array__StaticFields {
    };

    struct KeyValuePair_2_Moon_WeaponJoint_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_Moon_WeaponJoint_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_Moon_WeaponJoint_System_String___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_WeaponJoint_System_String___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_WeaponJoint_System_String___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_WeaponJoint_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_Moon_WeaponJoint_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_Moon_WeaponJoint_System_String___VTable vtable;
    };

    struct IEnumerable_1_Moon_WeaponJoint___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_WeaponJoint___StaticFields {
    };

    struct IEnumerable_1_Moon_WeaponJoint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_WeaponJoint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_WeaponJoint___VTable vtable;
    };

    struct Dictionary_2_Moon_WeaponJoint_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_Moon_WeaponJoint_System_String___StaticFields {
    };

    struct Dictionary_2_Moon_WeaponJoint_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_Moon_WeaponJoint_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_Moon_WeaponJoint_System_String___VTable vtable;
    };

    struct MeleeWeaponChainsword__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData GetComboMove;
        VirtualInvokeData get_ComboMoves;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData get_ProviderCooldown;
        VirtualInvokeData get_ProviderCooldownTimer;
        VirtualInvokeData set_ProviderCooldownTimer;
        VirtualInvokeData get_WeaponAnimator;
        VirtualInvokeData get_WeaponJoint;
        VirtualInvokeData SetAnimatorPosition;
        VirtualInvokeData GetAnimatorTransforms;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData SetAnimatorPosition_1;
        VirtualInvokeData GetAnimatorTransforms_1;
        VirtualInvokeData get_IsAutoEquippable;
        VirtualInvokeData get_IsAllowed;
        VirtualInvokeData get_IsAttackButtonUsed;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData GetComboMove_1;
        VirtualInvokeData Initialize;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData GetUsableMove;
        VirtualInvokeData OnEquip;
        VirtualInvokeData OnUnequip;
        VirtualInvokeData OnBeginCombo;
        VirtualInvokeData OnEndCombo;
        VirtualInvokeData CanDeactivateRoot;
        VirtualInvokeData Awake;
        VirtualInvokeData Update;
        VirtualInvokeData Deactivate;
        VirtualInvokeData ShowWeapon;
        VirtualInvokeData HideWeapon;
        VirtualInvokeData LateUpdate;
        VirtualInvokeData OnDamageResultReceived;
        VirtualInvokeData DebugWeapon;
        VirtualInvokeData get_TrackingExclusions_1;
    };

    struct MeleeWeaponChainsword__StaticFields {
    };

    struct MeleeWeaponChainsword__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeWeaponChainsword__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeWeaponChainsword__VTable vtable;
    };

    struct MeleeWeapon__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData GetComboMove;
        VirtualInvokeData get_ComboMoves;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData get_ProviderCooldown;
        VirtualInvokeData get_ProviderCooldownTimer;
        VirtualInvokeData set_ProviderCooldownTimer;
        VirtualInvokeData get_WeaponAnimator;
        VirtualInvokeData get_WeaponJoint;
        VirtualInvokeData SetAnimatorPosition;
        VirtualInvokeData GetAnimatorTransforms;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData SetAnimatorPosition_1;
        VirtualInvokeData GetAnimatorTransforms_1;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData GetComboMove_1;
        VirtualInvokeData Initialize;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData GetUsableMove;
        VirtualInvokeData OnEquip;
        VirtualInvokeData OnUnequip;
        VirtualInvokeData __unknown_6;
        VirtualInvokeData __unknown_7;
        VirtualInvokeData CanDeactivateRoot;
        VirtualInvokeData Awake;
        VirtualInvokeData Update;
        VirtualInvokeData Deactivate;
        VirtualInvokeData ShowWeapon;
        VirtualInvokeData HideWeapon;
        VirtualInvokeData LateUpdate;
        VirtualInvokeData OnDamageResultReceived;
        VirtualInvokeData DebugWeapon;
        VirtualInvokeData get_TrackingExclusions_1;
    };

    struct MeleeWeapon__StaticFields {
        struct Dictionary_2_Moon_WeaponJoint_System_String_* m_jointName;
    };

    struct MeleeWeapon__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeWeapon__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeWeapon__VTable vtable;
    };

    struct MeleeWeapon__Array__VTable {
    };

    struct MeleeWeapon__Array__StaticFields {
    };

    struct MeleeWeapon__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeleeWeapon__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeleeWeapon__Array__VTable vtable;
    };

    struct SeinMeleeAttack__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData SetReferenceToSein;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_IsBlindForest;
        VirtualInvokeData get_IsStatePerforming;
        VirtualInvokeData OnSetReferenceToSein;
        VirtualInvokeData get_IsAllowedNonZeroZPosition;
        VirtualInvokeData OnAwake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnEnable;
        VirtualInvokeData UpdateCharacterState;
        VirtualInvokeData OnMoveWindowOpen;
        VirtualInvokeData OnMoveWindowClosed;
        VirtualInvokeData CanBeInterruptedBy;
        VirtualInvokeData CanInputBeQueued;
    };

    struct SeinMeleeAttack__StaticFields {
        struct Collider__Array* s_colliderBuffer;
    };

    struct SeinMeleeAttack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinMeleeAttack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinMeleeAttack__VTable vtable;
    };

    struct CharacterStateWrapper_1_SeinMeleeAttack___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CharacterStateWrapper_1_SeinMeleeAttack___StaticFields {
    };

    struct CharacterStateWrapper_1_SeinMeleeAttack___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterStateWrapper_1_SeinMeleeAttack___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterStateWrapper_1_SeinMeleeAttack___VTable vtable;
    };

    struct AutoRotate__VTable {
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
        VirtualInvokeData Serialize;
        VirtualInvokeData GetManagedEarlyZDynamicGraphicTargets;
    };

} // namespace app
