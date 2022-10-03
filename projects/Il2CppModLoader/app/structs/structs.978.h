namespace app {
    struct IDialogInteractionTransition__Array__VTable {
    };

    struct IDialogInteractionTransition__Array__StaticFields {
    };

    struct IDialogInteractionTransition__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDialogInteractionTransition__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDialogInteractionTransition__Array__VTable vtable;
    };

    struct DialogNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Initialize;
        VirtualInvokeData get_Actor;
        VirtualInvokeData get_MessageProvider;
        VirtualInvokeData get_Transitions;
        VirtualInvokeData get_Decorators;
        VirtualInvokeData get_MessageActiveAndEnable;
        VirtualInvokeData get_HideUiHidables;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData get_OnActivated;
        VirtualInvokeData set_OnActivated;
        VirtualInvokeData get_OnFinished;
        VirtualInvokeData set_OnFinished;
    };

    struct DialogNode__StaticFields {
    };

    struct DialogNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DialogNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DialogNode__VTable vtable;
    };

    struct DialogNodeContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DialogNodeContext__StaticFields {
    };

    struct DialogNodeContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DialogNodeContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DialogNodeContext__VTable vtable;
    };

    struct __declspec(align(8)) DialogTransition__Fields {
        struct DialogNode* Destination;
    };

    struct DialogTransition {
        struct DialogTransition__Class* klass;
        MonitorData* monitor;
        struct DialogTransition__Fields fields;
    };

    struct DialogTransition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct DialogTransition__StaticFields {
    };

    struct DialogTransition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DialogTransition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DialogTransition__VTable vtable;
    };

    struct LinearDialogTransition__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_IDialogNode_* Destination;
        struct IDialogNode* m_resolvedDialogNode;
    };

    struct LinearDialogTransition {
        struct LinearDialogTransition__Class* klass;
        MonitorData* monitor;
        struct LinearDialogTransition__Fields fields;
    };

    struct LinearDialogTransition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TransitionDestination;
        VirtualInvokeData OnOwnerEnter;
        VirtualInvokeData OnOwnerExit;
        VirtualInvokeData Validate;
    };

    struct LinearDialogTransition__StaticFields {
    };

    struct LinearDialogTransition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LinearDialogTransition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LinearDialogTransition__VTable vtable;
    };

    struct FixedUpdateScheduler__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_FixedUpdateScheduler_ScheduledAction_* SchedulesActions;
    };

    struct FixedUpdateScheduler {
        struct FixedUpdateScheduler__Class* klass;
        MonitorData* monitor;
        struct FixedUpdateScheduler__Fields fields;
    };

    struct __declspec(align(8)) List_1_FixedUpdateScheduler_ScheduledAction___Fields {
        struct FixedUpdateScheduler_ScheduledAction__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FixedUpdateScheduler_ScheduledAction_ {
        struct List_1_FixedUpdateScheduler_ScheduledAction___Class* klass;
        MonitorData* monitor;
        struct List_1_FixedUpdateScheduler_ScheduledAction___Fields fields;
    };

    struct __declspec(align(8)) FixedUpdateScheduler_ScheduledAction__Fields {
        struct Action* Action;
        struct ISuspendable* Suspendable;
        float RemainingTime;
    };

    struct FixedUpdateScheduler_ScheduledAction {
        struct FixedUpdateScheduler_ScheduledAction__Class* klass;
        MonitorData* monitor;
        struct FixedUpdateScheduler_ScheduledAction__Fields fields;
    };

    struct FixedUpdateScheduler_ScheduledAction__Array {
        struct FixedUpdateScheduler_ScheduledAction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FixedUpdateScheduler_ScheduledAction* vector[32];
    };

    struct IEnumerator_1_FixedUpdateScheduler_ScheduledAction_ {
        struct IEnumerator_1_FixedUpdateScheduler_ScheduledAction___Class* klass;
        MonitorData* monitor;
    };

    struct FixedUpdateScheduler_ScheduledAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FixedUpdateScheduler_ScheduledAction__StaticFields {
    };

    struct FixedUpdateScheduler_ScheduledAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FixedUpdateScheduler_ScheduledAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FixedUpdateScheduler_ScheduledAction__VTable vtable;
    };

    struct FixedUpdateScheduler_ScheduledAction__Array__VTable {
    };

    struct FixedUpdateScheduler_ScheduledAction__Array__StaticFields {
    };

    struct FixedUpdateScheduler_ScheduledAction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FixedUpdateScheduler_ScheduledAction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FixedUpdateScheduler_ScheduledAction__Array__VTable vtable;
    };

    struct IEnumerator_1_FixedUpdateScheduler_ScheduledAction___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FixedUpdateScheduler_ScheduledAction___StaticFields {
    };

    struct IEnumerator_1_FixedUpdateScheduler_ScheduledAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FixedUpdateScheduler_ScheduledAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_FixedUpdateScheduler_ScheduledAction___VTable vtable;
    };

    struct List_1_FixedUpdateScheduler_ScheduledAction___VTable {
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

    struct List_1_FixedUpdateScheduler_ScheduledAction___StaticFields {
        struct FixedUpdateScheduler_ScheduledAction__Array* _emptyArray;
    };

    struct List_1_FixedUpdateScheduler_ScheduledAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_FixedUpdateScheduler_ScheduledAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_FixedUpdateScheduler_ScheduledAction___VTable vtable;
    };

    struct FixedUpdateScheduler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FixedUpdateScheduler__StaticFields {
    };

    struct FixedUpdateScheduler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FixedUpdateScheduler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FixedUpdateScheduler__VTable vtable;
    };

    struct SkeletonGizmo__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform__Array* childNodes;
        struct Color color;
        float JointSize;
    };

    struct SkeletonGizmo {
        struct SkeletonGizmo__Class* klass;
        MonitorData* monitor;
        struct SkeletonGizmo__Fields fields;
    };

    struct SkeletonGizmo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SkeletonGizmo__StaticFields {
    };

    struct SkeletonGizmo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeletonGizmo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeletonGizmo__VTable vtable;
    };

    struct IsTriggerCollidingCondition__Fields {
        struct Condition_1__Fields _;
        struct List_1_UnityEngine_GameObject_* TriggeringObjects;
        struct List_1_UnityEngine_Collider_* IgnoreColliders;
        bool OnTrigger;
        bool OnCollision;
        struct Condition_1* Condition;
        bool m_isOn;
        struct List_1_UnityEngine_GameObject_* m_currentGameObjects;
    };

    struct IsTriggerCollidingCondition {
        struct IsTriggerCollidingCondition__Class* klass;
        MonitorData* monitor;
        struct IsTriggerCollidingCondition__Fields fields;
    };

    struct IsTriggerCollidingCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
    };

    struct IsTriggerCollidingCondition__StaticFields {
    };

    struct IsTriggerCollidingCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IsTriggerCollidingCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IsTriggerCollidingCondition__VTable vtable;
    };

    struct IsTriggerCollidingCondition_c {
        struct IsTriggerCollidingCondition_c__Class* klass;
        MonitorData* monitor;
    };

    struct IsTriggerCollidingCondition_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IsTriggerCollidingCondition_c__StaticFields {
        struct IsTriggerCollidingCondition_c* __9;
        struct Predicate_1_UnityEngine_GameObject_* __9__9_0;
    };

    struct IsTriggerCollidingCondition_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IsTriggerCollidingCondition_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IsTriggerCollidingCondition_c__VTable vtable;
    };

    enum class LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum : int32_t {
        None = 0x00000000,
        ApplyAsRegularCanvas = 0x00000001,
        ApplyToDynamicCanvasA = 0x00000002,
    };

    struct LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Boxed {
        struct LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class* klass;
        MonitorData* monitor;
        LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum value;
    };

    struct LightCanvasShadingZone__Fields {
        struct MonoBehaviour__Fields _;
        bool _IsDirtyEditor_k__BackingField;
        struct LightCanvas__Array* LightCanvases;
        LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum ApplyFlags;

        int32_t Priority;
        struct Bounds m_bounds;
        struct Renderer* m_renderer;
    };

    struct LightCanvasShadingZone {
        struct LightCanvasShadingZone__Class* klass;
        MonitorData* monitor;
        struct LightCanvasShadingZone__Fields fields;
    };

    struct LightCanvas__Fields {
        struct MonoBehaviour__Fields _;
        struct Texture2D* m_lightTextureAsset;
        struct LightCanvas_BindData* m_defaultBindData;
        struct LightCanvas_BindData* m_editableBindData;
        struct LightCanvas_CanvasAssetIdentifier* CanvasIdentifier;
        struct Rect CanvasRect;
        bool ExcludeFromAtlas;
        bool LightCanvasEnabled;
        bool MovingCanvas;
        struct LightCanvas_SubLayerSettings* m_defaultCanvasSubLayerSettings;
        bool m_buildProcessDone;
        struct List_1_LightCanvas_LightCanvasStateData_* States;
        struct LightCanvasStateController_LightCanvasState* DefaultStateDefinition;
        int32_t m_currentStateGuid;
        int32_t m_desiredStateGuid;
        struct Vector3 m_prevUpdatedCanvasPosition;
        struct Vector2 m_lastScale;
        int32_t m_lastChildCount;
        struct TimesliceLigthCanvasSetPosTask* m_setPosTask;
        struct List_1_UnityEngine_Renderer_* m_tempRendererList;
        struct List_1_UnityEngine_Renderer_* m_attachedRenderers;
        struct List_1_UnityEngine_Renderer_* m_cachedChildRenderers;
        struct List_1_LightCanvas_* m_childLightCanvases;
        struct List_1_UberShaderComponent_* m_attachedUberShaders;
        bool _IsInPrefab_k__BackingField;
        bool _ShouldReloadAssets_k__BackingField;
    };

    struct LightCanvas {
        struct LightCanvas__Class* klass;
        MonitorData* monitor;
        struct LightCanvas__Fields fields;
    };

    struct __declspec(align(8)) LightCanvas_BindData__Fields {
        struct Vector4 AtlasUv;
        struct Vector4 AtlasMinMax;
        struct Texture2D* BindTexture;
        bool Flipped;
    };

    struct LightCanvas_BindData {
        struct LightCanvas_BindData__Class* klass;
        MonitorData* monitor;
        struct LightCanvas_BindData__Fields fields;
    };

    struct __declspec(align(8)) LightCanvas_CanvasAssetIdentifier__Fields {
        struct String* m_gameObjectName;
        struct SceneMetaData* m_sceneMeta;
        int32_t m_guid;
        bool m_dirty;
        bool m_registered;
    };

    struct LightCanvas_CanvasAssetIdentifier {
        struct LightCanvas_CanvasAssetIdentifier__Class* klass;
        MonitorData* monitor;
        struct LightCanvas_CanvasAssetIdentifier__Fields fields;
    };

    struct __declspec(align(8)) LightCanvas_SubLayerSettings__Fields {
        struct LightCanvas_SubLayerSettingGroup* LayerA;
        struct LightCanvas_SubLayerSettingGroup* LayerB;
        struct LightCanvas_SubLayerSettingGroup* LayerC;
    };

    struct LightCanvas_SubLayerSettings {
        struct LightCanvas_SubLayerSettings__Class* klass;
        MonitorData* monitor;
        struct LightCanvas_SubLayerSettings__Fields fields;
    };

    enum class LightCanvas_SubLayerSettings_LayerMode__Enum : int32_t {
        All = 0x00000000,
        Exclusive = 0x00000001,
    };

    struct LightCanvas_SubLayerSettings_LayerMode__Enum__Boxed {
        struct LightCanvas_SubLayerSettings_LayerMode__Enum__Class* klass;
        MonitorData* monitor;
        LightCanvas_SubLayerSettings_LayerMode__Enum value;
    };

    struct __declspec(align(8)) LightCanvas_SubLayerSettingGroup__Fields {
        float LayerPos;
        struct Color LayerColor;
        bool LayerActive;
        LightCanvas_SubLayerSettings_LayerMode__Enum LayerMode;
    };

    struct LightCanvas_SubLayerSettingGroup {
        struct LightCanvas_SubLayerSettingGroup__Class* klass;
        MonitorData* monitor;
        struct LightCanvas_SubLayerSettingGroup__Fields fields;
    };

    struct __declspec(align(8)) List_1_LightCanvas_LightCanvasStateData___Fields {
        struct LightCanvas_LightCanvasStateData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LightCanvas_LightCanvasStateData_ {
        struct List_1_LightCanvas_LightCanvasStateData___Class* klass;
        MonitorData* monitor;
        struct List_1_LightCanvas_LightCanvasStateData___Fields fields;
    };

    struct __declspec(align(8)) LightCanvas_LightCanvasStateData__Fields {
        struct Texture2D* LightTextureAsset;
        struct LightCanvas_BindData* BindData;
        struct LightCanvas_SubLayerSettings* CanvasSubLayerSettings;
        bool Enabled;
        struct LightCanvasStateController_LightCanvasState* StateDefinition;
        bool HasTexture;
    };

    struct LightCanvas_LightCanvasStateData {
        struct LightCanvas_LightCanvasStateData__Class* klass;
        MonitorData* monitor;
        struct LightCanvas_LightCanvasStateData__Fields fields;
    };

    struct __declspec(align(8)) LightCanvasStateController_LightCanvasState__Fields {
        int32_t GUID;
        struct String* Name;
    };

    struct LightCanvasStateController_LightCanvasState {
        struct LightCanvasStateController_LightCanvasState__Class* klass;
        MonitorData* monitor;
        struct LightCanvasStateController_LightCanvasState__Fields fields;
    };

    struct LightCanvas_LightCanvasStateData__Array {
        struct LightCanvas_LightCanvasStateData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LightCanvas_LightCanvasStateData* vector[32];
    };

    struct IEnumerator_1_LightCanvas_LightCanvasStateData_ {
        struct IEnumerator_1_LightCanvas_LightCanvasStateData___Class* klass;
        MonitorData* monitor;
    };

    struct TimesliceLigthCanvasSetPosTask__Fields {
        struct TimeSlicedCoroutineJob__Fields _;
        struct Vector3 m_position;
        struct List_1_UnityEngine_Renderer_* targetRenderers;
    };

    struct TimesliceLigthCanvasSetPosTask {
        struct TimesliceLigthCanvasSetPosTask__Class* klass;
        MonitorData* monitor;
        struct TimesliceLigthCanvasSetPosTask__Fields fields;
    };

    struct __declspec(align(8)) List_1_LightCanvas___Fields {
        struct LightCanvas__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LightCanvas_ {
        struct List_1_LightCanvas___Class* klass;
        MonitorData* monitor;
        struct List_1_LightCanvas___Fields fields;
    };

    struct IEnumerator_1_LightCanvas_ {
        struct IEnumerator_1_LightCanvas___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_UberShaderComponent___Fields {
        struct UberShaderComponent__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UberShaderComponent_ {
        struct List_1_UberShaderComponent___Class* klass;
        MonitorData* monitor;
        struct List_1_UberShaderComponent___Fields fields;
    };

    struct LightCanvas__Array {
        struct LightCanvas__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LightCanvas* vector[32];
    };

    struct IMoonShadingZoneTarget {
        struct IMoonShadingZoneTarget__Class* klass;
        MonitorData* monitor;
    };

    struct LightCanvas_BindData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LightCanvas_BindData__StaticFields {
    };

    struct LightCanvas_BindData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvas_BindData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvas_BindData__VTable vtable;
    };

    struct LightCanvas_CanvasAssetIdentifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LightCanvas_CanvasAssetIdentifier__StaticFields {
    };

    struct LightCanvas_CanvasAssetIdentifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvas_CanvasAssetIdentifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvas_CanvasAssetIdentifier__VTable vtable;
    };

    struct LightCanvas_SubLayerSettings_LayerMode__Enum__VTable {
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

    struct LightCanvas_SubLayerSettings_LayerMode__Enum__StaticFields {
    };

    struct LightCanvas_SubLayerSettings_LayerMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvas_SubLayerSettings_LayerMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvas_SubLayerSettings_LayerMode__Enum__VTable vtable;
    };

    struct LightCanvas_SubLayerSettingGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
    };

    struct LightCanvas_SubLayerSettingGroup__StaticFields {
    };

    struct LightCanvas_SubLayerSettingGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvas_SubLayerSettingGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvas_SubLayerSettingGroup__VTable vtable;
    };

    struct LightCanvas_SubLayerSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
    };

    struct LightCanvas_SubLayerSettings__StaticFields {
        struct LightCanvas_SubLayerSettings* s_clipBoard;
    };

    struct LightCanvas_SubLayerSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvas_SubLayerSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvas_SubLayerSettings__VTable vtable;
    };

    struct LightCanvasStateController_LightCanvasState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LightCanvasStateController_LightCanvasState__StaticFields {
    };

    struct LightCanvasStateController_LightCanvasState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvasStateController_LightCanvasState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvasStateController_LightCanvasState__VTable vtable;
    };

    struct LightCanvas_LightCanvasStateData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LightCanvas_LightCanvasStateData__StaticFields {
    };

    struct LightCanvas_LightCanvasStateData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvas_LightCanvasStateData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvas_LightCanvasStateData__VTable vtable;
    };

    struct LightCanvas_LightCanvasStateData__Array__VTable {
    };

    struct LightCanvas_LightCanvasStateData__Array__StaticFields {
    };

    struct LightCanvas_LightCanvasStateData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightCanvas_LightCanvasStateData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightCanvas_LightCanvasStateData__Array__VTable vtable;
    };

    struct IEnumerator_1_LightCanvas_LightCanvasStateData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LightCanvas_LightCanvasStateData___StaticFields {
    };

    struct IEnumerator_1_LightCanvas_LightCanvasStateData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LightCanvas_LightCanvasStateData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LightCanvas_LightCanvasStateData___VTable vtable;
    };

    struct List_1_LightCanvas_LightCanvasStateData___VTable {
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

    struct List_1_LightCanvas_LightCanvasStateData___StaticFields {
        struct LightCanvas_LightCanvasStateData__Array* _emptyArray;
    };

    struct List_1_LightCanvas_LightCanvasStateData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LightCanvas_LightCanvasStateData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LightCanvas_LightCanvasStateData___VTable vtable;
    };

    struct TimesliceLigthCanvasSetPosTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnUpdateBeat;
        VirtualInvokeData Pause;
        VirtualInvokeData Resume;
        VirtualInvokeData OnJobFinished;
        VirtualInvokeData get_IsFinished;
        VirtualInvokeData get_JobName;
        VirtualInvokeData get_TimesliceJobOwnerName;
        VirtualInvokeData get_CustomTimeBudget;
        VirtualInvokeData set_CustomTimeBudget;
        VirtualInvokeData get_ContextualDebugData;
        VirtualInvokeData get_EnqueuedTime;
        VirtualInvokeData set_EnqueuedTime;
        VirtualInvokeData get_AvailableBudget;
        VirtualInvokeData set_AvailableBudget;
        VirtualInvokeData Resume_1;
        VirtualInvokeData CancelJob;
        VirtualInvokeData Reset;
        VirtualInvokeData get_JobName_1;
        VirtualInvokeData get_TimesliceJobOwnerName_1;
        VirtualInvokeData get_ContextualDebugData_1;
    };

    struct TimesliceLigthCanvasSetPosTask__StaticFields {
        int32_t ResourceUnloadTasksPerBatch;
    };

    struct TimesliceLigthCanvasSetPosTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimesliceLigthCanvasSetPosTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimesliceLigthCanvasSetPosTask__VTable vtable;
    };

    struct IEnumerator_1_LightCanvas___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LightCanvas___StaticFields {
    };

    struct IEnumerator_1_LightCanvas___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LightCanvas___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LightCanvas___VTable vtable;
    };

    struct List_1_LightCanvas___VTable {
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

    struct List_1_LightCanvas___StaticFields {
        struct LightCanvas__Array* _emptyArray;
    };

    struct List_1_LightCanvas___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LightCanvas___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LightCanvas___VTable vtable;
    };

    struct List_1_UberShaderComponent___VTable {
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

} // namespace app
