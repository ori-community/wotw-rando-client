namespace app {
struct FpsGraph {
    struct FpsGraph__Class *klass;
    MonitorData *monitor;
    struct FpsGraph__Fields fields;
};

struct FrameInfo__Array {
    struct FrameInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FrameInfo *vector[32];
};

struct FrameInfo__Array__VTable {
};

struct FrameInfo__Array__StaticFields {
};

struct FrameInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameInfo__Array__VTable vtable;
};

struct FpsGraph__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FpsGraph__StaticFields {
    struct FpsGraph *Instance;
    float m_xGraphOffset;
    float m_yGraphOffset;
    int32_t m_lastCollectionCount;
    struct Int32__Array *numberBits;
};

struct FpsGraph__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FpsGraph__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FpsGraph__VTable vtable;
};

struct __declspec(align(8)) DroppedFrameMonitorB__Fields {
    int32_t DangerFrames;
    int32_t DroppedFrames_Single;
    int32_t DroppedFrames_Double;
    int32_t DroppedFrames_Triple;
    int32_t DroppedFrames_Multiple;
    int32_t Health;
    int32_t TotalFrames;
    int32_t BadFrames;
    int32_t m_dangerFrames;
    int32_t m_droppedFramesSingle;
    int32_t m_droppedFramesDouble;
    int32_t m_droppedFramesTriple;
    int32_t m_droppedFramesMultiple;
    int32_t m_health;
    int32_t m_badFrames;
    int32_t m_totalFrames;
    float m_lastUpdateTime;
    struct List_1_DroppedFrameMonitorB_TempData_ *TempFrameData;
    int32_t m_index;
};

struct DroppedFrameMonitorB {
    struct DroppedFrameMonitorB__Class *klass;
    MonitorData *monitor;
    struct DroppedFrameMonitorB__Fields fields;
};

struct __declspec(align(8)) List_1_DroppedFrameMonitorB_TempData___Fields {
    struct DroppedFrameMonitorB_TempData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DroppedFrameMonitorB_TempData_ {
    struct List_1_DroppedFrameMonitorB_TempData___Class *klass;
    MonitorData *monitor;
    struct List_1_DroppedFrameMonitorB_TempData___Fields fields;
};

struct __declspec(align(8)) DroppedFrameMonitorB_TempData__Fields {
    float Time;
    DroppedFrameMonitor_FrameState__Enum State;
    
};

struct DroppedFrameMonitorB_TempData {
    struct DroppedFrameMonitorB_TempData__Class *klass;
    MonitorData *monitor;
    struct DroppedFrameMonitorB_TempData__Fields fields;
};

struct DroppedFrameMonitorB_TempData__Array {
    struct DroppedFrameMonitorB_TempData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DroppedFrameMonitorB_TempData *vector[32];
};

struct IEnumerator_1_DroppedFrameMonitorB_TempData_ {
    struct IEnumerator_1_DroppedFrameMonitorB_TempData___Class *klass;
    MonitorData *monitor;
};

struct DroppedFrameMonitorB_TempData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DroppedFrameMonitorB_TempData__StaticFields {
};

struct DroppedFrameMonitorB_TempData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DroppedFrameMonitorB_TempData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DroppedFrameMonitorB_TempData__VTable vtable;
};

struct DroppedFrameMonitorB_TempData__Array__VTable {
};

struct DroppedFrameMonitorB_TempData__Array__StaticFields {
};

struct DroppedFrameMonitorB_TempData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DroppedFrameMonitorB_TempData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DroppedFrameMonitorB_TempData__Array__VTable vtable;
};

struct IEnumerator_1_DroppedFrameMonitorB_TempData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_DroppedFrameMonitorB_TempData___StaticFields {
};

struct IEnumerator_1_DroppedFrameMonitorB_TempData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_DroppedFrameMonitorB_TempData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_DroppedFrameMonitorB_TempData___VTable vtable;
};

struct List_1_DroppedFrameMonitorB_TempData___VTable {
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

struct List_1_DroppedFrameMonitorB_TempData___StaticFields {
    struct DroppedFrameMonitorB_TempData__Array *_emptyArray;
};

struct List_1_DroppedFrameMonitorB_TempData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DroppedFrameMonitorB_TempData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DroppedFrameMonitorB_TempData___VTable vtable;
};

struct DroppedFrameMonitorB__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DroppedFrameMonitorB__StaticFields {
    bool DEBUG_ENABLED;
};

struct DroppedFrameMonitorB__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DroppedFrameMonitorB__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DroppedFrameMonitorB__VTable vtable;
};

struct MemoryCounter__Fields {
    struct MonoBehaviour__Fields _;
    float m_lastCheckTime;
    float m_monoUsed;
    float m_monoHeap;
};

struct MemoryCounter {
    struct MemoryCounter__Class *klass;
    MonitorData *monitor;
    struct MemoryCounter__Fields fields;
};

struct MemoryCounter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryCounter__StaticFields {
};

struct MemoryCounter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryCounter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryCounter__VTable vtable;
};

struct FrameGraph__Fields {
    struct MonoBehaviour__Fields _;
    struct Material *m_material;
    int32_t m_lastScreenWidth;
    int32_t m_graphWidth;
    int32_t m_graphHeight;
    int32_t m_graphOffsX;
    int32_t m_graphOffsY;
    int64_t m_currentFrameStartNs;
    int64_t m_currentFrameEndNs;
    int64_t m_currentFrameDurationNs;
    int64_t m_currentGraphMaxNs;
    int32_t m_shrinkTimer;
};

struct FrameGraph {
    struct FrameGraph__Class *klass;
    MonitorData *monitor;
    struct FrameGraph__Fields fields;
};

struct FrameGraph__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FrameGraph__StaticFields {
    struct Color m_graphBackground;
    int64_t NS120;
    int64_t NS60;
    int64_t NS30;
    int64_t NS15;
    struct FrameGraph *Instance;
};

struct FrameGraph__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameGraph__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameGraph__VTable vtable;
};

struct MicroProfilerGraph__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_lastScreenWidth;
    int32_t m_lastScreenHeight;
    struct Material *m_material;
    struct FrameCounter_1 *m_frameCounter;
    bool m_pageLeftHandled;
    bool m_pageRightHandled;
    float m_holdInputTimer;
    float TimeMarkerInterval;
    bool m_isExpanded;
    int32_t m_graphWidth;
    int32_t m_graphHeight;
    float GraphScale;
    struct Vector2 GraphPositionOffset;
    int32_t GraphMaxMS;
    float m_xGraphOffset;
    float m_yGraphOffset;
    int32_t m_visibleHistory;
    struct Color ScrollBarBackgroundColor;
    struct Color ScrollBarHandleColor;
    struct Color TimeMarkerColor;
    struct Color LineColor;
    struct Color GraphBackgroundColor;
    struct Color MSLabelBackgroundColor;
    struct IProfilingDataProvider *m_dataProvider;
    struct MicroProfilerGraph_FrameCache__Array *m_frameCache;
    struct List_1_System_Int32_ *m_timeMarkers;
    struct List_1_System_Int32_ *m_fpsMarkers;
    struct List_1_System_Int32_ *m_fixedUpdateMarkers;
    int32_t m_frameCacheIndex;
    int32_t m_timeMarkerCacheIndex;
    int32_t m_markerCacheIndex;
    struct Color__Array *m_markerColors;
    struct MicroProfilerGraph_MetricCache__Array *m_metricCache;
    struct Metric__Enum__Array *VisibleMetrics;
    struct Int32__Array *m_prevMinY;
    struct Int32__Array *m_prevMaxY;
    struct Boolean__Array *m_markersActive;
    struct List_1_MicroProfilerGraph_MarkerCache___Array *m_markerCache;
    int32_t m_baseMPIndex;
    int32_t m_visibleFrames;
    int32_t m_inspectIndex;
    int32_t m_highlightedTimeMarker;
    int32_t m_lastHighlightedTimeMarker;
    struct Single__Array *m_highlightedAverages;
    int32_t m_lastSecondId;
};

struct MicroProfilerGraph {
    struct MicroProfilerGraph__Class *klass;
    MonitorData *monitor;
    struct MicroProfilerGraph__Fields fields;
};

struct FrameCounter_SecondInfo {
    int32_t m_profilerStartFrame;
    int32_t m_profilerEndFrame;
    int32_t m_index;
    float m_startTime;
    float m_endTime;
    int32_t m_updateCount;
    float m_deltaTimeSum;
    int32_t m_fixedUpdateCount;
    float m_fixedDeltaTimeSum;
};

struct FrameCounter_SecondInfo__Boxed {
    struct FrameCounter_SecondInfo__Class *klass;
    MonitorData *monitor;
    struct FrameCounter_SecondInfo fields;
};

struct FrameCounter_1__Fields {
    struct MonoBehaviour__Fields _;
    struct FrameCounter_SecondInfo__Array *m_seconds;
    struct FrameCounter_SecondInfo m_nullSecond;
    int32_t m_secondIndex;
    float m_lastStart;
    int32_t m_updates;
    int32_t m_secondCounter;
    int32_t m_fixedUpdates;
    float m_deltaTimeSum;
    float m_fixedDeltaTimeSum;
    bool m_wasPaused;
    int32_t m_lastProfilerIndex;
    struct IProfilingDataProvider *m_dataProvider;
};

struct FrameCounter_1 {
    struct FrameCounter_1__Class *klass;
    MonitorData *monitor;
    struct FrameCounter_1__Fields fields;
};

struct FrameCounter_SecondInfo__Array {
    struct FrameCounter_SecondInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FrameCounter_SecondInfo vector[32];
};

struct IProfilingDataProvider {
    struct IProfilingDataProvider__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_Profile_Marker_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_ {
    struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color_ {
    int32_t hashCode;
    int32_t next;
    Marker__Enum key;
    
    struct Color value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color_ vector[32];
};

struct IEqualityComparer_1_Moon_Profile_Marker_ {
    struct IEqualityComparer_1_Moon_Profile_Marker___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___Fields {
    struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___Fields fields;
};

struct Marker__Enum__Array {
    struct Marker__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    Marker__Enum vector[32];
};

struct IEnumerator_1_Moon_Profile_Marker_ {
    struct IEnumerator_1_Moon_Profile_Marker___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___Fields {
    struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___Fields fields;
};

struct ICollection_1_Moon_Profile_Marker_ {
    struct ICollection_1_Moon_Profile_Marker___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color_ {
    Marker__Enum key;
    
    struct Color value;
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Boxed {
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color_ fields;
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Array {
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Profile_Marker_ {
    struct IEnumerable_1_Moon_Profile_Marker___Class *klass;
    MonitorData *monitor;
};

struct MicroProfilerGraph_FrameCache {
    struct Int32__Array *MetricMinY;
    struct Int32__Array *MetricMaxY;
};

struct MicroProfilerGraph_FrameCache__Boxed {
    struct MicroProfilerGraph_FrameCache__Class *klass;
    MonitorData *monitor;
    struct MicroProfilerGraph_FrameCache fields;
};

struct MicroProfilerGraph_FrameCache__Array {
    struct MicroProfilerGraph_FrameCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MicroProfilerGraph_FrameCache vector[32];
};

struct MicroProfilerGraph_MetricCache {
    Metric__Enum _Metric_k__BackingField;
    
    struct Color _Color_k__BackingField;
};

struct MicroProfilerGraph_MetricCache__Boxed {
    struct MicroProfilerGraph_MetricCache__Class *klass;
    MonitorData *monitor;
    struct MicroProfilerGraph_MetricCache fields;
};

struct MicroProfilerGraph_MetricCache__Array {
    struct MicroProfilerGraph_MetricCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MicroProfilerGraph_MetricCache vector[32];
};

struct __declspec(align(8)) List_1_MicroProfilerGraph_MarkerCache___Fields {
    struct MicroProfilerGraph_MarkerCache__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MicroProfilerGraph_MarkerCache_ {
    struct List_1_MicroProfilerGraph_MarkerCache___Class *klass;
    MonitorData *monitor;
    struct List_1_MicroProfilerGraph_MarkerCache___Fields fields;
};

struct MicroProfilerGraph_MarkerCache {
    int32_t StartFrame;
    int32_t EndFrame;
    int32_t Count;
};

struct MicroProfilerGraph_MarkerCache__Boxed {
    struct MicroProfilerGraph_MarkerCache__Class *klass;
    MonitorData *monitor;
    struct MicroProfilerGraph_MarkerCache fields;
};

struct MicroProfilerGraph_MarkerCache__Array {
    struct MicroProfilerGraph_MarkerCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MicroProfilerGraph_MarkerCache vector[32];
};

struct IEnumerator_1_MicroProfilerGraph_MarkerCache_ {
    struct IEnumerator_1_MicroProfilerGraph_MarkerCache___Class *klass;
    MonitorData *monitor;
};

struct List_1_MicroProfilerGraph_MarkerCache___Array {
    struct List_1_MicroProfilerGraph_MarkerCache___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_MicroProfilerGraph_MarkerCache_ *vector[32];
};

struct FrameCounter_SecondInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FrameCounter_SecondInfo__StaticFields {
};

struct FrameCounter_SecondInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameCounter_SecondInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameCounter_SecondInfo__VTable vtable;
};

struct FrameCounter_SecondInfo__Array__VTable {
};

struct FrameCounter_SecondInfo__Array__StaticFields {
};

struct FrameCounter_SecondInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameCounter_SecondInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameCounter_SecondInfo__Array__VTable vtable;
};

struct IProfilingDataProvider__VTable {
    VirtualInvokeData get_SupportsGraph;
    VirtualInvokeData get_SupportsInspector;
    VirtualInvokeData get_SupportsMarkers;
    VirtualInvokeData get_HistorySize;
    VirtualInvokeData get_NumMetrics;
    VirtualInvokeData get_NumMarkers;
    VirtualInvokeData get_CurrentFrameIndex;
    VirtualInvokeData get_LastCompletedFrameID;
    VirtualInvokeData get_SupportedMetrics;
    VirtualInvokeData GetMetricValueInMS;
    VirtualInvokeData GetLastCompletedMetricValueInMS;
    VirtualInvokeData GetAverageMetricTimeInMSInFrameRange;
    VirtualInvokeData GetPeakMetricTimeInMSInFrameRange;
    VirtualInvokeData get_IsPaused;
    VirtualInvokeData AddPreEndFrameHandler;
    VirtualInvokeData AddPostBeginFrameHandler;
    VirtualInvokeData RemovePreEndFrameHandler;
    VirtualInvokeData RemovePostBeginFrameHandler;
};

struct IProfilingDataProvider__StaticFields {
};

struct IProfilingDataProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IProfilingDataProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IProfilingDataProvider__VTable vtable;
};

struct FrameCounter_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FrameCounter_1__StaticFields {
};

struct FrameCounter_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameCounter_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameCounter_1__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Profile_Marker_UnityEngine_Color___Array__VTable vtable;
};

struct IEqualityComparer_1_Moon_Profile_Marker___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_Moon_Profile_Marker___StaticFields {
};

struct IEqualityComparer_1_Moon_Profile_Marker___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_Moon_Profile_Marker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_Moon_Profile_Marker___VTable vtable;
};

struct Marker__Enum__Array__VTable {
};

struct Marker__Enum__Array__StaticFields {
};

struct Marker__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Marker__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Marker__Enum__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Profile_Marker___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Profile_Marker___StaticFields {
};

struct IEnumerator_1_Moon_Profile_Marker___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Profile_Marker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Profile_Marker___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Profile_Marker_UnityEngine_Color___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Marker_UnityEngine_Color___VTable vtable;
};

struct ICollection_1_Moon_Profile_Marker___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Moon_Profile_Marker___StaticFields {
};

struct ICollection_1_Moon_Profile_Marker___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Moon_Profile_Marker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Moon_Profile_Marker___VTable vtable;
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___StaticFields {
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___VTable vtable;
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Array__VTable {
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Array__StaticFields {
};

struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_Moon_Profile_Marker_UnityEngine_Color___VTable vtable;
};

struct IEnumerable_1_Moon_Profile_Marker___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Moon_Profile_Marker___StaticFields {
};

struct IEnumerable_1_Moon_Profile_Marker___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Moon_Profile_Marker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Moon_Profile_Marker___VTable vtable;
};

struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___VTable {
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

struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color___VTable vtable;
};

}
