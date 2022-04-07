namespace app {
struct PlayerHoldingLarvaCondition {
  struct PlayerHoldingLarvaCondition__Class *klass;
  struct MonitorData *monitor;
  struct PlayerHoldingLarvaCondition__Fields fields;
};
struct PlayerHoldingLarvaCondition__VTable {
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
struct PlayerHoldingLarvaCondition__StaticFields {
};
struct PlayerHoldingLarvaCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerHoldingLarvaCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerHoldingLarvaCondition__VTable vtable;
};

struct Toad__Fields {
  struct SaveSerialize__Fields _;
  struct Toad_AnimationEventAction__Array * AnimationEventActions;
  struct GameObject * Rig;
  struct Condition_1 * StartRevealedCondition;
  struct Animator * m_animator;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct Toad {
  struct Toad__Class *klass;
  struct MonitorData *monitor;
  struct Toad__Fields fields;
};
struct __declspec(align(8)) Toad_AnimationEventAction__Fields {
  struct String * EventId;
  struct ActionMethod * Action;
};
struct Toad_AnimationEventAction {
  struct Toad_AnimationEventAction__Class *klass;
  struct MonitorData *monitor;
  struct Toad_AnimationEventAction__Fields fields;
};
struct Toad_AnimationEventAction__Array {
  struct Toad_AnimationEventAction__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Toad_AnimationEventAction * vector[32];
};
struct Toad_AnimationEventAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Toad_AnimationEventAction__StaticFields {
};
struct Toad_AnimationEventAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Toad_AnimationEventAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Toad_AnimationEventAction__VTable vtable;
};
struct Toad__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData OnStateMachineBehaviourEnter;
  VirtualInvokeData OnStateMachineBehaviourUpdate;
  VirtualInvokeData OnStateMachineBehaviourExit;
  VirtualInvokeData OnAnimationEvent;
  VirtualInvokeData OnAnimationEvent_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct Toad__StaticFields {
};
struct Toad__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Toad__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Toad__VTable vtable;
};

enum RiseSinkSwitch_RiseSinkState__Enum : int32_t {
  RiseSinkSwitch_RiseSinkState__Enum_Rise = 0,
  RiseSinkSwitch_RiseSinkState__Enum_Sink = 1,
  RiseSinkSwitch_RiseSinkState__Enum_Up = 2,
  RiseSinkSwitch_RiseSinkState__Enum_Down = 3,
};
struct RiseSinkSwitch_RiseSinkState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RiseSinkSwitch_RiseSinkState__Enum value;
};
struct RiseSinkSwitch__Fields {
  struct SaveSerialize__Fields _;
  float SinkSpeed;
  float RiseSpeed;
  float SinkDistance;
  float MinMassToAffect;
  struct ActionMethod * OnPressedAction;
  struct Transform * TransformToAffect;
  bool TriggerOnce;
  bool m_wasTriggered;
  struct Vector3 m_startPosition;
  struct ListOfCollidedObjects * m_listOfCollidedObjects;
  bool m_active;
  enum RiseSinkSwitch_RiseSinkState__Enum State;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct RiseSinkSwitch {
  struct RiseSinkSwitch__Class *klass;
  struct MonitorData *monitor;
  struct RiseSinkSwitch__Fields fields;
};
struct RiseSinkSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct RiseSinkSwitch__StaticFields {
};
struct RiseSinkSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RiseSinkSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RiseSinkSwitch__VTable vtable;
};

struct TextureProvider__Fields {
  struct ScriptableObject__Fields _;
  struct Texture2D * DefaultTexture2D;
  struct List_1_TextureProvider_TetxureContidionPair_ * TextureConditionPairs;
};
struct TextureProvider {
  struct TextureProvider__Class *klass;
  struct MonitorData *monitor;
  struct TextureProvider__Fields fields;
};
struct __declspec(align(8)) List_1_TextureProvider_TetxureContidionPair___Fields {
  struct TextureProvider_TetxureContidionPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TextureProvider_TetxureContidionPair_ {
  struct List_1_TextureProvider_TetxureContidionPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TextureProvider_TetxureContidionPair___Fields fields;
};
struct __declspec(align(8)) TextureProvider_TetxureContidionPair__Fields {
  struct Texture2D * Texture2D;
  struct Condition_1 * Condition;
};
struct TextureProvider_TetxureContidionPair {
  struct TextureProvider_TetxureContidionPair__Class *klass;
  struct MonitorData *monitor;
  struct TextureProvider_TetxureContidionPair__Fields fields;
};
struct TextureProvider_TetxureContidionPair__Array {
  struct TextureProvider_TetxureContidionPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TextureProvider_TetxureContidionPair * vector[32];
};
struct IEnumerator_1_TextureProvider_TetxureContidionPair_ {
  struct IEnumerator_1_TextureProvider_TetxureContidionPair___Class *klass;
  struct MonitorData *monitor;
};
struct TextureProvider_TetxureContidionPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextureProvider_TetxureContidionPair__StaticFields {
};
struct TextureProvider_TetxureContidionPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextureProvider_TetxureContidionPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextureProvider_TetxureContidionPair__VTable vtable;
};
struct IEnumerator_1_TextureProvider_TetxureContidionPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TextureProvider_TetxureContidionPair___StaticFields {
};
struct IEnumerator_1_TextureProvider_TetxureContidionPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TextureProvider_TetxureContidionPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TextureProvider_TetxureContidionPair___VTable vtable;
};
struct List_1_TextureProvider_TetxureContidionPair___VTable {
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
struct List_1_TextureProvider_TetxureContidionPair___StaticFields {
  struct TextureProvider_TetxureContidionPair__Array * _emptyArray;
};
struct List_1_TextureProvider_TetxureContidionPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TextureProvider_TetxureContidionPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TextureProvider_TetxureContidionPair___VTable vtable;
};
struct TextureProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextureProvider__StaticFields {
};
struct TextureProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextureProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextureProvider__VTable vtable;
};

struct ConceptScreen__Fields {
  struct MonoBehaviour__Fields _;
  struct CleverMenuItemSelectionManager * Parent;
  struct Renderer * Screen;
  struct LegacyTransparencyAnimator * FadeIn;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct HashSet_1_Moon_ISuspendable_ * m_suspenables;
  int32_t m_index;
  struct SoundProvider * SwitchSound;
  struct SoundProvider * OpenSound;
  struct SoundProvider * CloseSound;
  struct List_1_ConceptScreen_ImageData_ * Images;
};
struct ConceptScreen {
  struct ConceptScreen__Class *klass;
  struct MonitorData *monitor;
  struct ConceptScreen__Fields fields;
};
struct __declspec(align(8)) List_1_ConceptScreen_ImageData___Fields {
  struct ConceptScreen_ImageData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ConceptScreen_ImageData_ {
  struct List_1_ConceptScreen_ImageData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ConceptScreen_ImageData___Fields fields;
};
struct __declspec(align(8)) ConceptScreen_ImageData__Fields {
  struct Texture2D * Texture;
  float Width;
  float Height;
};
struct ConceptScreen_ImageData {
  struct ConceptScreen_ImageData__Class *klass;
  struct MonitorData *monitor;
  struct ConceptScreen_ImageData__Fields fields;
};
struct ConceptScreen_ImageData__Array {
  struct ConceptScreen_ImageData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConceptScreen_ImageData * vector[32];
};
struct IEnumerator_1_ConceptScreen_ImageData_ {
  struct IEnumerator_1_ConceptScreen_ImageData___Class *klass;
  struct MonitorData *monitor;
};
struct ConceptScreen_ImageData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConceptScreen_ImageData__StaticFields {
};
struct ConceptScreen_ImageData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConceptScreen_ImageData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConceptScreen_ImageData__VTable vtable;
};
struct IEnumerator_1_ConceptScreen_ImageData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ConceptScreen_ImageData___StaticFields {
};
struct IEnumerator_1_ConceptScreen_ImageData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ConceptScreen_ImageData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ConceptScreen_ImageData___VTable vtable;
};
struct List_1_ConceptScreen_ImageData___VTable {
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
struct List_1_ConceptScreen_ImageData___StaticFields {
  struct ConceptScreen_ImageData__Array * _emptyArray;
};
struct List_1_ConceptScreen_ImageData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ConceptScreen_ImageData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ConceptScreen_ImageData___VTable vtable;
};
struct ConceptScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct ConceptScreen__StaticFields {
  struct ConceptScreen * Instance;
};
struct ConceptScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConceptScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConceptScreen__VTable vtable;
};

struct __declspec(align(8)) ConceptScreen_c_DisplayClass22_0__Fields {
  struct Texture * texture;
};
struct ConceptScreen_c_DisplayClass22_0 {
  struct ConceptScreen_c_DisplayClass22_0__Class *klass;
  struct MonitorData *monitor;
  struct ConceptScreen_c_DisplayClass22_0__Fields fields;
};
struct ConceptScreen_c_DisplayClass22_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConceptScreen_c_DisplayClass22_0__StaticFields {
};
struct ConceptScreen_c_DisplayClass22_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConceptScreen_c_DisplayClass22_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConceptScreen_c_DisplayClass22_0__VTable vtable;
};

struct ConceptScreenAction__Fields {
  struct ActionMethod__Fields _;
  struct Texture2D * Texture;
};
struct ConceptScreenAction {
  struct ConceptScreenAction__Class *klass;
  struct MonitorData *monitor;
  struct ConceptScreenAction__Fields fields;
};
struct ConceptScreenAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct ConceptScreenAction__StaticFields {
};
struct ConceptScreenAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConceptScreenAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConceptScreenAction__VTable vtable;
};

struct TitleScreenController__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * StartAction;
  bool m_hasRun;
};
struct TitleScreenController {
  struct TitleScreenController__Class *klass;
  struct MonitorData *monitor;
  struct TitleScreenController__Fields fields;
};
struct TitleScreenController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleScreenController__StaticFields {
};
struct TitleScreenController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleScreenController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleScreenController__VTable vtable;
};

struct ValleyOfTheWindKuroDeathZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Bounds Bounds;
};
struct ValleyOfTheWindKuroDeathZone {
  struct ValleyOfTheWindKuroDeathZone__Class *klass;
  struct MonitorData *monitor;
  struct ValleyOfTheWindKuroDeathZone__Fields fields;
};
struct __declspec(align(8)) List_1_ValleyOfTheWindKuroDeathZone___Fields {
  struct ValleyOfTheWindKuroDeathZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ValleyOfTheWindKuroDeathZone_ {
  struct List_1_ValleyOfTheWindKuroDeathZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ValleyOfTheWindKuroDeathZone___Fields fields;
};
struct ValleyOfTheWindKuroDeathZone__Array {
  struct ValleyOfTheWindKuroDeathZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ValleyOfTheWindKuroDeathZone * vector[32];
};
struct IEnumerator_1_ValleyOfTheWindKuroDeathZone_ {
  struct IEnumerator_1_ValleyOfTheWindKuroDeathZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ValleyOfTheWindKuroDeathZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ValleyOfTheWindKuroDeathZone___StaticFields {
};
struct IEnumerator_1_ValleyOfTheWindKuroDeathZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ValleyOfTheWindKuroDeathZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ValleyOfTheWindKuroDeathZone___VTable vtable;
};
struct List_1_ValleyOfTheWindKuroDeathZone___VTable {
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
struct List_1_ValleyOfTheWindKuroDeathZone___StaticFields {
  struct ValleyOfTheWindKuroDeathZone__Array * _emptyArray;
};
struct List_1_ValleyOfTheWindKuroDeathZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ValleyOfTheWindKuroDeathZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ValleyOfTheWindKuroDeathZone___VTable vtable;
};
struct ValleyOfTheWindKuroDeathZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ValleyOfTheWindKuroDeathZone__StaticFields {
  struct List_1_ValleyOfTheWindKuroDeathZone_ * All;
};
struct ValleyOfTheWindKuroDeathZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValleyOfTheWindKuroDeathZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValleyOfTheWindKuroDeathZone__VTable vtable;
};

struct ValleyOfTheWindKuroGameplayController__Fields {
  struct SaveSerialize__Fields _;
  float DeathDelay;
  struct GameObject * FlyingKuro;
  struct SoundProvider * AttackSound;
  float m_time;
  bool m_hasKilledPlayer;
  bool m_hasBeenSeen;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ValleyOfTheWindKuroGameplayController {
  struct ValleyOfTheWindKuroGameplayController__Class *klass;
  struct MonitorData *monitor;
  struct ValleyOfTheWindKuroGameplayController__Fields fields;
};
struct ValleyOfTheWindKuroGameplayController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct ValleyOfTheWindKuroGameplayController__StaticFields {
};
struct ValleyOfTheWindKuroGameplayController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValleyOfTheWindKuroGameplayController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValleyOfTheWindKuroGameplayController__VTable vtable;
};

struct ControlListOptions__Fields {
  struct CleverMenuOptionsList__Fields _;
};
struct ControlListOptions {
  struct ControlListOptions__Class *klass;
  struct MonitorData *monitor;
  struct ControlListOptions__Fields fields;
};
struct ControlListOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct ControlListOptions__StaticFields {
  struct ControlListOptions * Instance;
};
struct ControlListOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControlListOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControlListOptions__VTable vtable;
};

struct ControlScreenUIItem__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * ItemRoot;
  struct GameObject * Highlighter;
};
struct ControlScreenUIItem {
  struct ControlScreenUIItem__Class *klass;
  struct MonitorData *monitor;
  struct ControlScreenUIItem__Fields fields;
};
struct ControlScreenUIItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct ControlScreenUIItem__StaticFields {
};
struct ControlScreenUIItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControlScreenUIItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControlScreenUIItem__VTable vtable;
};

struct IsKeyboardSelectedCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsKeyboardSelectedCondition {
  struct IsKeyboardSelectedCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsKeyboardSelectedCondition__Fields fields;
};
struct IsKeyboardSelectedCondition__VTable {
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
struct IsKeyboardSelectedCondition__StaticFields {
};
struct IsKeyboardSelectedCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsKeyboardSelectedCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsKeyboardSelectedCondition__VTable vtable;
};

struct IEnumerable_1_CommandBinding_ {
  struct IEnumerable_1_CommandBinding___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_CommandBinding___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_CommandBinding___StaticFields {
};
struct IEnumerable_1_CommandBinding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_CommandBinding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_CommandBinding___VTable vtable;
};

struct __declspec(align(8)) List_1_CommandBinding___Fields {
  struct CommandBinding__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CommandBinding_ {
  struct List_1_CommandBinding___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CommandBinding___Fields fields;
};
struct CommandBinding__Array {
  struct CommandBinding__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CommandBinding * vector[32];
};
struct IEnumerator_1_CommandBinding_ {
  struct IEnumerator_1_CommandBinding___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_CommandBinding___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CommandBinding___StaticFields {
};
struct IEnumerator_1_CommandBinding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CommandBinding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CommandBinding___VTable vtable;
};
struct List_1_CommandBinding___VTable {
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
struct List_1_CommandBinding___StaticFields {
  struct CommandBinding__Array * _emptyArray;
};
struct List_1_CommandBinding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CommandBinding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CommandBinding___VTable vtable;
};

struct __declspec(align(8)) KeybindingCommandMapAsset_c_DisplayClass56_0__Fields {
  enum KeybindingCommandMapAsset_CommandBindingEnum__Enum bind;
};
struct KeybindingCommandMapAsset_c_DisplayClass56_0 {
  struct KeybindingCommandMapAsset_c_DisplayClass56_0__Class *klass;
  struct MonitorData *monitor;
  struct KeybindingCommandMapAsset_c_DisplayClass56_0__Fields fields;
};
struct KeybindingCommandMapAsset_c_DisplayClass56_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeybindingCommandMapAsset_c_DisplayClass56_0__StaticFields {
};
struct KeybindingCommandMapAsset_c_DisplayClass56_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeybindingCommandMapAsset_c_DisplayClass56_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeybindingCommandMapAsset_c_DisplayClass56_0__VTable vtable;
};

struct __declspec(align(8)) KeybindingCommandMapAsset_c_DisplayClass58_0__Fields {
  enum KeybindingCommandMapAsset_CommandBindingEnum__Enum bind;
};
struct KeybindingCommandMapAsset_c_DisplayClass58_0 {
  struct KeybindingCommandMapAsset_c_DisplayClass58_0__Class *klass;
  struct MonitorData *monitor;
  struct KeybindingCommandMapAsset_c_DisplayClass58_0__Fields fields;
};
struct KeybindingCommandMapAsset_c_DisplayClass58_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeybindingCommandMapAsset_c_DisplayClass58_0__StaticFields {
};
struct KeybindingCommandMapAsset_c_DisplayClass58_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeybindingCommandMapAsset_c_DisplayClass58_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeybindingCommandMapAsset_c_DisplayClass58_0__VTable vtable;
};

struct __declspec(align(8)) KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Fields {
  int32_t __1__state;
  struct CommandBinding * __2__current;
  int32_t __l__initialThreadId;
  struct KeybindingCommandMapAsset * __4__this;
  struct FieldInfo_1__Array * __7__wrap1;
  int32_t __7__wrap2;
};
struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62 {
  struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class *klass;
  struct MonitorData *monitor;
  struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Fields fields;
};
struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_CommandBinding__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_CommandBinding__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__StaticFields {
};
struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__VTable vtable;
};

struct __declspec(align(8)) BuilderItem__Fields {
  struct NpcProjectItem * Project;
};
struct BuilderItem {
  struct BuilderItem__Class *klass;
  struct MonitorData *monitor;
  struct BuilderItem__Fields fields;
};
struct NpcProjectItem__Fields {
  struct ScriptableObject__Fields _;
  struct MessageProvider * Name;
  struct MessageProvider * DiscoverProjectSiteMessage;
  struct MessageProvider * ProjectFinishedMessage;
  struct Texture2D * Icon;
  struct SerializedByteUberState * UberState;
  struct UpgradableProjectProperties__Array * LevelProperties;
  struct MoonTimeline * Timeline;
};
struct NpcProjectItem {
  struct NpcProjectItem__Class *klass;
  struct MonitorData *monitor;
  struct NpcProjectItem__Fields fields;
};
struct __declspec(align(8)) UpgradableProjectProperties__Fields {
  struct MessageProvider * Description;
  int32_t Cost;
};
struct UpgradableProjectProperties {
  struct UpgradableProjectProperties__Class *klass;
  struct MonitorData *monitor;
  struct UpgradableProjectProperties__Fields fields;
};
struct UpgradableProjectProperties__Array {
  struct UpgradableProjectProperties__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UpgradableProjectProperties * vector[32];
};
struct Action_1_MessageProvider___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_MessageProvider_ {
  struct Action_1_MessageProvider___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_MessageProvider___Fields fields;
};}