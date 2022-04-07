namespace app {
struct IEnumerator_1_UberShaderTextureBase_SubBindIdCache_ {
  struct IEnumerator_1_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UberShaderTextureBase_SubBindIdCache_ {
  struct ICollection_1_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
  int32_t key;
  struct UberShaderTextureBase_SubBindIdCache value;
};
struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Boxed {
  struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ fields;
};
struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Array {
  struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UberShaderTextureBase_SubBindIdCache_ {
  struct IEnumerable_1_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
};
struct UberShaderMainTexture__Fields {
  struct UberShaderTextureBase__Fields _;
  bool EnableDOF;
  bool EnforceAddressMode;
  struct UberShaderAtlasTexture * m_texture;
  struct Texture * m_currentBindTexture;
};
struct UberShaderMainTexture {
  struct UberShaderMainTexture__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderMainTexture__Fields fields;
};
struct __declspec(align(8)) UberShaderAtlasTexture__Fields {
  struct String * OriginalTextureGUID;
  struct UberShaderBlockTextured * TexturedBlock;
  struct String * m_lastGUID;
  bool m_usePrefabAtlas;
  bool m_setDofExplicit;
  struct Vector2 m_explicitDof;
  struct Texture2D * m_textureCache;
  bool m_hasExternal;
  double m_lastExternalCheck;
};
struct UberShaderAtlasTexture {
  struct UberShaderAtlasTexture__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAtlasTexture__Fields fields;
};
struct UberShaderBlockTextured__Fields {
  struct UberShaderBlock__Fields _;
  struct UberShaderColor * Color;
  struct UberShaderMainTexture * MainTexture;
  bool EraseFromAlpha;
  bool DisableCustomMesh;
  bool CenteredQueue;
};
struct UberShaderBlockTextured {
  struct UberShaderBlockTextured__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderBlockTextured__Fields fields;
};
struct IEnumerator_1_UberShaderTexture_ {
  struct IEnumerator_1_UberShaderTexture___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_UberShaderComponent___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UberShaderComponent_ {
  struct Action_1_UberShaderComponent___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UberShaderComponent___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Type_System_Reflection_FieldInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ {
  struct Dictionary_2_System_Type_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_System_Reflection_FieldInfo___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct FieldInfo_1__Array * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Reflection_FieldInfo_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo___Fields {
  struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Reflection_FieldInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo___Fields {
  struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Reflection_FieldInfo___Fields fields;
};
struct FieldInfo_1__Array__Array {
  struct FieldInfo_1__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FieldInfo_1__Array * vector[32];
};
struct IEnumerator_1_System_Reflection_FieldInfo__1 {
  struct IEnumerator_1_System_Reflection_FieldInfo__1__Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Reflection_FieldInfo__1 {
  struct ICollection_1_System_Reflection_FieldInfo__1__Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ {
  struct Type * key;
  struct FieldInfo_1__Array * value;
};
struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Boxed {
  struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ fields;
};
struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Array {
  struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Reflection_FieldInfo_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Reflection_FieldInfo__1 {
  struct IEnumerable_1_System_Reflection_FieldInfo__1__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UberShaderModifier___Fields {
  struct UberShaderModifier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberShaderModifier_ {
  struct List_1_UberShaderModifier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberShaderModifier___Fields fields;
};
struct UberShaderModifier__Fields {
  struct MonoBehaviour__Fields _;
  bool Enabled;
  struct RuntimeTypeHandle m_typeId;
  struct Renderer * m_cachedRenderer;
  struct MeshFilter * m_meshFilter;
};
struct UberShaderModifier {
  struct UberShaderModifier__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderModifier__Fields fields;
};
struct UberShaderModifier__Array {
  struct UberShaderModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderModifier * vector[32];
};
struct DistortModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * DistortTexture;
  struct UberShaderTexture * DistortMaskTexture;
  struct UberShaderVector * DistortSettings;
  bool AddDistortionStrenghtFromTrailAuxB;
};
struct DistortModifier {
  struct DistortModifier__Class *klass;
  struct MonitorData *monitor;
  struct DistortModifier__Fields fields;
};
struct DistortExtraModifier__Fields {
  struct DistortModifier__Fields _;
};
struct DistortExtraModifier {
  struct DistortExtraModifier__Class *klass;
  struct MonitorData *monitor;
  struct DistortExtraModifier__Fields fields;
};
enum UberShaderVector_ScalingMode__Enum : int32_t {
  UberShaderVector_ScalingMode__Enum_None = 0,
  UberShaderVector_ScalingMode__Enum_Offset = 1,
  UberShaderVector_ScalingMode__Enum_PivotOnXy = 2,
  UberShaderVector_ScalingMode__Enum_Rotation = 3,
  UberShaderVector_ScalingMode__Enum_NormalizeXYZ = 4,
};
struct UberShaderVector_ScalingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberShaderVector_ScalingMode__Enum value;
};
struct UberShaderVector__Fields {
  struct UberShaderProperty__Fields _;
  enum UberShaderVector_ScalingMode__Enum Mode;
  struct Vector4 m_vectorValue;
  struct Vector4 VectorValueScale;
};
struct UberShaderVector {
  struct UberShaderVector__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderVector__Fields fields;
};
struct IEnumerator_1_UberShaderModifier_ {
  struct IEnumerator_1_UberShaderModifier___Class *klass;
  struct MonitorData *monitor;
};
struct IUberShaderRebindService {
  struct IUberShaderRebindService__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_Moon_ArtOptimization_Sample___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_Moon_ArtOptimization_Sample_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_Moon_ArtOptimization_Sample_ {
  struct HashSet_1_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_Moon_ArtOptimization_Sample___Fields fields;
};
struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample_ {
  int32_t hashCode;
  int32_t next;
  struct Sample * value;
};
struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Boxed {
  struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample_ fields;
};
struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Array {
  struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_Moon_ArtOptimization_Sample_ vector[32];
};
struct __declspec(align(8)) Sample__Fields {
  struct TexturePoolEntity * _MasterTex_k__BackingField;
  struct TexturePoolEntity * _SampleTex_k__BackingField;
  float _Energy_k__BackingField;
};
struct Sample {
  struct Sample__Class *klass;
  struct MonitorData *monitor;
  struct Sample__Fields fields;
};
struct __declspec(align(8)) TexturePoolEntity__Fields {
  struct TexturesPool * m_pool;
  struct Texture2D * _Texture_k__BackingField;
  bool _InUse_k__BackingField;
};
struct TexturePoolEntity {
  struct TexturePoolEntity__Class *klass;
  struct MonitorData *monitor;
  struct TexturePoolEntity__Fields fields;
};
struct __declspec(align(8)) TexturesPool__Fields {
  struct Stack_1_Moon_ArtOptimization_TexturePoolEntity_ * m_entities;
  int32_t TexturesAllocated;
  int32_t TexturesReturned;
};
struct TexturesPool {
  struct TexturesPool__Class *klass;
  struct MonitorData *monitor;
  struct TexturesPool__Fields fields;
};
struct __declspec(align(8)) Stack_1_Moon_ArtOptimization_TexturePoolEntity___Fields {
  struct TexturePoolEntity__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_Moon_ArtOptimization_TexturePoolEntity_ {
  struct Stack_1_Moon_ArtOptimization_TexturePoolEntity___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_Moon_ArtOptimization_TexturePoolEntity___Fields fields;
};
struct TexturePoolEntity__Array {
  struct TexturePoolEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TexturePoolEntity * vector[32];
};
struct IEnumerator_1_Moon_ArtOptimization_TexturePoolEntity_ {
  struct IEnumerator_1_Moon_ArtOptimization_TexturePoolEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_Moon_ArtOptimization_Sample_ {
  struct IEqualityComparer_1_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
};
struct Sample__Array {
  struct Sample__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Sample * vector[32];
};
struct IEnumerator_1_Moon_ArtOptimization_Sample_ {
  struct IEnumerator_1_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ArtOptimization_Sample_ {
  struct IEnumerable_1_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
  struct SerializableUberSaderModifierWrapper__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};
struct __declspec(align(8)) SerializableUberSaderModifierWrapper__Fields {
  int32_t Id;
  float Energy;
  float MaxEnergy;
  struct UberShaderModifier * Modifier;
  struct HashSet_1_Moon_ArtOptimization_Sample_ * Samples;
  struct List_1_System_Single_ * SamplesEnergy;
};
struct SerializableUberSaderModifierWrapper {
  struct SerializableUberSaderModifierWrapper__Class *klass;
  struct MonitorData *monitor;
  struct SerializableUberSaderModifierWrapper__Fields fields;
};
struct SerializableUberSaderModifierWrapper__Array {
  struct SerializableUberSaderModifierWrapper__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SerializableUberSaderModifierWrapper * vector[32];
};
struct IEnumerator_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct IEnumerator_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UberShaderModifier_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  int32_t hashCode;
  int32_t next;
  struct UberShaderModifier * key;
  struct SerializableUberSaderModifierWrapper * value;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ vector[32];
};
struct IEqualityComparer_1_UberShaderModifier_ {
  struct IEqualityComparer_1_UberShaderModifier___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields {
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Fields fields;
};
struct ICollection_1_UberShaderModifier_ {
  struct ICollection_1_UberShaderModifier___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct ICollection_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct UberShaderModifier * key;
  struct SerializableUberSaderModifierWrapper * value;
};
struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Boxed {
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ fields;
};
struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array {
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UberShaderModifier_ {
  struct IEnumerable_1_UberShaderModifier___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
  struct IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct IEnumerator_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UberShaderComponent_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  int32_t hashCode;
  int32_t next;
  struct UberShaderComponent * key;
  struct SerializableUberShaderWrapper * value;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ vector[32];
};
struct IEqualityComparer_1_UberShaderComponent_ {
  struct IEqualityComparer_1_UberShaderComponent___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};
struct UberShaderComponent__Array {
  struct UberShaderComponent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderComponent * vector[32];
};
struct IEnumerator_1_UberShaderComponent_ {
  struct IEnumerator_1_UberShaderComponent___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};
struct ICollection_1_UberShaderComponent_ {
  struct ICollection_1_UberShaderComponent___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct ICollection_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct UberShaderComponent * key;
  struct SerializableUberShaderWrapper * value;
};
struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Boxed {
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ fields;
};
struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array {
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UberShaderComponent_ {
  struct IEnumerable_1_UberShaderComponent___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ArtOptimization_UberShaderWrapper___Fields {
  struct UberShaderWrapper__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ArtOptimization_UberShaderWrapper_ {
  struct List_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};
struct __declspec(align(8)) UberShaderWrapper__Fields {
  int32_t Id;
  struct UberShaderComponent * UberShader;
  struct SerializableUberShaderWrapper * m_serializableWrapper;
  struct List_1_Moon_ArtOptimization_ModifierWrapper_ * m_modifiers;
  float m_energy;
  struct Dictionary_2_System_Int32_System_Boolean_ * m_frustumStatus;
  struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ * m_samples;
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ * m_modifiersMap;
};
struct UberShaderWrapper {
  struct UberShaderWrapper__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderWrapper__Fields fields;
};
struct UberShaderWrapper__Array {
  struct UberShaderWrapper__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderWrapper * vector[32];
};
struct __declspec(align(8)) List_1_Moon_ArtOptimization_ModifierWrapper___Fields {
  struct ModifierWrapper__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ArtOptimization_ModifierWrapper_ {
  struct List_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};
struct __declspec(align(8)) ModifierWrapper__Fields {
  int32_t Id;
  struct UberShaderModifier * Modifier;
  struct SerializableUberSaderModifierWrapper * m_serializableModifierWrapper;
  float m_energy;
  struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ * m_samples;
};
struct ModifierWrapper {
  struct ModifierWrapper__Class *klass;
  struct MonitorData *monitor;
  struct ModifierWrapper__Fields fields;
};
struct ModifierWrapper__Array {
  struct ModifierWrapper__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ModifierWrapper * vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_ArtOptimization_Sample___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ {
  struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Sample * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ArtOptimization_Sample_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample___Fields {
  struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ArtOptimization_Sample___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample___Fields {
  struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ArtOptimization_Sample___Fields fields;
};
struct ICollection_1_Moon_ArtOptimization_Sample_ {
  struct ICollection_1_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ {
  int32_t key;
  struct Sample * value;
};
struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Boxed {
  struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ fields;
};
struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Array {
  struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ArtOptimization_Sample___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_ArtOptimization_ModifierWrapper_ {
  struct IEnumerator_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UberShaderModifier_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
  int32_t hashCode;
  int32_t next;
  struct UberShaderModifier * key;
  struct ModifierWrapper * value;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields {
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields {
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Fields fields;
};
struct ICollection_1_Moon_ArtOptimization_ModifierWrapper_ {
  struct ICollection_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
  struct UberShaderModifier * key;
  struct ModifierWrapper * value;
};
struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Boxed {
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ fields;
};
struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array {
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
  struct IEnumerator_1_KeyValuePair_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ArtOptimization_ModifierWrapper_ {
  struct IEnumerable_1_Moon_ArtOptimization_ModifierWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_ArtOptimization_UberShaderWrapper_ {
  struct IEnumerator_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UberShaderComponent_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
  int32_t hashCode;
  int32_t next;
  struct UberShaderComponent * key;
  struct UberShaderWrapper * value;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields {
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields {
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Fields fields;
};
struct ICollection_1_Moon_ArtOptimization_UberShaderWrapper_ {
  struct ICollection_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
  struct UberShaderComponent * key;
  struct UberShaderWrapper * value;
};
struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Boxed {
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ fields;
};
struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array {
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ {
  struct IEnumerator_1_KeyValuePair_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ArtOptimization_UberShaderWrapper_ {
  struct IEnumerable_1_Moon_ArtOptimization_UberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_GameObject_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_GameObject_System_Int32_ {
  struct Dictionary_2_UnityEngine_GameObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_GameObject_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct GameObject * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Int32_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_GameObject_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_GameObject_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_System_Int32___Fields fields;
};
struct KeyValuePair_2_UnityEngine_GameObject_System_Int32_ {
  struct GameObject * key;
  int32_t value;
};
struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Boxed {
  struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_GameObject_System_Int32_ fields;
};
struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Array {
  struct KeyValuePair_2_UnityEngine_GameObject_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_GameObject_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SceneRootData__Fields {
  struct List_1_Portal_ * Portals;
  struct List_1_LegacyDoor_ * Doors;
};
struct SceneRootData {
  struct SceneRootData__Class *klass;
  struct MonitorData *monitor;
  struct SceneRootData__Fields fields;
};
struct __declspec(align(8)) List_1_Portal___Fields {
  struct Portal__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Portal_ {
  struct List_1_Portal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Portal___Fields fields;
};
struct Portal__Fields {
  struct MonoBehaviour__Fields _;
  bool IsLeftPortal;
  struct String * OtherPortalName;
  struct Portal * Other;
  float DelayToPortal;
  struct Condition_1 * Condition;
  bool m_insideFrustum;
  bool m_isPrewarmed;
  struct Renderer__Array * m_cachedRenderes;
  struct Bounds BoundingBox;
  struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ * m_portalVisitors;
  struct SoundHost * m_soundHost;
  struct Event_1 * PortalLoopSoundEvent;
  struct Event_1 * TeleportSoundEvent;
  struct Event_1 * AnticipationSoundEvent;
  struct Event_1 * EnterAnticipationSoundEvent;
  struct Event_1 * ExitAnticipationSoundEvent;
  struct GameObject * EnterEffect;
  struct GameObject * ExitEffect;
  struct GameObject * AnticipationEnterEffect;
  struct GameObject * AnticipationExitEffect;
  struct GameObject * m_anticipationEnterEffect;
  struct GameObject * m_anticipationExitEffect;
  struct BaseAnimator * m_anticipationEnterEffectAnimator;
  struct BaseAnimator * m_anticipationExitEffectAnimator;
  bool HasAnticipationEffects;
  bool CenterEffects;
  struct List_1_Portal_AssistConfig_ * AssistSettings;
  struct WwiseEventSystem_SoundHandle m_lastLoopSoundHandle;
  struct WwiseEventSystem_SoundHandle m_anticipationSoundHandle;
  float AnticipationRadius;
  bool m_wasOriInsideAnticipationZone;
  bool EnableDebugLog;
  int32_t m_suspensionTicket;
};}