namespace app {
    struct __declspec(align(8)) ReadOnlyCollection_1_Achievement___Fields {
        struct IList_1_Achievement_* list;
        struct Object* _syncRoot;
    };

    struct ReadOnlyCollection_1_Achievement_ {
        struct ReadOnlyCollection_1_Achievement___Class* klass;
        MonitorData* monitor;
        struct ReadOnlyCollection_1_Achievement___Fields fields;
    };

    struct IList_1_Achievement_ {
        struct IList_1_Achievement___Class* klass;
        MonitorData* monitor;
    };

    enum class Achievement__Enum : int32_t {
        UNKNOWN_ACHIEVEMENT = -1,
        FoundOri = 0x00000004,
        MapReader = 0x00000005,
        LeverOperator = 0x00000006,
        DoorsAreOpening = 0x00000007,
        SpentFirstSkillPoint = 0x00000008,
        LevelUp = 0x00000009,
    };

    struct Achievement__Enum__Boxed {
        struct Achievement__Enum__Class* klass;
        MonitorData* monitor;
        Achievement__Enum value;
    };

    struct Achievement__Enum__Array {
        struct Achievement__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        Achievement__Enum vector[32];
    };

    struct IEnumerator_1_Achievement_ {
        struct IEnumerator_1_Achievement___Class* klass;
        MonitorData* monitor;
    };

    struct IList_1_Achievement___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_Achievement___StaticFields {
    };

    struct IList_1_Achievement___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_Achievement___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_Achievement___VTable vtable;
    };

    struct Achievement__Enum__VTable {
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

    struct Achievement__Enum__StaticFields {
    };

    struct Achievement__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Achievement__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Achievement__Enum__VTable vtable;
    };

    struct Achievement__Enum__Array__VTable {
    };

    struct Achievement__Enum__Array__StaticFields {
    };

    struct Achievement__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Achievement__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Achievement__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_Achievement___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Achievement___StaticFields {
    };

    struct IEnumerator_1_Achievement___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Achievement___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Achievement___VTable vtable;
    };

    struct ReadOnlyCollection_1_Achievement___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
        VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData System_Collections_Generic_IList_T__Insert;
        VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData System_Collections_IList_Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Count_2;
    };

    struct ReadOnlyCollection_1_Achievement___StaticFields {
    };

    struct ReadOnlyCollection_1_Achievement___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadOnlyCollection_1_Achievement___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadOnlyCollection_1_Achievement___VTable vtable;
    };

    struct __declspec(align(8)) ReadOnlyCollection_1_Challenge___Fields {
        struct IList_1_Challenge_* list;
        struct Object* _syncRoot;
    };

    struct ReadOnlyCollection_1_Challenge_ {
        struct ReadOnlyCollection_1_Challenge___Class* klass;
        MonitorData* monitor;
        struct ReadOnlyCollection_1_Challenge___Fields fields;
    };

    struct IList_1_Challenge_ {
        struct IList_1_Challenge___Class* klass;
        MonitorData* monitor;
    };

    struct Challenge__Array {
        struct Challenge__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Challenge* vector[32];
    };

    struct IEnumerator_1_Challenge_ {
        struct IEnumerator_1_Challenge___Class* klass;
        MonitorData* monitor;
    };

    struct IList_1_Challenge___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_Challenge___StaticFields {
    };

    struct IList_1_Challenge___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_Challenge___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_Challenge___VTable vtable;
    };

    struct Challenge__Array__VTable {
    };

    struct Challenge__Array__StaticFields {
    };

    struct Challenge__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Challenge__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Challenge__Array__VTable vtable;
    };

    struct IEnumerator_1_Challenge___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Challenge___StaticFields {
    };

    struct IEnumerator_1_Challenge___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Challenge___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Challenge___VTable vtable;
    };

    struct ReadOnlyCollection_1_Challenge___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
        VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData System_Collections_Generic_IList_T__Insert;
        VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData System_Collections_IList_Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Count_2;
    };

    struct ReadOnlyCollection_1_Challenge___StaticFields {
    };

    struct ReadOnlyCollection_1_Challenge___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadOnlyCollection_1_Challenge___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadOnlyCollection_1_Challenge___VTable vtable;
    };

    struct AchievementsController__Fields {
        struct MonoBehaviour__Fields _;
        struct AchievementsTestMessageProvider* AchievementGainedTestMessageProvider;
    };

    struct AchievementsController {
        struct AchievementsController__Class* klass;
        MonitorData* monitor;
        struct AchievementsController__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_AchievementToDisplay___Fields {
        struct AchievementToDisplay__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_AchievementToDisplay_ {
        struct Queue_1_AchievementToDisplay___Class* klass;
        MonitorData* monitor;
        struct Queue_1_AchievementToDisplay___Fields fields;
    };

    struct AchievementToDisplay__Array {
        struct AchievementToDisplay__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AchievementToDisplay vector[32];
    };

    struct IEnumerator_1_AchievementToDisplay_ {
        struct IEnumerator_1_AchievementToDisplay___Class* klass;
        MonitorData* monitor;
    };

    struct AchievementToDisplay__Array__VTable {
    };

    struct AchievementToDisplay__Array__StaticFields {
    };

    struct AchievementToDisplay__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementToDisplay__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementToDisplay__Array__VTable vtable;
    };

    struct IEnumerator_1_AchievementToDisplay___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AchievementToDisplay___StaticFields {
    };

    struct IEnumerator_1_AchievementToDisplay___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AchievementToDisplay___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AchievementToDisplay___VTable vtable;
    };

    struct Queue_1_AchievementToDisplay___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_1;
    };

    struct Queue_1_AchievementToDisplay___StaticFields {
    };

    struct Queue_1_AchievementToDisplay___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_AchievementToDisplay___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_AchievementToDisplay___VTable vtable;
    };

    struct AchievementsController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsController__StaticFields {
        bool DebugAchievements;
        float m_showTimer;
        float m_actualMessageTimer;
        struct Queue_1_AchievementToDisplay_* m_achievementQueue;
    };

    struct AchievementsController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsController__VTable vtable;
    };

    struct __declspec(align(8)) AchievementsController_c_DisplayClass19_0__Fields {
        struct AchievementAsset* achievement;
    };

    struct AchievementsController_c_DisplayClass19_0 {
        struct AchievementsController_c_DisplayClass19_0__Class* klass;
        MonitorData* monitor;
        struct AchievementsController_c_DisplayClass19_0__Fields fields;
    };

    struct AchievementsController_c_DisplayClass19_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsController_c_DisplayClass19_0__StaticFields {
    };

    struct AchievementsController_c_DisplayClass19_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsController_c_DisplayClass19_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsController_c_DisplayClass19_0__VTable vtable;
    };

    enum class SortingOrder__Enum : int32_t {
        None = 0x00000000,
        Highest = 0x00000001,
        Lowest = 0x00000002,
    };

    struct SortingOrder__Enum__Boxed {
        struct SortingOrder__Enum__Class* klass;
        MonitorData* monitor;
        SortingOrder__Enum value;
    };

    struct __declspec(align(8)) CacheData__Fields {
        SortingOrder__Enum _SortingOrder_k__BackingField;

        struct String* _Name_k__BackingField;
        int32_t _Value_k__BackingField;
    };

    struct CacheData {
        struct CacheData__Class* klass;
        MonitorData* monitor;
        struct CacheData__Fields fields;
    };

    struct SortingOrder__Enum__VTable {
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

    struct SortingOrder__Enum__StaticFields {
    };

    struct SortingOrder__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SortingOrder__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SortingOrder__Enum__VTable vtable;
    };

    struct CacheData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CacheData__StaticFields {
    };

    struct CacheData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CacheData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CacheData__VTable vtable;
    };

    enum class AchievementsUIItem_AchievementsUIItemState__Enum : int32_t {
        NONE = 0x00000000,
        LOCKED = 0x00000001,
        UNLOCKED = 0x00000002,
    };

    struct AchievementsUIItem_AchievementsUIItemState__Enum__Boxed {
        struct AchievementsUIItem_AchievementsUIItemState__Enum__Class* klass;
        MonitorData* monitor;
        AchievementsUIItem_AchievementsUIItemState__Enum value;
    };

    struct AchievementsUIItem__Fields {
        struct MonoBehaviour__Fields _;
        struct AchievementAsset* AchievementAssetFile;
        struct Texture* lockedTexture;
        struct Texture* unlockedTexture;
        struct Texture* hiddenTexture;
        struct UberShaderComponent* IconUberShader;
        struct Renderer* IconRenderer;
        struct MessageBox* NameMessageBox;
        struct MessageBox* DescriptionMessageBox;
        struct MessageProvider* HiddenAchievementName;
        struct Transform* TextFrameNormal;
        struct Transform* TextFrameHidden;
        struct Color m_lockedColor;
        struct Color m_unlockedColor;
        struct GameObject* Lock;
        struct GameObject* GlowGroup;
        struct CleverMenuItem* m_cleverMenuItem;
        AchievementsUIItem_AchievementsUIItemState__Enum ItemState;
    };

    struct AchievementsUIItem {
        struct AchievementsUIItem__Class* klass;
        MonitorData* monitor;
        struct AchievementsUIItem__Fields fields;
    };

    struct AchievementsUIItem_AchievementsUIItemState__Enum__VTable {
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

    struct AchievementsUIItem_AchievementsUIItemState__Enum__StaticFields {
    };

    struct AchievementsUIItem_AchievementsUIItemState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUIItem_AchievementsUIItemState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUIItem_AchievementsUIItemState__Enum__VTable vtable;
    };

    struct AchievementsUIItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsUIItem__StaticFields {
    };

    struct AchievementsUIItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUIItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUIItem__VTable vtable;
    };

    struct __declspec(align(8)) AchievementsUIItem_c_DisplayClass22_0__Fields {
        struct String* playFabId;
    };

    struct AchievementsUIItem_c_DisplayClass22_0 {
        struct AchievementsUIItem_c_DisplayClass22_0__Class* klass;
        MonitorData* monitor;
        struct AchievementsUIItem_c_DisplayClass22_0__Fields fields;
    };

    struct AchievementsUIItem_c_DisplayClass22_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsUIItem_c_DisplayClass22_0__StaticFields {
    };

    struct AchievementsUIItem_c_DisplayClass22_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUIItem_c_DisplayClass22_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUIItem_c_DisplayClass22_0__VTable vtable;
    };

    struct AchievementsUISwitchGrid__Fields {
        struct MonoBehaviour__Fields _;
        struct AchievementsUIItem* AchievementsUIItemTemplate;
        struct CleverMenuItemSelectionManager* SelectionManager;
        struct String* StoryAchievementAssets;
        struct String* GameAchievementAssets;
        struct String* FunAchievementAssets;
        float SpaceX;
        float SpaceY;
        struct List_1_AchievementAsset_* AchievementAssets;
    };

    struct AchievementsUISwitchGrid {
        struct AchievementsUISwitchGrid__Class* klass;
        MonitorData* monitor;
        struct AchievementsUISwitchGrid__Fields fields;
    };

    struct AchievementsUISwitchGrid__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsUISwitchGrid__StaticFields {
    };

    struct AchievementsUISwitchGrid__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUISwitchGrid__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUISwitchGrid__VTable vtable;
    };

    enum class AchievementsUISynchronizer_SynchronizationState__Enum : int32_t {
        NO_CONECTION = 0x00000000,
        IS_LOADING = 0x00000001,
        SYNCHRONIZED = 0x00000002,
    };

    struct AchievementsUISynchronizer_SynchronizationState__Enum__Boxed {
        struct AchievementsUISynchronizer_SynchronizationState__Enum__Class* klass;
        MonitorData* monitor;
        AchievementsUISynchronizer_SynchronizationState__Enum value;
    };

    struct AchievementsUISynchronizer__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* AchievementsCouterText;
        struct GameObject* AchievementsLoadingText;
        struct GameObject* AchievementsGrid;
        struct List_1_AchievementsUIItem_* m_achievementsUIItems;
        struct INetworkConnectivityChecker* m_netConnectivityChecker;
        AchievementsUISynchronizer_SynchronizationState__Enum m_state;
    };

    struct AchievementsUISynchronizer {
        struct AchievementsUISynchronizer__Class* klass;
        MonitorData* monitor;
        struct AchievementsUISynchronizer__Fields fields;
    };

    struct __declspec(align(8)) List_1_AchievementsUIItem___Fields {
        struct AchievementsUIItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AchievementsUIItem_ {
        struct List_1_AchievementsUIItem___Class* klass;
        MonitorData* monitor;
        struct List_1_AchievementsUIItem___Fields fields;
    };

    struct AchievementsUIItem__Array {
        struct AchievementsUIItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AchievementsUIItem* vector[32];
    };

    struct IEnumerator_1_AchievementsUIItem_ {
        struct IEnumerator_1_AchievementsUIItem___Class* klass;
        MonitorData* monitor;
    };

    struct AchievementsUIItem__Array__VTable {
    };

    struct AchievementsUIItem__Array__StaticFields {
    };

    struct AchievementsUIItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUIItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUIItem__Array__VTable vtable;
    };

    struct IEnumerator_1_AchievementsUIItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AchievementsUIItem___StaticFields {
    };

    struct IEnumerator_1_AchievementsUIItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AchievementsUIItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AchievementsUIItem___VTable vtable;
    };

    struct List_1_AchievementsUIItem___VTable {
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

    struct List_1_AchievementsUIItem___StaticFields {
        struct AchievementsUIItem__Array* _emptyArray;
    };

    struct List_1_AchievementsUIItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AchievementsUIItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AchievementsUIItem___VTable vtable;
    };

    struct AchievementsUISynchronizer_SynchronizationState__Enum__VTable {
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

    struct AchievementsUISynchronizer_SynchronizationState__Enum__StaticFields {
    };

    struct AchievementsUISynchronizer_SynchronizationState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUISynchronizer_SynchronizationState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUISynchronizer_SynchronizationState__Enum__VTable vtable;
    };

    struct AchievementsUISynchronizer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsUISynchronizer__StaticFields {
    };

    struct AchievementsUISynchronizer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUISynchronizer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUISynchronizer__VTable vtable;
    };

    struct AchievementsUITextCounter__Fields {
        struct MonoBehaviour__Fields _;
        struct MessageBox* MessageBox;
    };

    struct AchievementsUITextCounter {
        struct AchievementsUITextCounter__Class* klass;
        MonitorData* monitor;
        struct AchievementsUITextCounter__Fields fields;
    };

    struct AchievementsUITextCounter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsUITextCounter__StaticFields {
    };

    struct AchievementsUITextCounter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUITextCounter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUITextCounter__VTable vtable;
    };

    struct __declspec(align(8)) AchievementsUITextCounter_c_DisplayClass2_0__Fields {
        struct AchievementAsset* achievementAsset;
    };

    struct AchievementsUITextCounter_c_DisplayClass2_0 {
        struct AchievementsUITextCounter_c_DisplayClass2_0__Class* klass;
        MonitorData* monitor;
        struct AchievementsUITextCounter_c_DisplayClass2_0__Fields fields;
    };

    struct AchievementsUITextCounter_c_DisplayClass2_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementsUITextCounter_c_DisplayClass2_0__StaticFields {
    };

    struct AchievementsUITextCounter_c_DisplayClass2_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementsUITextCounter_c_DisplayClass2_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementsUITextCounter_c_DisplayClass2_0__VTable vtable;
    };

    struct __declspec(align(8)) FuncAction__Fields {
        struct Action* Action;
    };

    struct FuncAction {
        struct FuncAction__Class* klass;
        MonitorData* monitor;
        struct FuncAction__Fields fields;
    };

    struct FuncAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Perform;
    };

    struct FuncAction__StaticFields {
    };

    struct FuncAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FuncAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FuncAction__VTable vtable;
    };

    struct IEnumerable_1_System_Char_ {
        struct IEnumerable_1_System_Char___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Char___VTable {
        VirtualInvokeData GetEnumerator;
    };

} // namespace app
