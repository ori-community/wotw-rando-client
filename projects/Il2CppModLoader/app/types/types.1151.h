namespace app {
struct MonoManager_UpdateMode__Enum__StaticFields {
};

struct MonoManager_UpdateMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoManager_UpdateMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoManager_UpdateMode__Enum__VTable vtable;
};

struct MonoManager__Fields {
    struct MonoBehaviour__Fields _;
    struct Action *onUpdate;
    struct Action *onLateUpdate;
    struct Action *onFixedUpdate;
    struct Action *onGUI;
    struct Action *onApplicationQuit;
    struct Action_1_Boolean_ *onApplicationPause;
};

struct MonoManager {
    struct MonoManager__Class *klass;
    MonitorData *monitor;
    struct MonoManager__Fields fields;
};

struct MonoManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MonoManager__StaticFields {
    bool isQuiting;
    struct MonoManager *_current;
};

struct MonoManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoManager__VTable vtable;
};

struct AnimalAnimationController__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct Vector3 OtterStartLocalPosition;
    struct Vector3 OtterWaitLocalPosition;
    struct Vector3 OtterEndLocalPosition;
    struct MoonTimeline *animationTimeline;
    struct SerializedBooleanUberState *AnimalCutsceneState;
    struct GameObject *otterSprite;
    struct TriggerZone *TriggerZone;
    struct Transform *OriTransform;
    struct Vector3 oriStartPos;
    bool cutsceneHasBeenTriggered;
    struct IUberState__Array *m_affectingUberStates;
};

struct AnimalAnimationController {
    struct AnimalAnimationController__Class *klass;
    MonitorData *monitor;
    struct AnimalAnimationController__Fields fields;
};

struct TriggerZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Action *OnEnterTrigger;
};

struct TriggerZone {
    struct TriggerZone__Class *klass;
    MonitorData *monitor;
    struct TriggerZone__Fields fields;
};

struct TriggerZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TriggerZone__StaticFields {
};

struct TriggerZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerZone__VTable vtable;
};

struct AnimalAnimationController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetTweenSpeed;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData GetResolverForType;
};

struct AnimalAnimationController__StaticFields {
};

struct AnimalAnimationController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimalAnimationController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimalAnimationController__VTable vtable;
};

struct MoveOri__Fields {
    struct MonoBehaviour__Fields _;
    float OriSpeed;
};

struct MoveOri {
    struct MoveOri__Class *klass;
    MonitorData *monitor;
    struct MoveOri__Fields fields;
};

struct MoveOri__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoveOri__StaticFields {
};

struct MoveOri__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoveOri__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoveOri__VTable vtable;
};

struct StartTimelineOnAwake__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *Timeline;
};

struct StartTimelineOnAwake {
    struct StartTimelineOnAwake__Class *klass;
    MonitorData *monitor;
    struct StartTimelineOnAwake__Fields fields;
};

struct StartTimelineOnAwake__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StartTimelineOnAwake__StaticFields {
};

struct StartTimelineOnAwake__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StartTimelineOnAwake__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StartTimelineOnAwake__VTable vtable;
};

struct DynamicCubeReference__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *CubePrefab;
    struct DynamicDataResolver *m_dataResolver;
    struct Transform *Cube1;
    struct Transform *Cube2;
    struct Transform *Cube3;
    int32_t CubeIndex;
    struct MoonTimeline *timeline;
};

struct DynamicCubeReference {
    struct DynamicCubeReference__Class *klass;
    MonitorData *monitor;
    struct DynamicCubeReference__Fields fields;
};

struct DynamicCubeReference__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData GetTweenSpeed;
};

struct DynamicCubeReference__StaticFields {
};

struct DynamicCubeReference__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicCubeReference__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicCubeReference__VTable vtable;
};

struct TransformTest__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *transformTimeline;
};

struct TransformTest {
    struct TransformTest__Class *klass;
    MonitorData *monitor;
    struct TransformTest__Fields fields;
};

struct TransformTest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformTest__StaticFields {
};

struct TransformTest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformTest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformTest__VTable vtable;
};

struct NetworkInterfaceManager {
    struct NetworkInterfaceManager__Class *klass;
    MonitorData *monitor;
};

struct NetworkInterfaceManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NetworkInterfaceManager__StaticFields {
};

struct NetworkInterfaceManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkInterfaceManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkInterfaceManager__VTable vtable;
};

enum class P3D_BlendMode__Enum : int32_t {
    AlphaBlend = 0x00000000,
    AlphaBlendRgb = 0x00000001,
    AlphaErase = 0x00000002,
    AdditiveBlend = 0x00000003,
    SubtractiveBlend = 0x00000004,
    NormalBlend = 0x00000005,
    Replace = 0x00000006,
    LightPaintAdditive = 0x00000007,
    LightPaintSubtractive = 0x00000008,
    LightPaintErase = 0x00000009,
    LightPaintBlur = 0x0000000a,
};

struct P3D_BlendMode__Enum__Boxed {
    struct P3D_BlendMode__Enum__Class *klass;
    MonitorData *monitor;
    P3D_BlendMode__Enum value;
    
};

struct __declspec(align(8)) P3D_Brush__Fields {
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect_ *OnPrePaint;
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect_ *OnPostPaint;
    struct String *Name;
    float Opacity;
    float Angle;
    struct Vector2 Offset;
    struct Vector2 Size;
    P3D_BlendMode__Enum Blend;
    
    struct Texture2D *Shape;
    struct Color Color;
    struct Vector2 Direction;
    struct Texture2D *Detail;
    struct Vector2 DetailScale;
    struct Object *_extraData;
};

struct P3D_Brush {
    struct P3D_Brush__Class *klass;
    MonitorData *monitor;
    struct P3D_Brush__Fields fields;
};

struct Action_2_UnityEngine_RenderTexture_P3D_Rect___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_UnityEngine_RenderTexture_P3D_Rect_ {
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect___Class *klass;
    MonitorData *monitor;
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect___Fields fields;
};

struct P3D_Rect {
    int32_t XMin;
    int32_t XMax;
    int32_t YMin;
    int32_t YMax;
};

struct P3D_Rect__Boxed {
    struct P3D_Rect__Class *klass;
    MonitorData *monitor;
    struct P3D_Rect fields;
};

struct P3D_Matrix {
    float m00;
    float m10;
    float m20;
    float m01;
    float m11;
    float m21;
    float m02;
    float m12;
    float m22;
};

struct P3D_Matrix__Boxed {
    struct P3D_Matrix__Class *klass;
    MonitorData *monitor;
    struct P3D_Matrix fields;
};

struct P3D_Rect__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct P3D_Rect__StaticFields {
    struct P3D_Rect Empty;
};

struct P3D_Rect__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Rect__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Rect__VTable vtable;
};

struct Action_2_UnityEngine_RenderTexture_P3D_Rect___VTable {
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

struct Action_2_UnityEngine_RenderTexture_P3D_Rect___StaticFields {
};

struct Action_2_UnityEngine_RenderTexture_P3D_Rect___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect___VTable vtable;
};

struct P3D_BlendMode__Enum__VTable {
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

struct P3D_BlendMode__Enum__StaticFields {
};

struct P3D_BlendMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_BlendMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_BlendMode__Enum__VTable vtable;
};

struct P3D_Matrix__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct P3D_Matrix__StaticFields {
};

struct P3D_Matrix__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Matrix__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Matrix__VTable vtable;
};

struct P3D_Brush__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct P3D_Brush__StaticFields {
    struct RenderTexture *canvas;
    int32_t canvasW;
    int32_t canvasH;
    struct P3D_Rect rect;
    struct P3D_Matrix matrix;
    struct P3D_Matrix inverse;
    float opacity;
    struct Color color;
    struct Vector2 direction;
    struct Texture2D *shape;
    struct Texture2D *detail;
    struct Vector2 detailScale;
    struct Object *extraData;
    struct P3D_Brush *tempInstance;
};

struct P3D_Brush__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Brush__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Brush__VTable vtable;
};

struct P3D_Rect___VTable {
};

struct P3D_Rect___StaticFields {
};

struct P3D_Rect___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Rect___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Rect___VTable vtable;
};

struct P3D_BrushPreview__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer *meshRenderer;
    struct MeshFilter *meshFilter;
    struct Material *material;
    int32_t age;
    struct Material__Array *materials;
};

struct P3D_BrushPreview {
    struct P3D_BrushPreview__Class *klass;
    MonitorData *monitor;
    struct P3D_BrushPreview__Fields fields;
};

struct __declspec(align(8)) List_1_P3D_BrushPreview___Fields {
    struct P3D_BrushPreview__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_P3D_BrushPreview_ {
    struct List_1_P3D_BrushPreview___Class *klass;
    MonitorData *monitor;
    struct List_1_P3D_BrushPreview___Fields fields;
};

struct P3D_BrushPreview__Array {
    struct P3D_BrushPreview__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct P3D_BrushPreview *vector[32];
};

struct IEnumerator_1_P3D_BrushPreview_ {
    struct IEnumerator_1_P3D_BrushPreview___Class *klass;
    MonitorData *monitor;
};

struct P3D_BrushPreview__Array__VTable {
};

struct P3D_BrushPreview__Array__StaticFields {
};

struct P3D_BrushPreview__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_BrushPreview__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_BrushPreview__Array__VTable vtable;
};

struct IEnumerator_1_P3D_BrushPreview___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_P3D_BrushPreview___StaticFields {
};

struct IEnumerator_1_P3D_BrushPreview___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_P3D_BrushPreview___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_P3D_BrushPreview___VTable vtable;
};

struct List_1_P3D_BrushPreview___VTable {
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

struct List_1_P3D_BrushPreview___StaticFields {
    struct P3D_BrushPreview__Array *_emptyArray;
};

struct List_1_P3D_BrushPreview___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_P3D_BrushPreview___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_P3D_BrushPreview___VTable vtable;
};

struct P3D_BrushPreview__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEnable;
    VirtualInvokeData Update;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
};

struct P3D_BrushPreview__StaticFields {
    struct List_1_P3D_BrushPreview_ *AllPreviews;
};

struct P3D_BrushPreview__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_BrushPreview__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_BrushPreview__VTable vtable;
};

struct P3D_Group {
    int32_t index;
};

struct P3D_Group__Boxed {
    struct P3D_Group__Class *klass;
    MonitorData *monitor;
    struct P3D_Group fields;
};

struct P3D_Group__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct P3D_Group__StaticFields {
};

struct P3D_Group__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Group__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Group__VTable vtable;
};

struct P3D_GroupMask {
    int32_t mask;
};

struct P3D_GroupMask__Boxed {
    struct P3D_GroupMask__Class *klass;
    MonitorData *monitor;
    struct P3D_GroupMask fields;
};

struct P3D_GroupMask__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct P3D_GroupMask__StaticFields {
};

struct P3D_GroupMask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_GroupMask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_GroupMask__VTable vtable;
};

enum class P3D_Format__Enum : int32_t {
    TruecolorRGBA = 0x00000000,
    TruecolorRGB = 0x00000001,
    TruecolorA = 0x00000002,
};

struct P3D_Format__Enum__Boxed {
    struct P3D_Format__Enum__Class *klass;
    MonitorData *monitor;
    P3D_Format__Enum value;
    
};

struct P3D_Format__Enum__VTable {
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

struct P3D_Format__Enum__StaticFields {
};

struct P3D_Format__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Format__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Format__Enum__VTable vtable;
};

enum class P3D_CoordType__Enum : int32_t {
    UV1 = 0x00000000,
    UV2 = 0x00000001,
};

struct P3D_CoordType__Enum__Boxed {
    struct P3D_CoordType__Enum__Class *klass;
    MonitorData *monitor;
    P3D_CoordType__Enum value;
    
};

struct P3D_CoordType__Enum__VTable {
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

struct P3D_CoordType__Enum__StaticFields {
};

struct P3D_CoordType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_CoordType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_CoordType__Enum__VTable vtable;
};

struct __declspec(align(8)) P3D_Triangle__Fields {
    struct Vector3 PointA;
    struct Vector3 PointB;
    struct Vector3 PointC;
    struct Vector2 Coord1A;
    struct Vector2 Coord1B;
    struct Vector2 Coord1C;
    struct Vector2 Coord2A;
    struct Vector2 Coord2B;
    struct Vector2 Coord2C;
};

struct P3D_Triangle {
    struct P3D_Triangle__Class *klass;
    MonitorData *monitor;
    struct P3D_Triangle__Fields fields;
};

struct __declspec(align(8)) List_1_P3D_Triangle___Fields {
    struct P3D_Triangle__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_P3D_Triangle_ {
    struct List_1_P3D_Triangle___Class *klass;
    MonitorData *monitor;
    struct List_1_P3D_Triangle___Fields fields;
};

struct P3D_Triangle__Array {
    struct P3D_Triangle__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct P3D_Triangle *vector[32];
};

struct IEnumerator_1_P3D_Triangle_ {
    struct IEnumerator_1_P3D_Triangle___Class *klass;
    MonitorData *monitor;
};

struct P3D_Triangle__Array__VTable {
};

struct P3D_Triangle__Array__StaticFields {
};

struct P3D_Triangle__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Triangle__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Triangle__Array__VTable vtable;
};

struct IEnumerator_1_P3D_Triangle___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_P3D_Triangle___StaticFields {
};

struct IEnumerator_1_P3D_Triangle___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_P3D_Triangle___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_P3D_Triangle___VTable vtable;
};

struct List_1_P3D_Triangle___VTable {
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

struct List_1_P3D_Triangle___StaticFields {
    struct P3D_Triangle__Array *_emptyArray;
};

struct List_1_P3D_Triangle___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_P3D_Triangle___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_P3D_Triangle___VTable vtable;
};

struct P3D_Triangle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct P3D_Triangle__StaticFields {
    struct List_1_P3D_Triangle_ *pool;
};

struct P3D_Triangle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Triangle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Triangle__VTable vtable;
};

struct __declspec(align(8)) P3D_Node__Fields {
    struct Bounds Bound;
    bool Split;
    int32_t PositiveIndex;
    int32_t NegativeIndex;
    int32_t TriangleIndex;
    int32_t TriangleCount;
};

struct P3D_Node {
    struct P3D_Node__Class *klass;
    MonitorData *monitor;
    struct P3D_Node__Fields fields;
};

struct __declspec(align(8)) List_1_P3D_Node___Fields {
    struct P3D_Node__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_P3D_Node_ {
    struct List_1_P3D_Node___Class *klass;
    MonitorData *monitor;
    struct List_1_P3D_Node___Fields fields;
};

struct P3D_Node__Array {
    struct P3D_Node__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct P3D_Node *vector[32];
};

}
