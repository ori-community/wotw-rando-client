namespace app {
struct ComponentChanges__Array {
    struct ComponentChanges__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ComponentChanges *vector[32];
};

struct IEnumerator_1_Moon_ReviewFramework_ComponentChanges_ {
    struct IEnumerator_1_Moon_ReviewFramework_ComponentChanges___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_ReviewFramework_GameObjectChanges___Fields {
    struct GameObjectChanges__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_ReviewFramework_GameObjectChanges_ {
    struct List_1_Moon_ReviewFramework_GameObjectChanges___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_ReviewFramework_GameObjectChanges___Fields fields;
};

struct __declspec(align(8)) GameObjectChanges__Fields {
    ChangesStatus__Enum Status;
    
    struct String *Path;
    struct List_1_Moon_ReviewFramework_ComponentChanges_ *Components;
};

struct GameObjectChanges {
    struct GameObjectChanges__Class *klass;
    MonitorData *monitor;
    struct GameObjectChanges__Fields fields;
};

struct GameObjectChanges__Array {
    struct GameObjectChanges__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GameObjectChanges *vector[32];
};

struct IEnumerator_1_Moon_ReviewFramework_GameObjectChanges_ {
    struct IEnumerator_1_Moon_ReviewFramework_GameObjectChanges___Class *klass;
    MonitorData *monitor;
};

struct ReviewTargetMetadata__Array {
    struct ReviewTargetMetadata__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ReviewTargetMetadata *vector[32];
};

struct IEnumerator_1_Moon_ReviewFramework_ReviewTargetMetadata_ {
    struct IEnumerator_1_Moon_ReviewFramework_ReviewTargetMetadata___Class *klass;
    MonitorData *monitor;
};

struct ArtOptimizerDataContainer__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_System_Int32_ *IgnoredObjectIds;
    bool IgnoreModifiers;
    struct List_1_System_String_ *Modifiers;
    float m_objectEnergyLimit;
    float m_modifiersEnergyLimit;
    float AnimationModifierBoost;
    float CenterLayerBoost;
    struct ArtOptimizationDataModel *Data;
    float m_cachedObjectsEnergyLimit;
    float m_cachedModifiersEnergyLimit;
    struct Dictionary_2_UnityEngine_GameObject_System_Int32_ *m_fileIdsCache;
};

struct ArtOptimizerDataContainer {
    struct ArtOptimizerDataContainer__Class *klass;
    MonitorData *monitor;
    struct ArtOptimizerDataContainer__Fields fields;
};

struct __declspec(align(8)) ArtOptimizationDataModel__Fields {
    float Timestamp;
    float ScanningTime;
    struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ *m_serializedUberShaderWrappers;
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ *m_serializableUberShadersMap;
    struct List_1_Moon_ArtOptimization_UberShaderWrapper_ *m_uberShaders;
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ *m_uberShadersMap;
    struct TexturesPool *m_pool;
    struct String *_SceneGuid_k__BackingField;
    struct String *m_outputFolder;
    struct String *m_fullPath;
};

struct ArtOptimizationDataModel {
    struct ArtOptimizationDataModel__Class *klass;
    MonitorData *monitor;
    struct ArtOptimizationDataModel__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
    struct SerializableUberShaderWrapper__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};

struct __declspec(align(8)) SerializableUberShaderWrapper__Fields {
    int32_t Id;
    float Energy;
    float MaxEnergy;
    struct UberShaderComponent *UberShader;
    struct HashSet_1_Moon_ArtOptimization_Sample_ *Samples;
    struct List_1_System_Single_ *SamplesEnergy;
    struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ *m_modifiers;
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ *m_modifiersMap;
};

struct SerializableUberShaderWrapper {
    struct SerializableUberShaderWrapper__Class *klass;
    MonitorData *monitor;
    struct SerializableUberShaderWrapper__Fields fields;
};

struct UberShaderComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UberShaderTexture_ *WorldProjectedTextures;
    bool m_executeUpdate;
    struct String *m_materialStringIdentifier;
    struct Renderer *m_rendererTarget;
    bool registeredToEditorUpdate;
    struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ *m_reflectModifierFields;
    struct List_1_UberShaderModifier_ *m_tempModifiers;
    bool _IsDoingRebinding_k__BackingField;
    bool _RequiresContinuosZUpdateInEditor_k__BackingField;
    bool _RequiresWorldProjectedTexturesUpdate_k__BackingField;
    struct Transform *m_transformCached;
};

struct UberShaderComponent {
    struct UberShaderComponent__Class *klass;
    MonitorData *monitor;
    struct UberShaderComponent__Fields fields;
};

struct __declspec(align(8)) List_1_UberShaderTexture___Fields {
    struct UberShaderTexture__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberShaderTexture_ {
    struct List_1_UberShaderTexture___Class *klass;
    MonitorData *monitor;
    struct List_1_UberShaderTexture___Fields fields;
};

enum class TextureUvMode__Enum : int32_t {
    UvSpace = 0x00000000,
    WorldProjection = 0x00000001,
    WorldRotation = 0x00000002,
};

struct TextureUvMode__Enum__Boxed {
    struct TextureUvMode__Enum__Class *klass;
    MonitorData *monitor;
    TextureUvMode__Enum value;
    
};

enum class ProjectionAxis__Enum : int32_t {
    Z = 0x00000000,
    Y = 0x00000001,
};

struct ProjectionAxis__Enum__Boxed {
    struct ProjectionAxis__Enum__Class *klass;
    MonitorData *monitor;
    ProjectionAxis__Enum value;
    
};

struct UberShaderTextureBase_SubBindIdCache {
    int32_t US_ST;
    int32_t Parralax;
    int32_t Polar;
};

struct UberShaderTextureBase_SubBindIdCache__Boxed {
    struct UberShaderTextureBase_SubBindIdCache__Class *klass;
    MonitorData *monitor;
    struct UberShaderTextureBase_SubBindIdCache fields;
};

struct UberShaderTextureBase__Fields {
    struct UberShaderProperty__Fields _;
    TextureUvMode__Enum UvMode;
    
    ProjectionAxis__Enum WorldProjectionAxis;
    
    bool IsPolarUvs;
    bool DoParralax;
    bool IsCubemap;
    float ParralaxAmount;
    struct Transform *Anchor;
    struct Transform *LookAtTarget;
    struct Vector2 AnchorOffset;
    float RotationOffset;
    bool LockToAnchorX;
    bool LockToAnchorY;
    bool LockToAnchorRotation;
    bool UpdateInEditor;
    bool DisableBinding;
    struct Vector4 PolarUvSettings;
    struct Vector2 ProTextureScale;
    struct Vector2 ProTextureScroll;
    struct Vector2 ProTextureScrollMultiplier;
    struct Vector2 ProTextureOffset;
    float ProTextureRotation;
    float ProTextureRotationSpeed;
    struct UberShaderTextureBase_SubBindIdCache SubBindID;
};

struct UberShaderTextureBase {
    struct UberShaderTextureBase__Class *klass;
    MonitorData *monitor;
    struct UberShaderTextureBase__Fields fields;
};

struct UberShaderTexture__Fields {
    struct UberShaderTextureBase__Fields _;
    struct Texture2D *m_texture;
    bool IsVertexTexture;
    struct String *VariantUnboundKeyword;
};

struct UberShaderTexture {
    struct UberShaderTexture__Class *klass;
    MonitorData *monitor;
    struct UberShaderTexture__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
    struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct UberShaderTextureBase_SubBindIdCache value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields {
    struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields {
    struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields fields;
};

struct UberShaderTextureBase_SubBindIdCache__Array {
    struct UberShaderTextureBase_SubBindIdCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderTextureBase_SubBindIdCache vector[32];
};

struct IEnumerator_1_UberShaderTextureBase_SubBindIdCache_ {
    struct IEnumerator_1_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_UberShaderTextureBase_SubBindIdCache_ {
    struct ICollection_1_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
    int32_t key;
    struct UberShaderTextureBase_SubBindIdCache value;
};

struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Boxed {
    struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ fields;
};

struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Array {
    struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UberShaderTextureBase_SubBindIdCache_ {
    struct IEnumerable_1_UberShaderTextureBase_SubBindIdCache___Class *klass;
    MonitorData *monitor;
};

struct UberShaderMainTexture__Fields {
    struct UberShaderTextureBase__Fields _;
    bool EnableDOF;
    bool EnforceAddressMode;
    struct UberShaderAtlasTexture *m_texture;
    struct Texture *m_currentBindTexture;
};

struct UberShaderMainTexture {
    struct UberShaderMainTexture__Class *klass;
    MonitorData *monitor;
    struct UberShaderMainTexture__Fields fields;
};

struct __declspec(align(8)) UberShaderAtlasTexture__Fields {
    struct String *OriginalTextureGUID;
    struct UberShaderBlockTextured *TexturedBlock;
    struct String *m_lastGUID;
    bool m_usePrefabAtlas;
    bool m_setDofExplicit;
    struct Vector2 m_explicitDof;
    struct Texture2D *m_textureCache;
    bool m_hasExternal;
    double m_lastExternalCheck;
};

struct UberShaderAtlasTexture {
    struct UberShaderAtlasTexture__Class *klass;
    MonitorData *monitor;
    struct UberShaderAtlasTexture__Fields fields;
};

struct UberShaderBlockTextured__Fields {
    struct UberShaderBlock__Fields _;
    struct UberShaderColor *Color;
    struct UberShaderMainTexture *MainTexture;
    bool EraseFromAlpha;
    bool DisableCustomMesh;
    bool CenteredQueue;
};

struct UberShaderBlockTextured {
    struct UberShaderBlockTextured__Class *klass;
    MonitorData *monitor;
    struct UberShaderBlockTextured__Fields fields;
};

struct UberShaderTexture__Array {
    struct UberShaderTexture__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderTexture *vector[32];
};

struct IEnumerator_1_UberShaderTexture_ {
    struct IEnumerator_1_UberShaderTexture___Class *klass;
    MonitorData *monitor;
};

struct Action_1_UberShaderComponent___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UberShaderComponent_ {
    struct Action_1_UberShaderComponent___Class *klass;
    MonitorData *monitor;
    struct Action_1_UberShaderComponent___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Type_System_Reflection_FieldInfo___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ {
    struct Dictionary_2_System_Type_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_System_Reflection_FieldInfo___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct FieldInfo_1__Array *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo___Fields {
    struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo___Fields {
    struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo___Fields fields;
};

struct FieldInfo_1__Array__Array {
    struct FieldInfo_1__Array__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FieldInfo_1__Array *vector[32];
};

struct IEnumerator_1_System_Reflection_FieldInfo__1 {
    struct IEnumerator_1_System_Reflection_FieldInfo__1__Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Reflection_FieldInfo__1 {
    struct ICollection_1_System_Reflection_FieldInfo__1__Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ {
    struct Type *key;
    struct FieldInfo_1__Array *value;
};

struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Boxed {
    struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ fields;
};

struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Array {
    struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_FieldInfo__1 {
    struct IEnumerable_1_System_Reflection_FieldInfo__1__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_UberShaderModifier___Fields {
    struct UberShaderModifier__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberShaderModifier_ {
    struct List_1_UberShaderModifier___Class *klass;
    MonitorData *monitor;
    struct List_1_UberShaderModifier___Fields fields;
};

struct UberShaderModifier__Fields {
    struct MonoBehaviour__Fields _;
    bool Enabled;
    struct RuntimeTypeHandle m_typeId;
    struct Renderer *m_cachedRenderer;
    struct MeshFilter *m_meshFilter;
};

struct UberShaderModifier {
    struct UberShaderModifier__Class *klass;
    MonitorData *monitor;
    struct UberShaderModifier__Fields fields;
};

struct DistortModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *DistortTexture;
    struct UberShaderTexture *DistortMaskTexture;
    struct UberShaderVector *DistortSettings;
    bool AddDistortionStrenghtFromTrailAuxB;
};

struct DistortModifier {
    struct DistortModifier__Class *klass;
    MonitorData *monitor;
    struct DistortModifier__Fields fields;
};

struct DistortExtraModifier__Fields {
    struct DistortModifier__Fields _;
};

struct DistortExtraModifier {
    struct DistortExtraModifier__Class *klass;
    MonitorData *monitor;
    struct DistortExtraModifier__Fields fields;
};

enum class UberShaderVector_ScalingMode__Enum : int32_t {
    None = 0x00000000,
    Offset = 0x00000001,
    PivotOnXy = 0x00000002,
    Rotation = 0x00000003,
    NormalizeXYZ = 0x00000004,
};

struct UberShaderVector_ScalingMode__Enum__Boxed {
    struct UberShaderVector_ScalingMode__Enum__Class *klass;
    MonitorData *monitor;
    UberShaderVector_ScalingMode__Enum value;
    
};

struct UberShaderVector__Fields {
    struct UberShaderProperty__Fields _;
    UberShaderVector_ScalingMode__Enum Mode;
    
    struct Vector4 m_vectorValue;
    struct Vector4 VectorValueScale;
};

struct UberShaderVector {
    struct UberShaderVector__Class *klass;
    MonitorData *monitor;
    struct UberShaderVector__Fields fields;
};

struct UberShaderModifier__Array {
    struct UberShaderModifier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderModifier *vector[32];
};

struct IEnumerator_1_UberShaderModifier_ {
    struct IEnumerator_1_UberShaderModifier___Class *klass;
    MonitorData *monitor;
};

struct IUberShaderRebindService {
    struct IUberShaderRebindService__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) HashSet_1_Moon_ArtOptimization_Sample___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_Moon_ArtOptimization_Sample_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_Moon_ArtOptimization_Sample_ {
    struct HashSet_1_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_Moon_ArtOptimization_Sample___Fields fields;
};

struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample_ {
    int32_t hashCode;
    int32_t next;
    struct Sample *value;
};

struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Boxed {
    struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample_ fields;
};

struct __declspec(align(8)) Sample__Fields {
    struct TexturePoolEntity *_MasterTex_k__BackingField;
    struct TexturePoolEntity *_SampleTex_k__BackingField;
    float _Energy_k__BackingField;
};

struct Sample {
    struct Sample__Class *klass;
    MonitorData *monitor;
    struct Sample__Fields fields;
};

struct __declspec(align(8)) TexturePoolEntity__Fields {
    struct TexturesPool *m_pool;
    struct Texture2D *_Texture_k__BackingField;
    bool _InUse_k__BackingField;
};

struct TexturePoolEntity {
    struct TexturePoolEntity__Class *klass;
    MonitorData *monitor;
    struct TexturePoolEntity__Fields fields;
};

struct __declspec(align(8)) TexturesPool__Fields {
    struct Stack_1_Moon_ArtOptimization_TexturePoolEntity_ *m_entities;
    int32_t TexturesAllocated;
    int32_t TexturesReturned;
};

struct TexturesPool {
    struct TexturesPool__Class *klass;
    MonitorData *monitor;
    struct TexturesPool__Fields fields;
};

struct __declspec(align(8)) Stack_1_Moon_ArtOptimization_TexturePoolEntity___Fields {
    struct TexturePoolEntity__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_Moon_ArtOptimization_TexturePoolEntity_ {
    struct Stack_1_Moon_ArtOptimization_TexturePoolEntity___Class *klass;
    MonitorData *monitor;
    struct Stack_1_Moon_ArtOptimization_TexturePoolEntity___Fields fields;
};

struct TexturePoolEntity__Array {
    struct TexturePoolEntity__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TexturePoolEntity *vector[32];
};

struct IEnumerator_1_Moon_ArtOptimization_TexturePoolEntity_ {
    struct IEnumerator_1_Moon_ArtOptimization_TexturePoolEntity___Class *klass;
    MonitorData *monitor;
};

struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Array {
    struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample_ vector[32];
};

struct IEqualityComparer_1_Moon_ArtOptimization_Sample_ {
    struct IEqualityComparer_1_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
};

struct Sample__Array {
    struct Sample__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Sample *vector[32];
};

struct IEnumerator_1_Moon_ArtOptimization_Sample_ {
    struct IEnumerator_1_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_ArtOptimization_Sample_ {
    struct IEnumerable_1_Moon_ArtOptimization_Sample___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
    struct SerializableUberSaderModifierWrapper__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};

struct __declspec(align(8)) SerializableUberSaderModifierWrapper__Fields {
    int32_t Id;
    float Energy;
    float MaxEnergy;
    struct UberShaderModifier *Modifier;
    struct HashSet_1_Moon_ArtOptimization_Sample_ *Samples;
    struct List_1_System_Single_ *SamplesEnergy;
};

struct SerializableUberSaderModifierWrapper {
    struct SerializableUberSaderModifierWrapper__Class *klass;
    MonitorData *monitor;
    struct SerializableUberSaderModifierWrapper__Fields fields;
};

struct SerializableUberSaderModifierWrapper__Array {
    struct SerializableUberSaderModifierWrapper__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SerializableUberSaderModifierWrapper *vector[32];
};

struct IEnumerator_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct IEnumerator_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UberShaderModifier_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    int32_t hashCode;
    int32_t next;
    struct UberShaderModifier *key;
    struct SerializableUberSaderModifierWrapper *value;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ vector[32];
};

struct IEqualityComparer_1_UberShaderModifier_ {
    struct IEqualityComparer_1_UberShaderModifier___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};

struct ICollection_1_UberShaderModifier_ {
    struct ICollection_1_UberShaderModifier___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct ICollection_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct UberShaderModifier *key;
    struct SerializableUberSaderModifierWrapper *value;
};

struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Boxed {
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ fields;
};

struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array {
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UberShaderModifier_ {
    struct IEnumerable_1_UberShaderModifier___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    struct IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
    MonitorData *monitor;
};

struct SerializableUberShaderWrapper__Array {
    struct SerializableUberShaderWrapper__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SerializableUberShaderWrapper *vector[32];
};

struct IEnumerator_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct IEnumerator_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UberShaderComponent_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    int32_t hashCode;
    int32_t next;
    struct UberShaderComponent *key;
    struct SerializableUberShaderWrapper *value;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array {
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ vector[32];
};

struct IEqualityComparer_1_UberShaderComponent_ {
    struct IEqualityComparer_1_UberShaderComponent___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};

struct UberShaderComponent__Array {
    struct UberShaderComponent__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderComponent *vector[32];
};

struct IEnumerator_1_UberShaderComponent_ {
    struct IEnumerator_1_UberShaderComponent___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};

struct ICollection_1_UberShaderComponent_ {
    struct ICollection_1_UberShaderComponent___Class *klass;
    MonitorData *monitor;
};

}
