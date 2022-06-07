namespace app {
struct ICollection_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct ICollection_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct UberShaderComponent *key;
    struct SerializableUberShaderWrapper *value;
};

struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Boxed {
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ fields;
};

struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array {
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UberShaderComponent_ {
    struct IEnumerable_1_UberShaderComponent___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_ArtOptimization_UberShaderWrapper___Fields {
    struct UberShaderWrapper__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_ArtOptimization_UberShaderWrapper_ {
    struct List_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};

struct __declspec(align(8)) UberShaderWrapper__Fields {
    int32_t Id;
    struct UberShaderComponent *UberShader;
    struct SerializableUberShaderWrapper *m_serializableWrapper;
    struct List_1_Moon_ArtOptimization_ModifierWrapper_ *m_modifiers;
    float m_energy;
    struct Dictionary_2_System_Int32_System_Boolean_ *m_frustumStatus;
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ *m_samples;
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ *m_modifiersMap;
};

struct UberShaderWrapper {
    struct UberShaderWrapper__Class *klass;
    MonitorData *monitor;
    struct UberShaderWrapper__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_ArtOptimization_ModifierWrapper___Fields {
    struct ModifierWrapper__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_ArtOptimization_ModifierWrapper_ {
    struct List_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};

struct __declspec(align(8)) ModifierWrapper__Fields {
    int32_t Id;
    struct UberShaderModifier *Modifier;
    struct SerializableUberSaderModifierWrapper *m_serializableModifierWrapper;
    float m_energy;
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ *m_samples;
};

struct ModifierWrapper {
    struct ModifierWrapper__Class *klass;
    MonitorData *monitor;
    struct ModifierWrapper__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_ArtOptimization_Sample___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ {
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct Sample *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample___Fields {
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample___Fields {
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample___Fields fields;
};

struct ICollection_1_Moon_ArtOptimization_Sample_ {
    struct ICollection_1_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ {
    int32_t key;
    struct Sample *value;
};

struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Boxed {
    struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ fields;
};

struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Array {
    struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
};

struct ModifierWrapper__Array {
    struct ModifierWrapper__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ModifierWrapper *vector[32];
};

struct IEnumerator_1_Moon_ArtOptimization_ModifierWrapper_ {
    struct IEnumerator_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UberShaderModifier_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
    int32_t hashCode;
    int32_t next;
    struct UberShaderModifier *key;
    struct ModifierWrapper *value;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields {
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields {
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};

struct ICollection_1_Moon_ArtOptimization_ModifierWrapper_ {
    struct ICollection_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
    struct UberShaderModifier *key;
    struct ModifierWrapper *value;
};

struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Boxed {
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ fields;
};

struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array {
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
    struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_ArtOptimization_ModifierWrapper_ {
    struct IEnumerable_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct UberShaderWrapper__Array {
    struct UberShaderWrapper__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderWrapper *vector[32];
};

struct IEnumerator_1_Moon_ArtOptimization_UberShaderWrapper_ {
    struct IEnumerator_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UberShaderComponent_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
    int32_t hashCode;
    int32_t next;
    struct UberShaderComponent *key;
    struct UberShaderWrapper *value;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields {
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields {
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};

struct ICollection_1_Moon_ArtOptimization_UberShaderWrapper_ {
    struct ICollection_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
    struct UberShaderComponent *key;
    struct UberShaderWrapper *value;
};

struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Boxed {
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ fields;
};

struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array {
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
    struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_ArtOptimization_UberShaderWrapper_ {
    struct IEnumerable_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_System_Int32___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_GameObject_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_GameObject_System_Int32_ {
    struct Dictionary_2_UnityEngine_GameObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_GameObject_System_Int32___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32_ {
    int32_t hashCode;
    int32_t next;
    struct GameObject *key;
    int32_t value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32___Fields {
    struct Dictionary_2_UnityEngine_GameObject_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32___Fields {
    struct Dictionary_2_UnityEngine_GameObject_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32___Fields fields;
};

struct KeyValuePair_2_UnityEngine_GameObject_System_Int32_ {
    struct GameObject *key;
    int32_t value;
};

struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Boxed {
    struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_GameObject_System_Int32_ fields;
};

struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Array {
    struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_GameObject_System_Int32_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_System_Int32_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SceneRootData__Fields {
    struct List_1_Portal_ *Portals;
    struct List_1_LegacyDoor_ *Doors;
};

struct SceneRootData {
    struct SceneRootData__Class *klass;
    MonitorData *monitor;
    struct SceneRootData__Fields fields;
};

struct __declspec(align(8)) List_1_Portal___Fields {
    struct Portal__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Portal_ {
    struct List_1_Portal___Class *klass;
    MonitorData *monitor;
    struct List_1_Portal___Fields fields;
};

struct Portal__Fields {
    struct MonoBehaviour__Fields _;
    bool IsLeftPortal;
    struct String *OtherPortalName;
    struct Portal *Other;
    float DelayToPortal;
    struct Condition_1 *Condition;
    bool m_insideFrustum;
    bool m_isPrewarmed;
    struct Renderer__Array *m_cachedRenderes;
    struct Bounds BoundingBox;
    struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ *m_portalVisitors;
    struct SoundHost *m_soundHost;
    struct Event_1 *PortalLoopSoundEvent;
    struct Event_1 *TeleportSoundEvent;
    struct Event_1 *AnticipationSoundEvent;
    struct Event_1 *EnterAnticipationSoundEvent;
    struct Event_1 *ExitAnticipationSoundEvent;
    struct GameObject *EnterEffect;
    struct GameObject *ExitEffect;
    struct GameObject *AnticipationEnterEffect;
    struct GameObject *AnticipationExitEffect;
    struct GameObject *m_anticipationEnterEffect;
    struct GameObject *m_anticipationExitEffect;
    struct BaseAnimator *m_anticipationEnterEffectAnimator;
    struct BaseAnimator *m_anticipationExitEffectAnimator;
    bool HasAnticipationEffects;
    bool CenterEffects;
    struct List_1_Portal_AssistConfig_ *AssistSettings;
    struct WwiseEventSystem_SoundHandle m_lastLoopSoundHandle;
    struct WwiseEventSystem_SoundHandle m_anticipationSoundHandle;
    float AnticipationRadius;
    bool m_wasOriInsideAnticipationZone;
    bool EnableDebugLog;
    int32_t m_suspensionTicket;
};

struct Portal {
    struct Portal__Class *klass;
    MonitorData *monitor;
    struct Portal__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_IPortalVisitor_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_IPortalVisitor_Portal_PortalVisitorTracking_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_IPortalVisitor_Portal_PortalVisitorTracking_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ {
    struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking_ {
    int32_t hashCode;
    int32_t next;
    struct IPortalVisitor *key;
    struct Portal_PortalVisitorTracking *value;
};

struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking_ fields;
};

struct IPortalVisitor {
    struct IPortalVisitor__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Portal_PortalVisitorTracking__Fields {
    struct Vector3 WorldPos;
    struct Vector3 LocalPos;
};

struct Portal_PortalVisitorTracking {
    struct Portal_PortalVisitorTracking__Class *klass;
    MonitorData *monitor;
    struct Portal_PortalVisitorTracking__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking___Array {
    struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_IPortalVisitor_Portal_PortalVisitorTracking_ vector[32];
};

struct IEqualityComparer_1_IPortalVisitor_ {
    struct IEqualityComparer_1_IPortalVisitor___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_IPortalVisitor_Portal_PortalVisitorTracking___Fields {
    struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_IPortalVisitor_Portal_PortalVisitorTracking_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_IPortalVisitor_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_IPortalVisitor_Portal_PortalVisitorTracking___Fields fields;
};

struct IPortalVisitor__Array {
    struct IPortalVisitor__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IPortalVisitor *vector[32];
};

struct IEnumerator_1_IPortalVisitor_ {
    struct IEnumerator_1_IPortalVisitor___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_IPortalVisitor_Portal_PortalVisitorTracking___Fields {
    struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_IPortalVisitor_Portal_PortalVisitorTracking_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_IPortalVisitor_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_IPortalVisitor_Portal_PortalVisitorTracking___Fields fields;
};

struct Portal_PortalVisitorTracking__Array {
    struct Portal_PortalVisitorTracking__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Portal_PortalVisitorTracking *vector[32];
};

struct IEnumerator_1_Portal_PortalVisitorTracking_ {
    struct IEnumerator_1_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_IPortalVisitor_ {
    struct ICollection_1_IPortalVisitor___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Portal_PortalVisitorTracking_ {
    struct ICollection_1_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking_ {
    struct IPortalVisitor *key;
    struct Portal_PortalVisitorTracking *value;
};

struct KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking___Boxed {
    struct KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking_ fields;
};

struct KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking___Array {
    struct KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking_ {
    struct IEnumerator_1_KeyValuePair_2_IPortalVisitor_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_IPortalVisitor_ {
    struct IEnumerable_1_IPortalVisitor___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Portal_PortalVisitorTracking_ {
    struct IEnumerable_1_Portal_PortalVisitorTracking___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Portal_AssistConfig___Fields {
    struct Portal_AssistConfig__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Portal_AssistConfig_ {
    struct List_1_Portal_AssistConfig___Class *klass;
    MonitorData *monitor;
    struct List_1_Portal_AssistConfig___Fields fields;
};

enum class Portal_AssistConfig_AssistTarget__Enum : int32_t {
    Player = 0x00000000,
    Projectile = 0x00000001,
};

struct Portal_AssistConfig_AssistTarget__Enum__Boxed {
    struct Portal_AssistConfig_AssistTarget__Enum__Class *klass;
    MonitorData *monitor;
    Portal_AssistConfig_AssistTarget__Enum value;
    
};

struct __declspec(align(8)) Portal_AssistConfig__Fields {
    Portal_AssistConfig_AssistTarget__Enum Category;
    
    bool CenterPositionOnExit;
    bool AlignVelocityOnExit;
};

struct Portal_AssistConfig {
    struct Portal_AssistConfig__Class *klass;
    MonitorData *monitor;
    struct Portal_AssistConfig__Fields fields;
};

struct Portal_AssistConfig__Array {
    struct Portal_AssistConfig__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Portal_AssistConfig *vector[32];
};

struct IEnumerator_1_Portal_AssistConfig_ {
    struct IEnumerator_1_Portal_AssistConfig___Class *klass;
    MonitorData *monitor;
};

struct Portal__Array {
    struct Portal__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Portal *vector[32];
};

struct IEnumerator_1_Portal_ {
    struct IEnumerator_1_Portal___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_LegacyDoor___Fields {
    struct LegacyDoor__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyDoor_ {
    struct List_1_LegacyDoor___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyDoor___Fields fields;
};

struct LegacyDoor__Array {
    struct LegacyDoor__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyDoor *vector[32];
};

struct IEnumerator_1_LegacyDoor_ {
    struct IEnumerator_1_LegacyDoor___Class *klass;
    MonitorData *monitor;
};

struct TimeSlicedActivationTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct String *_SceneName_k__BackingField;
    struct TimeSlicedActivationTask_ObjectActivationInfo__Array *ObjectActivations;
    int32_t m_expensiveActivationsIndex;
    struct List_1_UnityEngine_GameObject_ *m_targetObjects;
    bool m_activate;
    bool m_reversedOrder;
    struct List_1_UnityEngine_Component_ *m_postEnabledObservers;
    struct List_1_UnityEngine_Component_ *m_preDisableObservers;
};

struct TimeSlicedActivationTask {
    struct TimeSlicedActivationTask__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedActivationTask__Fields fields;
};

struct TimeSlicedActivationTask_ObjectActivationInfo {
    struct String *ObjectName;
    float ActivationTime;
};

struct TimeSlicedActivationTask_ObjectActivationInfo__Boxed {
    struct TimeSlicedActivationTask_ObjectActivationInfo__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedActivationTask_ObjectActivationInfo fields;
};

struct TimeSlicedActivationTask_ObjectActivationInfo__Array {
    struct TimeSlicedActivationTask_ObjectActivationInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TimeSlicedActivationTask_ObjectActivationInfo vector[32];
};

struct TimesliceSceneUnloadTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct String *_SceneName_k__BackingField;
    struct List_1_UnityEngine_GameObject_ *m_targetObjects;
    bool m_reversedOrder;
    struct GameObject *m_sceneRootObject;
};

struct TimesliceSceneUnloadTask {
    struct TimesliceSceneUnloadTask__Class *klass;
    MonitorData *monitor;
    struct TimesliceSceneUnloadTask__Fields fields;
};

struct SceneSettingsComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_CameraSettingOverrides_ *CameraSettingOverrides;
    struct CameraSettingsAsset *CameraSettings;
    struct DepthOfFieldController *DepthOfFieldController;
    struct MotionBlurController *MotionBlurController;
    float SceneBrightness;
    float DynamicBrightnessWeight;
    float FieldOfView;
    struct Vector3 DefaultCameraZoom;
    struct TurbulenceOverride *TurbulenceSettings;
    struct DynamicLightsSettings *DynamicLightsSettings;
    struct LayeredRenderSettings *LayeredRenderSettings;
    float BlurredBackgroundDepth;
    struct FogGradientController *m_sceneFogSettings;
    struct CameraSettings *m_cameraSetting;
    struct CameraSettings *m_transitionCameraSettings;
    struct TurbulenceSettings *m_turbulenceSettngs;
    struct SceneSettings *m_sceneSettings;
    struct MixerSnapshot *DefaultMixerSnapshot;
    struct LegacyTimelineSequence *SceneTimeline;
    bool OverrideBlitColorHiResOpaque3DBlurThreshold;
    float BlitColorHiResOpaque3DBlurThreshold;
    bool OverrideAlphaDepthThreshold;
    float AlphaDepthThreshold;
    bool m_useCameraSettingsOverride;
    struct CameraSettings *m_cameraSettingsOverride;
    float m_cameraSettingsOverrideFadeInSpeed;
    float m_cameraSettingsOverrideFadeOutSpeed;
    float m_cameraSettingsOverrideWeight;
    bool FOVConverted;
};

struct SceneSettingsComponent {
    struct SceneSettingsComponent__Class *klass;
    MonitorData *monitor;
    struct SceneSettingsComponent__Fields fields;
};

struct __declspec(align(8)) List_1_CameraSettingOverrides___Fields {
    struct CameraSettingOverrides__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CameraSettingOverrides_ {
    struct List_1_CameraSettingOverrides___Class *klass;
    MonitorData *monitor;
    struct List_1_CameraSettingOverrides___Fields fields;
};

struct __declspec(align(8)) CameraSettingOverrides__Fields {
    struct CameraSettingsAsset *CameraSettings;
    float FogRange;
    struct Gradient *FogGradient;
    struct Gradient *MultiplyFogGradient;
    struct Condition_1 *Condition;
    float FadeInDuration;
    float FadeOutDuration;
    struct CameraSettings *m_cameraSettings;
};

struct CameraSettingOverrides {
    struct CameraSettingOverrides__Class *klass;
    MonitorData *monitor;
    struct CameraSettingOverrides__Fields fields;
};

struct CameraSettingsAsset__Fields {
    struct ScriptableObject__Fields _;
    struct VignettingSettings *Vignetting;
    struct NoiseSettings *Noise;
    struct ContrastSettings *Contrast;
    struct DesaturationSettings *Desaturation;
    struct ColorCorrectionSettings *ColorCorrection;
    struct BloomSettings *BloomSettings;
    struct TwirlSettings *TwirlSettings;
    struct EmissiveSettings *EmissiveSettings;
    struct LightInfluenceSettings *LightInfluenceSettings;
    struct ColorVariationSettings *ColorVariationSettings;
    struct PlayerSettingsPerScene *PlayerSettingsPerScene;
    struct RenderingSettingsPerScene *RenderingSettingsPerScene;
    struct Color Fog;
};

struct CameraSettingsAsset {
    struct CameraSettingsAsset__Class *klass;
    MonitorData *monitor;
    struct CameraSettingsAsset__Fields fields;
};

struct __declspec(align(8)) VignettingSettings__Fields {
    float Intensity;
    float SecondVignetteAmount;
};

struct VignettingSettings {
    struct VignettingSettings__Class *klass;
    MonitorData *monitor;
    struct VignettingSettings__Fields fields;
};

struct __declspec(align(8)) NoiseSettings__Fields {
    float GrainIntensityMin;
    float GrainIntensityMax;
    float GrainSize;
    struct Texture *GrainTexture;
};

struct NoiseSettings {
    struct NoiseSettings__Class *klass;
    MonitorData *monitor;
    struct NoiseSettings__Fields fields;
};

struct __declspec(align(8)) ContrastSettings__Fields {
    float Brightness;
    float Contrast;
    float _DebugOverrideContrast_k__BackingField;
    float _DebugOverrideBrightness_k__BackingField;
};

struct ContrastSettings {
    struct ContrastSettings__Class *klass;
    MonitorData *monitor;
    struct ContrastSettings__Fields fields;
};

struct __declspec(align(8)) DesaturationSettings__Fields {
    float Amount;
    float _DebugOverrideAmount_k__BackingField;
};

struct DesaturationSettings {
    struct DesaturationSettings__Class *klass;
    MonitorData *monitor;
    struct DesaturationSettings__Fields fields;
};

struct __declspec(align(8)) ColorCorrectionSettings__Fields {
    struct AnimationCurve *Red;
    struct AnimationCurve *Blue;
    struct AnimationCurve *Green;
};

struct ColorCorrectionSettings {
    struct ColorCorrectionSettings__Class *klass;
    MonitorData *monitor;
    struct ColorCorrectionSettings__Fields fields;
};

struct __declspec(align(8)) BloomSettings__Fields {
    float Intensity;
    float Threshhold;
    float BlurSpread;
};

struct BloomSettings {
    struct BloomSettings__Class *klass;
    MonitorData *monitor;
    struct BloomSettings__Fields fields;
};

}
