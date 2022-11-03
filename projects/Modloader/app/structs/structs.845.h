namespace app {
    struct DebugMenuTogglerItem__StaticFields {
    };

    struct DebugMenuTogglerItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugMenuTogglerItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugMenuTogglerItem__VTable vtable;
    };

    enum class DebugPlayerTeleporter_LocomotionRequestMode__Enum : int32_t {
        Point = 0x00000000,
        Direction = 0x00000001,
    };

    struct DebugPlayerTeleporter_LocomotionRequestMode__Enum__Boxed {
        struct DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class* klass;
        MonitorData* monitor;
        DebugPlayerTeleporter_LocomotionRequestMode__Enum value;
    };

    enum class DebugPlayerTeleporter_DebugMarkerMode__Enum : int32_t {
        PlayerTeleport = 0x00000000,
        LocomotionRequest = 0x00000001,
    };

    struct DebugPlayerTeleporter_DebugMarkerMode__Enum__Boxed {
        struct DebugPlayerTeleporter_DebugMarkerMode__Enum__Class* klass;
        MonitorData* monitor;
        DebugPlayerTeleporter_DebugMarkerMode__Enum value;
    };

    struct DebugPlayerTeleporter__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* NoClipGhostPrefab;
        struct AnimationCurve* AxisToSpeedCurve;
        struct GameObject* m_noClipGhost;
        bool m_noClipParamsEnabled;
        struct GameObject* NoClipNavigationGhostPrefab;
        struct GameObject* NoClipNavigationSelectionPrefab;
        struct GameObject* m_noClipNavigationGhost;
        struct GameObject* m_noClipNavigationSelectionGhost;
        struct List_1_Moon_Entity_* m_entities;
        float doubleClickDelay;
        DebugPlayerTeleporter_LocomotionRequestMode__Enum m_locomotionRequestMode;

        DebugPlayerTeleporter_DebugMarkerMode__Enum m_mode;
    };

    struct DebugPlayerTeleporter {
        struct DebugPlayerTeleporter__Class* klass;
        MonitorData* monitor;
        struct DebugPlayerTeleporter__Fields fields;
    };

    struct DebugPlayerTeleporter_LocomotionRequestMode__Enum__VTable {
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

    struct DebugPlayerTeleporter_LocomotionRequestMode__Enum__StaticFields {
    };

    struct DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugPlayerTeleporter_LocomotionRequestMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugPlayerTeleporter_LocomotionRequestMode__Enum__VTable vtable;
    };

    struct DebugPlayerTeleporter_DebugMarkerMode__Enum__VTable {
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

    struct DebugPlayerTeleporter_DebugMarkerMode__Enum__StaticFields {
    };

    struct DebugPlayerTeleporter_DebugMarkerMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugPlayerTeleporter_DebugMarkerMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugPlayerTeleporter_DebugMarkerMode__Enum__VTable vtable;
    };

    struct DebugPlayerTeleporter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugPlayerTeleporter__StaticFields {
        struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
    };

    struct DebugPlayerTeleporter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugPlayerTeleporter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugPlayerTeleporter__VTable vtable;
    };

    struct DebugProjectileTester__Fields {
        struct MonoBehaviour__Fields _;
        struct PrefabSpawner* ProjectileSpawner;
        struct GameObject* ProjectilePrefab;
        float ProjectileSpeed;
        float ProjectileGravity;
        int32_t ProjectileDamage;
        float ProjectileArcHeight;
        float MinimumDistanceToArcProjectile;
        float ProjectileRangeWhenNoTarget;
        bool ShootBothAngles;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct DebugProjectileTester {
        struct DebugProjectileTester__Class* klass;
        MonitorData* monitor;
        struct DebugProjectileTester__Fields fields;
    };

    struct DebugProjectileTester__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct DebugProjectileTester__StaticFields {
    };

    struct DebugProjectileTester__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugProjectileTester__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugProjectileTester__VTable vtable;
    };

    struct HierarchyDebugMenu_GameObjectItem_c {
        struct HierarchyDebugMenu_GameObjectItem_c__Class* klass;
        MonitorData* monitor;
    };

    struct Comparison_1_UnityEngine_Component___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Comparison_1_UnityEngine_Component_ {
        struct Comparison_1_UnityEngine_Component___Class* klass;
        MonitorData* monitor;
        struct Comparison_1_UnityEngine_Component___Fields fields;
    };

    struct Comparison_1_UnityEngine_Component___VTable {
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

    struct Comparison_1_UnityEngine_Component___StaticFields {
    };

    struct Comparison_1_UnityEngine_Component___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Comparison_1_UnityEngine_Component___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Comparison_1_UnityEngine_Component___VTable vtable;
    };

    struct HierarchyDebugMenu_GameObjectItem_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyDebugMenu_GameObjectItem_c__StaticFields {
        struct HierarchyDebugMenu_GameObjectItem_c* __9;
        struct Func_2_UnityEngine_Component_Boolean_* __9__0_0;
        struct Comparison_1_UnityEngine_Component_* __9__0_1;
    };

    struct HierarchyDebugMenu_GameObjectItem_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyDebugMenu_GameObjectItem_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyDebugMenu_GameObjectItem_c__VTable vtable;
    };

    struct HierarchyDebugMenu_c {
        struct HierarchyDebugMenu_c__Class* klass;
        MonitorData* monitor;
    };

    struct Comparison_1_HierarchyDebugMenu_GameObjectItem___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Comparison_1_HierarchyDebugMenu_GameObjectItem_ {
        struct Comparison_1_HierarchyDebugMenu_GameObjectItem___Class* klass;
        MonitorData* monitor;
        struct Comparison_1_HierarchyDebugMenu_GameObjectItem___Fields fields;
    };

    struct Comparison_1_HierarchyDebugMenu_GameObjectItem___VTable {
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

    struct Comparison_1_HierarchyDebugMenu_GameObjectItem___StaticFields {
    };

    struct Comparison_1_HierarchyDebugMenu_GameObjectItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Comparison_1_HierarchyDebugMenu_GameObjectItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Comparison_1_HierarchyDebugMenu_GameObjectItem___VTable vtable;
    };

    struct HierarchyDebugMenu_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyDebugMenu_c__StaticFields {
        struct HierarchyDebugMenu_c* __9;
        struct Comparison_1_HierarchyDebugMenu_GameObjectItem_* __9__46_0;
    };

    struct HierarchyDebugMenu_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyDebugMenu_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyDebugMenu_c__VTable vtable;
    };

    struct __declspec(align(8)) HierarchyDebugMenu_WaitForStepEnd_d_64__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct HierarchyDebugMenu* __4__this;
    };

    struct HierarchyDebugMenu_WaitForStepEnd_d_64 {
        struct HierarchyDebugMenu_WaitForStepEnd_d_64__Class* klass;
        MonitorData* monitor;
        struct HierarchyDebugMenu_WaitForStepEnd_d_64__Fields fields;
    };

    struct HierarchyDebugMenu_WaitForStepEnd_d_64__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct HierarchyDebugMenu_WaitForStepEnd_d_64__StaticFields {
    };

    struct HierarchyDebugMenu_WaitForStepEnd_d_64__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyDebugMenu_WaitForStepEnd_d_64__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyDebugMenu_WaitForStepEnd_d_64__VTable vtable;
    };

    struct __declspec(align(8)) NumericDebugMenuItem_1_System_Int32___Fields {
        struct String* _Path_k__BackingField;
        struct String* _Text_k__BackingField;
        struct String* _HelpText_k__BackingField;
        int32_t _Value_k__BackingField;
        float m_holdRemainingTime;
        bool m_held;
        bool m_shouldShowOnlySelected;
        struct Func_1_String_* _DynamicText_k__BackingField;
        struct Func_1_Int32_* m_getter;
        struct Action_1_Int32_* m_setter;
        struct Func_1_String_* m_textGetter;
        int32_t m_min;
        int32_t m_max;
        int32_t m_speed;
        int32_t m_storedValue;
    };

    struct NumericDebugMenuItem_1_System_Int32_ {
        struct NumericDebugMenuItem_1_System_Int32___Class* klass;
        MonitorData* monitor;
        struct NumericDebugMenuItem_1_System_Int32___Fields fields;
    };

    struct IntDebugMenuItem__Fields {
        struct NumericDebugMenuItem_1_System_Int32___Fields _;
        bool m_singleIncrement;
    };

    struct IntDebugMenuItem {
        struct IntDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct IntDebugMenuItem__Fields fields;
    };

    struct NumericDebugMenuItem_1_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData __unknown;
    };

    struct NumericDebugMenuItem_1_System_Int32___StaticFields {
    };

    struct NumericDebugMenuItem_1_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NumericDebugMenuItem_1_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NumericDebugMenuItem_1_System_Int32___VTable vtable;
    };

    struct IntDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData IncrementValue;
    };

    struct IntDebugMenuItem__StaticFields {
    };

    struct IntDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IntDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IntDebugMenuItem__VTable vtable;
    };

    struct __declspec(align(8)) NumericDebugMenuItem_1_System_Single___Fields {
        struct String* _Path_k__BackingField;
        struct String* _Text_k__BackingField;
        struct String* _HelpText_k__BackingField;
        float _Value_k__BackingField;
        float m_holdRemainingTime;
        bool m_held;
        bool m_shouldShowOnlySelected;
        struct Func_1_String_* _DynamicText_k__BackingField;
        struct Func_1_Single_* m_getter;
        struct Action_1_Single_* m_setter;
        struct Func_1_String_* m_textGetter;
        float m_min;
        float m_max;
        float m_speed;
        float m_storedValue;
    };

    struct NumericDebugMenuItem_1_System_Single_ {
        struct NumericDebugMenuItem_1_System_Single___Class* klass;
        MonitorData* monitor;
        struct NumericDebugMenuItem_1_System_Single___Fields fields;
    };

    struct FloatDebugMenuItem__Fields {
        struct NumericDebugMenuItem_1_System_Single___Fields _;
    };

    struct FloatDebugMenuItem {
        struct FloatDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct FloatDebugMenuItem__Fields fields;
    };

    struct NumericDebugMenuItem_1_System_Single___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData __unknown;
    };

    struct NumericDebugMenuItem_1_System_Single___StaticFields {
    };

    struct NumericDebugMenuItem_1_System_Single___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NumericDebugMenuItem_1_System_Single___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NumericDebugMenuItem_1_System_Single___VTable vtable;
    };

    struct FloatDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData IncrementValue;
    };

    struct FloatDebugMenuItem__StaticFields {
    };

    struct FloatDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FloatDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FloatDebugMenuItem__VTable vtable;
    };

    struct __declspec(align(8)) NumericDebugMenuItem_1_System_Double___Fields {
        struct String* _Path_k__BackingField;
        struct String* _Text_k__BackingField;
        struct String* _HelpText_k__BackingField;
        double _Value_k__BackingField;
        float m_holdRemainingTime;
        bool m_held;
        bool m_shouldShowOnlySelected;
        struct Func_1_String_* _DynamicText_k__BackingField;
        struct Func_1_Double_* m_getter;
        struct Action_1_Double_* m_setter;
        struct Func_1_String_* m_textGetter;
        double m_min;
        double m_max;
        double m_speed;
        double m_storedValue;
    };

    struct NumericDebugMenuItem_1_System_Double_ {
        struct NumericDebugMenuItem_1_System_Double___Class* klass;
        MonitorData* monitor;
        struct NumericDebugMenuItem_1_System_Double___Fields fields;
    };

    struct DoubleDebugMenuItem__Fields {
        struct NumericDebugMenuItem_1_System_Double___Fields _;
    };

    struct DoubleDebugMenuItem {
        struct DoubleDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct DoubleDebugMenuItem__Fields fields;
    };

    struct Func_1_Double___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_1_Double_ {
        struct Func_1_Double___Class* klass;
        MonitorData* monitor;
        struct Func_1_Double___Fields fields;
    };

    struct Action_1_Double___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Double_ {
        struct Action_1_Double___Class* klass;
        MonitorData* monitor;
        struct Action_1_Double___Fields fields;
    };

    struct Func_1_Double___VTable {
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

    struct Func_1_Double___StaticFields {
    };

    struct Func_1_Double___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_1_Double___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_1_Double___VTable vtable;
    };

    struct Action_1_Double___VTable {
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

    struct Action_1_Double___StaticFields {
    };

    struct Action_1_Double___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_Double___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_Double___VTable vtable;
    };

    struct NumericDebugMenuItem_1_System_Double___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData __unknown;
    };

    struct NumericDebugMenuItem_1_System_Double___StaticFields {
    };

    struct NumericDebugMenuItem_1_System_Double___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NumericDebugMenuItem_1_System_Double___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NumericDebugMenuItem_1_System_Double___VTable vtable;
    };

    struct DoubleDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData IncrementValue;
    };

    struct DoubleDebugMenuItem__StaticFields {
    };

    struct DoubleDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DoubleDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DoubleDebugMenuItem__VTable vtable;
    };

    struct PostProcessingDebugFloatDebugMenuItem__Fields {
        struct FloatDebugMenuItem__Fields _;
    };

    struct PostProcessingDebugFloatDebugMenuItem {
        struct PostProcessingDebugFloatDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct PostProcessingDebugFloatDebugMenuItem__Fields fields;
    };

    struct PostProcessingDebugFloatDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData IncrementValue;
    };

    struct PostProcessingDebugFloatDebugMenuItem__StaticFields {
    };

    struct PostProcessingDebugFloatDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PostProcessingDebugFloatDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PostProcessingDebugFloatDebugMenuItem__VTable vtable;
    };

    struct __declspec(align(8)) PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Fields {
        struct Action_1_Single_* setter;
    };

    struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0 {
        struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class* klass;
        MonitorData* monitor;
        struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Fields fields;
    };

    struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__StaticFields {
    };

    struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__VTable vtable;
    };

    struct SceneTeleportDebugMenuItem__Fields {
        struct ActionDebugMenuItem__Fields _;
        struct Func_1_Boolean_* FuncAlt;
    };

    struct SceneTeleportDebugMenuItem {
        struct SceneTeleportDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct SceneTeleportDebugMenuItem__Fields fields;
    };

    struct SceneTeleportDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
    };

    struct SceneTeleportDebugMenuItem__StaticFields {
    };

    struct SceneTeleportDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneTeleportDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneTeleportDebugMenuItem__VTable vtable;
    };

    struct StartRaceDebugMenuItem__Fields {
        struct IntDebugMenuItem__Fields _;
        struct String* m_name;
        float m_holdTimer;
        struct RuntimeSceneMetaData* m_raceSceneMetaData;
    };

    struct StartRaceDebugMenuItem {
        struct StartRaceDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct StartRaceDebugMenuItem__Fields fields;
    };

    struct StartRaceDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData IncrementValue;
    };

    struct StartRaceDebugMenuItem__StaticFields {
    };

    struct StartRaceDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StartRaceDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StartRaceDebugMenuItem__VTable vtable;
    };

    struct __declspec(align(8)) TextDebugMenuItem__Fields {
        struct String* _Path_k__BackingField;
        struct String* m_text;
        struct Func_1_String_* m_textGetter;
        struct String* m_help;
        struct Func_1_String_* m_helpGetter;
        struct Func_1_String_* _DynamicText_k__BackingField;
    };

    struct TextDebugMenuItem {
        struct TextDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct TextDebugMenuItem__Fields fields;
    };

    struct TextDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
    };

    struct TextDebugMenuItem__StaticFields {
    };

    struct TextDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextDebugMenuItem__VTable vtable;
    };

    struct __declspec(align(8)) Vector2DebugMenuItem__Fields {
        struct String* m_text;
        struct Vector2 m_value;
        struct Func_1_String_* _DynamicText_k__BackingField;
        struct String* m_helpText;
        struct String* _Path_k__BackingField;
    };

    struct Vector2DebugMenuItem {
        struct Vector2DebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct Vector2DebugMenuItem__Fields fields;
    };

    struct Vector2DebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
    };

    struct Vector2DebugMenuItem__StaticFields {
    };

    struct Vector2DebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Vector2DebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Vector2DebugMenuItem__VTable vtable;
    };

} // namespace app
