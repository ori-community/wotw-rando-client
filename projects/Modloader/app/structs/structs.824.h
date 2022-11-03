namespace app {
    struct __declspec(align(8)) List_1_CameraOffsetZone___Fields {
        struct CameraOffsetZone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CameraOffsetZone_ {
        struct List_1_CameraOffsetZone___Class* klass;
        MonitorData* monitor;
        struct List_1_CameraOffsetZone___Fields fields;
    };

    struct CameraOffsetZone__Array {
        struct CameraOffsetZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CameraOffsetZone* vector[32];
    };

    struct IEnumerator_1_CameraOffsetZone_ {
        struct IEnumerator_1_CameraOffsetZone___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) AllContainer_1_CameraOffsetController_OffsetLayer___Fields {
        struct List_1_CameraOffsetController_OffsetLayer_* m_objects;
    };

    struct AllContainer_1_CameraOffsetController_OffsetLayer_ {
        struct AllContainer_1_CameraOffsetController_OffsetLayer___Class* klass;
        MonitorData* monitor;
        struct AllContainer_1_CameraOffsetController_OffsetLayer___Fields fields;
    };

    struct __declspec(align(8)) List_1_CameraOffsetController_OffsetLayer___Fields {
        struct CameraOffsetController_OffsetLayer__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CameraOffsetController_OffsetLayer_ {
        struct List_1_CameraOffsetController_OffsetLayer___Class* klass;
        MonitorData* monitor;
        struct List_1_CameraOffsetController_OffsetLayer___Fields fields;
    };

    struct CameraOffsetController_OffsetLayer__Array {
        struct CameraOffsetController_OffsetLayer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CameraOffsetController_OffsetLayer* vector[32];
    };

    struct IEnumerator_1_CameraOffsetController_OffsetLayer_ {
        struct IEnumerator_1_CameraOffsetController_OffsetLayer___Class* klass;
        MonitorData* monitor;
    };

    struct CameraChaseTarget__Fields {
        struct MonoBehaviour__Fields _;
        struct CameraChaseTargetSpeedRatioController* m_speedRatioController;
        struct Vector2 CameraSpeedMultiplier;
        float TotalSpeedMultiplier;
        struct Vector3 m_lastTargetPosition;
        int32_t _IgnoreSmoothingForAFrame_k__BackingField;
        bool SilkySmooth;
        bool m_isSmoothing;
        float DistanceRequiredForSmoothing;
        float SmoothingDuration;
        float ZoomOffset;
        struct AnimationCurve* SmoothingAccelerationCurveOverTime;
        float m_currentSmoothingTime;
        struct Vector3 m_cameraLastPosition;
        struct Vector3 m_cameraSpeed;
        bool FollowTargetX;
        bool FollowTargetY;
        bool FollowTargetZ;
        float SpeedRatio;
        struct Transform* Target;
        struct Transform* m_transform;
        struct Rigidbody* m_rigidbody;
    };

    struct CameraChaseTarget {
        struct CameraChaseTarget__Class* klass;
        MonitorData* monitor;
        struct CameraChaseTarget__Fields fields;
    };

    struct CameraChaseTargetSpeedRatioController__Fields {
        struct Suspendable__Fields _;
        struct CameraChaseTarget* CameraChaseTarget;
        float m_originalSpeedRatio;
        float AdditionalSpeed;
        float MinSpeed;
        float MaxSpeed;
        float ForcedAdditionalSpeedRatio;
        struct Vector2 ZoomRange;
        struct Vector2 SpeedRangeForZoom;
        struct Vector2 CloseZoomAdditionalSpeed;
        bool DoDot;
        float m_zoomSpeed;
        float ZoomSpeedLerp;
        bool _IsSuspended_k__BackingField;
    };

    struct CameraChaseTargetSpeedRatioController {
        struct CameraChaseTargetSpeedRatioController__Class* klass;
        MonitorData* monitor;
        struct CameraChaseTargetSpeedRatioController__Fields fields;
    };

    struct CameraScrollLockConstraint__Fields {
        struct MonoBehaviour__Fields _;
        struct AnimationCurve* ScrollLockSmooth;
        float SmoothDistance;
    };

    struct CameraScrollLockConstraint {
        struct CameraScrollLockConstraint__Class* klass;
        MonitorData* monitor;
        struct CameraScrollLockConstraint__Fields fields;
    };

    struct Ray__Array {
        struct Ray__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Ray vector[32];
    };

    struct DynamicCameraTargetting__Fields {
        struct MonoBehaviour__Fields _;
        struct CameraTargetsProvider* TargetsProvider;
        struct Transform* CameraTargetTransform;
        struct Vector2 ZoomRange;
        float ExtraMinZoom;
        float ExtraMaxZoom;
        struct Vector2 VerticalPaddings;
        struct Vector2 HorizontalPaddings;
        float ActivationLerpTime;
        float CameraTargetLerpSpeed;
        float ZoomLerpTimeDec;
        bool UseSwitchZoomLerpTime;
        float SwitchZoomLerpTimeDec;
        float ZoomLerpTimeInc;
        float BlendTime;
        bool EnableDebugDraw;
        bool RespectOffsetZones;
        bool KeepOriOnScreen;
        struct EntitySettings* Entity;
        struct InterestSettings* NPC;
        struct AbilityBasedSetting* HookPlant;
        struct AbilityBasedSetting* BashLantern;
        struct InterestSettings* Pickups;
        bool UseFieldOfView;
        float FOVIncreaseAdjustmentTime;
        float FOVDecreaseAdjustmentTime;
        float MaxFOVOffset;
        float MaxFOVTargetZ;
        float IncreaseTimeGate;
        float DecreaseTimeGate;
        float BrightnessDecreaseAdjustmentTime;
        float BrightnessIncreaseAdjustmentTime;
        bool DoBrightnessAdditive;
        bool DoBrightnessMultiplicative;
        float BrightnessAdditive;
        float BrightnessMultiplicative;
        bool DoExtraBrightnessForEnemies;
        float ExtraBrightnessPerEnemy;
        float MaxBrightnessForEnemies;
        bool m_isSuspended;
        bool m_isActive;
        float m_weight;
        float m_extraDarkness;
        float m_fovIncreaseTimer;
        float m_fovDecreaseTimer;
        struct CameraOffsetController_OffsetLayer* m_offsetLayer;
        struct CameraTarget_TargetLayer* m_targetLayer;
        struct BlendFloat* m_targetWeight;
        float m_currentZoomVelocity;
        bool _Bypass_k__BackingField;
        bool _OnlyUseDynamicWithEnemies_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        float m_fovWeight;
        float m_brightnessWeight;
        float _FOVMultiplier_k__BackingField;
        struct Vector3 m_charMovement;
        struct List_1_UnityEngine_Rect_* m_tempRectList;
        struct List_1_UnityEngine_Rect_* m_rects;
        float m_fovSpeed;
        float m_brightnessSpeed;
    };

    struct DynamicCameraTargetting {
        struct DynamicCameraTargetting__Class* klass;
        MonitorData* monitor;
        struct DynamicCameraTargetting__Fields fields;
    };

    struct __declspec(align(8)) InterestSettings__Fields {
        struct Vector2 InfluenceDistance;
        struct Vector2 Padding;
    };

    struct InterestSettings {
        struct InterestSettings__Class* klass;
        MonitorData* monitor;
        struct InterestSettings__Fields fields;
    };

    struct EntitySettings__Fields {
        struct InterestSettings__Fields _;
        struct Vector2 NonAggroInfluenceDistance;
        float NonAggroWeight;
        float TimeBeforeNonAggro;
    };

    struct EntitySettings {
        struct EntitySettings__Class* klass;
        MonitorData* monitor;
        struct EntitySettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_IDebugMenuItem___Fields {
        struct IDebugMenuItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IDebugMenuItem_ {
        struct List_1_IDebugMenuItem___Class* klass;
        MonitorData* monitor;
        struct List_1_IDebugMenuItem___Fields fields;
    };

    struct IDebugMenuItem {
        struct IDebugMenuItem__Class* klass;
        MonitorData* monitor;
    };

    struct IDebugMenuItem__Array {
        struct IDebugMenuItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IDebugMenuItem* vector[32];
    };

    struct IEnumerator_1_IDebugMenuItem_ {
        struct IEnumerator_1_IDebugMenuItem___Class* klass;
        MonitorData* monitor;
    };

    struct AbilityBasedSetting__Fields {
        struct InterestSettings__Fields _;
        float NoAbilityWeightFactor;
    };

    struct AbilityBasedSetting {
        struct AbilityBasedSetting__Class* klass;
        MonitorData* monitor;
        struct AbilityBasedSetting__Fields fields;
    };

    enum class GlobalBrightnessController_BrigthnessContributionOrder__Enum : int32_t {
        DynamicCameraTargetting = 0x00000000,
        DynamicBrightnessSource = 0x0000000a,
        BrightnessZoneModifier = 0x0000000f,
        GlobalBrightnessAnimator = 0x00000014,
    };

    struct GlobalBrightnessController_BrigthnessContributionOrder__Enum__Boxed {
        struct GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class* klass;
        MonitorData* monitor;
        GlobalBrightnessController_BrigthnessContributionOrder__Enum value;
    };

    struct CameraStraightLineMotion__Fields {
        struct MonoBehaviour__Fields _;
        struct Action* OnMotionFinishedEvent;
        struct Transform* m_transform;
        struct Rigidbody* m_rigidbody;
        struct Vector3 m_startPosition;
        struct Vector3 m_endPosition;
        float m_time;
        float m_duration;
        struct AnimationCurve* SmoothingCurve;
    };

    struct CameraStraightLineMotion {
        struct CameraStraightLineMotion__Class* klass;
        MonitorData* monitor;
        struct CameraStraightLineMotion__Fields fields;
    };

    struct __declspec(align(8)) CameraGoThroughScrollLocks__Fields {
        struct GameplayCamera* m_cameraController;
        bool CanPassScrollocks;
        bool m_isFading;
        struct CameraScrollLock* m_lastPassedScrollLock;
        struct Transform* m_currentCharacter;
        bool m_suspendedForScrollLock;
        bool m_waitForScrollLock;
        struct HashSet_1_Moon_ISuspendable_* m_currentCharacterSuspendables;
        struct HashSet_1_UnityEngine_Object_* DisablePassThroughRequests;
    };

    struct CameraGoThroughScrollLocks {
        struct CameraGoThroughScrollLocks__Class* klass;
        MonitorData* monitor;
        struct CameraGoThroughScrollLocks__Fields fields;
    };

    enum class CameraScrollLock_ScrollLockMode__Enum : int32_t {
        BothSides = 0x00000000,
        LeftOrBottom = 0x00000001,
        RightOrTop = 0x00000002,
    };

    struct CameraScrollLock_ScrollLockMode__Enum__Boxed {
        struct CameraScrollLock_ScrollLockMode__Enum__Class* klass;
        MonitorData* monitor;
        CameraScrollLock_ScrollLockMode__Enum value;
    };

    enum class CameraScrollLock_Type__Enum : int32_t {
        Horizontal = 0x00000000,
        Vertical = 0x00000001,
    };

    struct CameraScrollLock_Type__Enum__Boxed {
        struct CameraScrollLock_Type__Enum__Class* klass;
        MonitorData* monitor;
        CameraScrollLock_Type__Enum value;
    };

    struct CameraScrollLock__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Fader;
        bool UseFader;
        struct AnimationCurve* ScrollLockSmooth;
        bool UseScrollLockSmooth;
        bool ShouldCreateCheckpoint;
        struct Vector3 _ScrollCenter_k__BackingField;
        struct Vector3 _HalfScrollSize_k__BackingField;
        float WideScreenAdjustment;
        bool Dynamic;
        CameraScrollLock_ScrollLockMode__Enum LockMode;

        struct Rect m_boundingRect;
        bool m_boundingRectCalculated;
        CameraScrollLock_Type__Enum m_scrollType;
    };

    struct CameraScrollLock {
        struct CameraScrollLock__Class* klass;
        MonitorData* monitor;
        struct CameraScrollLock__Fields fields;
    };

    struct IPostProcessInfluencer__VTable {
        VirtualInvokeData get_Settings;
        VirtualInvokeData get_Weight;
        VirtualInvokeData get_PostInfluenceApplyOrder;
        VirtualInvokeData get_SettingsAssetForDebug;
    };

    struct IPostProcessInfluencer__StaticFields {
    };

    struct IPostProcessInfluencer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPostProcessInfluencer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPostProcessInfluencer__VTable vtable;
    };

    struct IPostProcessInfluencer__Array__VTable {
    };

    struct IPostProcessInfluencer__Array__StaticFields {
    };

    struct IPostProcessInfluencer__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPostProcessInfluencer__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPostProcessInfluencer__Array__VTable vtable;
    };

    struct IEnumerator_1_IPostProcessInfluencer___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_IPostProcessInfluencer___StaticFields {
    };

    struct IEnumerator_1_IPostProcessInfluencer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_IPostProcessInfluencer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_IPostProcessInfluencer___VTable vtable;
    };

    struct List_1_IPostProcessInfluencer___VTable {
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

    struct List_1_IPostProcessInfluencer___StaticFields {
        struct IPostProcessInfluencer__Array* _emptyArray;
    };

    struct List_1_IPostProcessInfluencer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_IPostProcessInfluencer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_IPostProcessInfluencer___VTable vtable;
    };

    struct FaderBrightnessContrastSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FaderBrightnessContrastSettings__StaticFields {
    };

    struct FaderBrightnessContrastSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FaderBrightnessContrastSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FaderBrightnessContrastSettings__VTable vtable;
    };

    struct UberPostProcess__Array__VTable {
    };

    struct UberPostProcess__Array__StaticFields {
    };

    struct UberPostProcess__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberPostProcess__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberPostProcess__Array__VTable vtable;
    };

    struct IEnumerator_1_UberPostProcess___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UberPostProcess___StaticFields {
    };

    struct IEnumerator_1_UberPostProcess___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UberPostProcess___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UberPostProcess___VTable vtable;
    };

    struct List_1_UberPostProcess___VTable {
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

    struct List_1_UberPostProcess___StaticFields {
        struct UberPostProcess__Array* _emptyArray;
    };

    struct List_1_UberPostProcess___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UberPostProcess___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UberPostProcess___VTable vtable;
    };

    struct MeshFilter__Array__VTable {
    };

    struct MeshFilter__Array__StaticFields {
    };

    struct MeshFilter__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeshFilter__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeshFilter__Array__VTable vtable;
    };

    struct IEnumerator_1_UnityEngine_MeshFilter___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UnityEngine_MeshFilter___StaticFields {
    };

    struct IEnumerator_1_UnityEngine_MeshFilter___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UnityEngine_MeshFilter___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UnityEngine_MeshFilter___VTable vtable;
    };

    struct List_1_UnityEngine_MeshFilter___VTable {
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

    struct List_1_UnityEngine_MeshFilter___StaticFields {
        struct MeshFilter__Array* _emptyArray;
    };

    struct List_1_UnityEngine_MeshFilter___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UnityEngine_MeshFilter___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UnityEngine_MeshFilter___VTable vtable;
    };

    struct UberPostProcess__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IRenderPostprocessor_get_enabled;
        VirtualInvokeData IRenderPostprocessor_OnRenderImage;
    };

    struct UberPostProcess__StaticFields {
        bool _DebugOverrideEnabled_k__BackingField;
        bool _DebugOverrideInitialValuesSet_k__BackingField;
        struct List_1_UberPostProcess_* s_subCams;
        struct UberPostProcess* s_instance;
    };

    struct UberPostProcess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberPostProcess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberPostProcess__VTable vtable;
    };

    struct CameraAdditiveSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraAdditiveSettings__StaticFields {
    };

    struct CameraAdditiveSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraAdditiveSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraAdditiveSettings__VTable vtable;
    };

    struct SceneDefaultSettingsHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneDefaultSettingsHelper__StaticFields {
    };

    struct SceneDefaultSettingsHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneDefaultSettingsHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneDefaultSettingsHelper__VTable vtable;
    };

    struct CameraPostProcessing__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraPostProcessing__StaticFields {
        struct List_1_IPostProcessInfluencer_* s_influencers;
    };

    struct CameraPostProcessing__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraPostProcessing__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraPostProcessing__VTable vtable;
    };

    struct FloatProviderZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FloatProviderZone__StaticFields {
    };

    struct FloatProviderZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FloatProviderZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FloatProviderZone__VTable vtable;
    };

    struct FloatProviderZone__Array__VTable {
    };

    struct FloatProviderZone__Array__StaticFields {
    };

    struct FloatProviderZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FloatProviderZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FloatProviderZone__Array__VTable vtable;
    };

    struct GameplayToCinematicEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
    };

    struct GameplayToCinematicEntity__StaticFields {
    };

    struct GameplayToCinematicEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplayToCinematicEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplayToCinematicEntity__VTable vtable;
    };

    struct CameraPuppetController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraPuppetController__StaticFields {
        float _DebugOverrideFOV_k__BackingField;
    };

    struct CameraPuppetController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraPuppetController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraPuppetController__VTable vtable;
    };

    struct CameraShakeLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct CameraShakeLogic__StaticFields {
        float GlobalShakeMultiplier;
        float NintendoSwitchDockedShakeMultiplier;
    };

    struct CameraShakeLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraShakeLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraShakeLogic__VTable vtable;
    };

    struct Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4___VTable {
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

    struct Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4___StaticFields {
    };

    struct Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4___VTable vtable;
    };

    struct CameraController_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraController_1__StaticFields {
    };

    struct CameraController_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraController_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraController_1__VTable vtable;
    };

    struct CameraTarget_TargetLayer__Array__VTable {
    };

    struct CameraTarget_TargetLayer__Array__StaticFields {
    };

    struct CameraTarget_TargetLayer__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraTarget_TargetLayer__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraTarget_TargetLayer__Array__VTable vtable;
    };

    struct IEnumerator_1_CameraTarget_TargetLayer___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CameraTarget_TargetLayer___StaticFields {
    };

    struct IEnumerator_1_CameraTarget_TargetLayer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CameraTarget_TargetLayer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CameraTarget_TargetLayer___VTable vtable;
    };

    struct List_1_CameraTarget_TargetLayer___VTable {
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

    struct List_1_CameraTarget_TargetLayer___StaticFields {
        struct CameraTarget_TargetLayer__Array* _emptyArray;
    };

    struct List_1_CameraTarget_TargetLayer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CameraTarget_TargetLayer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CameraTarget_TargetLayer___VTable vtable;
    };

} // namespace app
