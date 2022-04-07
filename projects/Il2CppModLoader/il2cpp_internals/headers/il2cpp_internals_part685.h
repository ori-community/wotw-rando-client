namespace app {

struct __declspec(align(8)) MenuTabEntry__Fields {
  struct MessageProvider * Name;
  enum MenuScreenManager_Screens__Enum Screen;
};
struct MenuTabEntry {
  struct MenuTabEntry__Class *klass;
  struct MonitorData *monitor;
  struct MenuTabEntry__Fields fields;
};
struct MenuTabEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MenuTabEntry__StaticFields {
};
struct MenuTabEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MenuTabEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MenuTabEntry__VTable vtable;
};

struct MenuTabManager__Fields {
  struct MonoBehaviour__Fields _;
  struct UISoundSettingsAsset * Sounds;
  struct List_1_MenuTabEntry_ * Tabs;
  struct MoonTimelineUiFader * UiFader;
  struct GameObject * LegendUI;
  struct GameObject * LeftPageNameText;
  struct GameObject * RightPageNameText;
  int32_t m_currentTabIndex;
  bool m_mainMenuWasVisible;
  bool m_wasShowingPins;
  struct LegacyTransparencyAnimator * BlackBackgroundFadeAnimator;
  struct LegacyTransparencyAnimator * DarkBackgroundFadeAnimator;
  bool Loop;
  enum MenuTabBackground__Enum m_backgroundState;
  bool m_makeNextBackgroundFadeImediate;
  enum MenuTabBackground__Enum m_newState;
  bool m_wasPaused;
};
struct MenuTabManager {
  struct MenuTabManager__Class *klass;
  struct MonitorData *monitor;
  struct MenuTabManager__Fields fields;
};
struct __declspec(align(8)) List_1_MenuTabEntry___Fields {
  struct MenuTabEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MenuTabEntry_ {
  struct List_1_MenuTabEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MenuTabEntry___Fields fields;
};
struct MenuTabEntry__Array {
  struct MenuTabEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MenuTabEntry * vector[32];
};
struct IEnumerator_1_MenuTabEntry_ {
  struct IEnumerator_1_MenuTabEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_MenuTabEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MenuTabEntry___StaticFields {
};
struct IEnumerator_1_MenuTabEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MenuTabEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MenuTabEntry___VTable vtable;
};
struct List_1_MenuTabEntry___VTable {
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
struct List_1_MenuTabEntry___StaticFields {
  struct MenuTabEntry__Array * _emptyArray;
};
struct List_1_MenuTabEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MenuTabEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MenuTabEntry___VTable vtable;
};
struct MenuTabManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MenuTabManager__StaticFields {
  struct MenuTabManager * Instance;
};
struct MenuTabManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MenuTabManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MenuTabManager__VTable vtable;
};

struct MenuTabManager_c {
  struct MenuTabManager_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_MenuTabEntry_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_MenuTabEntry_Boolean_ {
  struct Func_2_MenuTabEntry_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_MenuTabEntry_Boolean___Fields fields;
};
struct Func_2_MenuTabEntry_Boolean___VTable {
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
struct Func_2_MenuTabEntry_Boolean___StaticFields {
};
struct Func_2_MenuTabEntry_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_MenuTabEntry_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_MenuTabEntry_Boolean___VTable vtable;
};
struct MenuTabManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MenuTabManager_c__StaticFields {
  struct MenuTabManager_c * __9;
  struct Func_2_MenuTabEntry_Boolean_ * __9__26_0;
  struct Func_2_MenuTabEntry_Boolean_ * __9__26_1;
  struct Action * __9__42_0;
};
struct MenuTabManager_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MenuTabManager_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MenuTabManager_c__VTable vtable;
};

enum SeinDoubleJumpPuppet_Event__Enum : int32_t {
  SeinDoubleJumpPuppet_Event__Enum_DoubleJump = 0,
};
struct SeinDoubleJumpPuppet_Event__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinDoubleJumpPuppet_Event__Enum value;
};

struct SeinIdlePuppet_c {
  struct SeinIdlePuppet_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinIdlePuppet_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinIdlePuppet_c__StaticFields {
  struct SeinIdlePuppet_c * __9;
  struct Func_1_Boolean_ * __9__27_0;
};
struct SeinIdlePuppet_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinIdlePuppet_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinIdlePuppet_c__VTable vtable;
};

enum SeinWallJumpPuppet_Event__Enum : int32_t {
  SeinWallJumpPuppet_Event__Enum_OnLeftJump = 0,
  SeinWallJumpPuppet_Event__Enum_OnLeftAwayJump = 1,
  SeinWallJumpPuppet_Event__Enum_OnLeftTowardsJump = 2,
  SeinWallJumpPuppet_Event__Enum_OnEdgeJump = 3,
  SeinWallJumpPuppet_Event__Enum_OnLeftRegularJump = 4,
  SeinWallJumpPuppet_Event__Enum_OnRightAwayJump = 5,
  SeinWallJumpPuppet_Event__Enum_OnRightTowardsJump = 6,
  SeinWallJumpPuppet_Event__Enum_OnRightRegularJump = 7,
};
struct SeinWallJumpPuppet_Event__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinWallJumpPuppet_Event__Enum value;
};

struct __declspec(align(8)) SeinWallJumpPuppet_AnimationEntry__Fields {
  struct MoonAnimation * Animation;
  struct Event_1 * ExtraSound;
};
struct SeinWallJumpPuppet_AnimationEntry {
  struct SeinWallJumpPuppet_AnimationEntry__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallJumpPuppet_AnimationEntry__Fields fields;
};
struct SeinWallJumpPuppet_AnimationEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinWallJumpPuppet_AnimationEntry__StaticFields {
};
struct SeinWallJumpPuppet_AnimationEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWallJumpPuppet_AnimationEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWallJumpPuppet_AnimationEntry__VTable vtable;
};

struct RECT {
  int32_t Left;
  int32_t Top;
  int32_t Right;
  int32_t Bottom;
};
struct RECT__Boxed {
  struct RECT__Class *klass;
  struct MonitorData *monitor;
  struct RECT fields;
};
struct RECT__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RECT__StaticFields {
};
struct RECT__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RECT__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RECT__VTable vtable;
};

struct WindowManager__Fields {
  struct MonoBehaviour__Fields _;
  int32_t m_borderlessSetCounter;
  float m_lastTimeCheckedMinimized;
  int32_t lastProps;
  bool m_firstTime;
  bool wasFullScreen;
  bool m_wasFocused;
  bool m_borderless;
  int32_t width;
  int32_t height;
  bool m_fullScreen;
};
struct WindowManager {
  struct WindowManager__Class *klass;
  struct MonitorData *monitor;
  struct WindowManager__Fields fields;
};
struct WindowManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WindowManager__StaticFields {
};
struct WindowManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindowManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindowManager__VTable vtable;
};

struct PerspectiveRotationSystem__Fields {
  struct MonoBehaviour__Fields _;
  bool Active;
  struct List_1_PerspectiveRotationAdjustment_ * m_targets;
  bool m_wasActive;
};
struct PerspectiveRotationSystem {
  struct PerspectiveRotationSystem__Class *klass;
  struct MonitorData *monitor;
  struct PerspectiveRotationSystem__Fields fields;
};
struct __declspec(align(8)) List_1_PerspectiveRotationAdjustment___Fields {
  struct PerspectiveRotationAdjustment__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PerspectiveRotationAdjustment_ {
  struct List_1_PerspectiveRotationAdjustment___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PerspectiveRotationAdjustment___Fields fields;
};
struct PerspectiveRotationAdjustment__Array {
  struct PerspectiveRotationAdjustment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PerspectiveRotationAdjustment * vector[32];
};
struct IEnumerator_1_PerspectiveRotationAdjustment_ {
  struct IEnumerator_1_PerspectiveRotationAdjustment___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PerspectiveRotationAdjustment___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PerspectiveRotationAdjustment___StaticFields {
};
struct IEnumerator_1_PerspectiveRotationAdjustment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PerspectiveRotationAdjustment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PerspectiveRotationAdjustment___VTable vtable;
};
struct List_1_PerspectiveRotationAdjustment___VTable {
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
struct List_1_PerspectiveRotationAdjustment___StaticFields {
  struct PerspectiveRotationAdjustment__Array * _emptyArray;
};
struct List_1_PerspectiveRotationAdjustment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PerspectiveRotationAdjustment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PerspectiveRotationAdjustment___VTable vtable;
};
struct PerspectiveRotationSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PerspectiveRotationSystem__StaticFields {
  struct PerspectiveRotationSystem * s_instance;
};
struct PerspectiveRotationSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerspectiveRotationSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerspectiveRotationSystem__VTable vtable;
};

struct AnimatedRigidBodyController__Fields {
  struct MonoBehaviour__Fields _;
  struct Rigidbody * rigidBody;
  struct Vector3 m_oldPosition;
  struct Quaternion m_oldRotation;
};
struct AnimatedRigidBodyController {
  struct AnimatedRigidBodyController__Class *klass;
  struct MonitorData *monitor;
  struct AnimatedRigidBodyController__Fields fields;
};
struct AnimatedRigidBodyController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimatedRigidBodyController__StaticFields {
};
struct AnimatedRigidBodyController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatedRigidBodyController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatedRigidBodyController__VTable vtable;
};

struct ApplyForceOnDamage__Fields {
  struct MonoBehaviour__Fields _;
  float ForceMagnitude;
  float ForceVerticalScale;
  struct GameObject * Target;
};
struct ApplyForceOnDamage {
  struct ApplyForceOnDamage__Class *klass;
  struct MonitorData *monitor;
  struct ApplyForceOnDamage__Fields fields;
};
struct ApplyForceOnDamage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData OnReceiveContext;
};
struct ApplyForceOnDamage__StaticFields {
};
struct ApplyForceOnDamage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ApplyForceOnDamage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ApplyForceOnDamage__VTable vtable;
};

struct ApplyPhysicalManagerState__Fields {
  struct MonoBehaviour__Fields _;
  struct PhysicalSystemManager * PhysicalSystemManager;
  struct String * stateName;
  struct LegacyTrigger * trigger;
  struct EventTriggerAnimator * timelineTrigger;
  struct MoonReference_1_IGenericUberState_ * TrackUberState;
  float UberStateFromValue;
  float UberStateToValue;
  float m_oldState;
};
struct ApplyPhysicalManagerState {
  struct ApplyPhysicalManagerState__Class *klass;
  struct MonitorData *monitor;
  struct ApplyPhysicalManagerState__Fields fields;
};
struct ApplyPhysicalManagerState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct ApplyPhysicalManagerState__StaticFields {
};
struct ApplyPhysicalManagerState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ApplyPhysicalManagerState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ApplyPhysicalManagerState__VTable vtable;
};

struct BreakableObject__Fields {
  struct MonoBehaviour__Fields _;
  int32_t NumberOfHitsToBreak;
  int32_t m_numberOfHits;
  struct GameObject * ExplosionEffect;
  struct AnimationCurve * ShardsFadeoutCurve;
};
struct BreakableObject {
  struct BreakableObject__Class *klass;
  struct MonitorData *monitor;
  struct BreakableObject__Fields fields;
};
struct BreakableObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BreakableObject__StaticFields {
};
struct BreakableObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BreakableObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BreakableObject__VTable vtable;
};

struct CollisionFilter__Fields {
  struct MonoBehaviour__Fields _;
  struct LayerMask LayersAllowedToCollide;
  struct Collider * m_collider;
};
struct CollisionFilter {
  struct CollisionFilter__Class *klass;
  struct MonitorData *monitor;
  struct CollisionFilter__Fields fields;
};
struct CollisionFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CollisionFilter__StaticFields {
};
struct CollisionFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollisionFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollisionFilter__VTable vtable;
};

struct DetachRopeOnStomp__Fields {
  struct MonoBehaviour__Fields _;
  int32_t DetachmentsPerStomp;
  struct AttachToRope__Array * RopeAttachments;
  struct Vector3 _Position_k__BackingField;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct DetachRopeOnStomp {
  struct DetachRopeOnStomp__Class *klass;
  struct MonitorData *monitor;
  struct DetachRopeOnStomp__Fields fields;
};
struct AttachToRope__Array {
  struct AttachToRope__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AttachToRope * vector[32];
};
struct DetachRopeOnStomp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
  VirtualInvokeData CountsTowardsSuperJumpAchievement;
};
struct DetachRopeOnStomp__StaticFields {
};
struct DetachRopeOnStomp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DetachRopeOnStomp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DetachRopeOnStomp__VTable vtable;
};

struct ExplodingRigidbody__Fields {
  struct MonoBehaviour__Fields _;
  struct AnimationCurve * ForceOverDistanceCurve;
  float Force;
  float ForceRandom;
  float TorqueRandom;
  bool ExplodeOnStart;
  struct Vector3 ExplodeOnStartDirection;
};
struct ExplodingRigidbody {
  struct ExplodingRigidbody__Class *klass;
  struct MonitorData *monitor;
  struct ExplodingRigidbody__Fields fields;
};
struct ExplodingRigidbody__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData OnReceiveContext;
};
struct ExplodingRigidbody__StaticFields {
};
struct ExplodingRigidbody__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExplodingRigidbody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExplodingRigidbody__VTable vtable;
};

struct ForceBasedFollow__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Target;
  float FollowTorqueMagnitude;
  float FollowTorqueXMagnitude;
  float FollowTorqueYMagnitude;
  float FollowForceMagnitude;
  float MinAngleDifference;
  bool SupportOppositeRotation;
};
struct ForceBasedFollow {
  struct ForceBasedFollow__Class *klass;
  struct MonitorData *monitor;
  struct ForceBasedFollow__Fields fields;
};
struct ForceBasedFollow__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ForceBasedFollow__StaticFields {
};
struct ForceBasedFollow__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ForceBasedFollow__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ForceBasedFollow__VTable vtable;
};

struct InetractionControllerPassthrough__Fields {
  struct MonoBehaviour__Fields _;
  struct RigidbodyInteractionController * interactionController;
};
struct InetractionControllerPassthrough {
  struct InetractionControllerPassthrough__Class *klass;
  struct MonitorData *monitor;
  struct InetractionControllerPassthrough__Fields fields;
};
struct RigidbodyInteractionController_InteractionInformation {
  struct Vector3 Normal;
  struct Vector3 Point;
  struct Vector3 RelativeVelocity;
  bool IsPlayer;
  int32_t Layer;
};
struct RigidbodyInteractionController_InteractionInformation__Boxed {
  struct RigidbodyInteractionController_InteractionInformation__Class *klass;
  struct MonitorData *monitor;
  struct RigidbodyInteractionController_InteractionInformation fields;
};
struct RigidbodyInteractionController__Fields {
  struct MonoBehaviour__Fields _;
  float MinTimeBetweenInteractions;
  struct RigidbodyInteractionController_InstanciationInteractionSettings__Array * CollisionEnterInstanciation;
  struct RigidbodyInteractionController_InstanciationInteractionSettings__Array * CollisionExitInstanciation;
  bool IncludeCollisionsOnChildren;
  struct RigidbodyInteractionController_SoundInteractionSettings__Array * CollisionEnterSound;
  struct RigidbodyInteractionController_SoundInteractionSettings__Array * CollisionExitSound;
  float m_lastCollisionTime;
  struct RigidbodyInteractionController_InteractionInformation m_lastInteraction;
};
struct RigidbodyInteractionController {
  struct RigidbodyInteractionController__Class *klass;
  struct MonitorData *monitor;
  struct RigidbodyInteractionController__Fields fields;
};
enum RigidbodyInteractionController_InstanciationPositionModes__Enum : int32_t {
  RigidbodyInteractionController_InstanciationPositionModes__Enum_FirstCollisionContactPoint = 1,
  RigidbodyInteractionController_InstanciationPositionModes__Enum_AllInteractionPoints = 20,
  RigidbodyInteractionController_InstanciationPositionModes__Enum_ClosestInteractionPoint = 30,
};
struct RigidbodyInteractionController_InstanciationPositionModes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RigidbodyInteractionController_InstanciationPositionModes__Enum value;
};
struct __declspec(align(8)) RigidbodyInteractionController_InstanciationInteractionSettings__Fields {
  float MinCollisionMagnitude;
  struct LayerMask InteractableLayers;
  struct GameObject * CollisionPrefab;
  enum RigidbodyInteractionController_InstanciationPositionModes__Enum InstanciationPosition;
  struct LocalSpacePointSet * InteractionPoints;
  struct Rect ParticleEmissionRemapping;
  int32_t PrewarmAmount;
};
struct RigidbodyInteractionController_InstanciationInteractionSettings {
  struct RigidbodyInteractionController_InstanciationInteractionSettings__Class *klass;
  struct MonitorData *monitor;
  struct RigidbodyInteractionController_InstanciationInteractionSettings__Fields fields;
};
struct RigidbodyInteractionController_InstanciationInteractionSettings__Array {
  struct RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RigidbodyInteractionController_InstanciationInteractionSettings * vector[32];
};
struct __declspec(align(8)) RigidbodyInteractionController_SoundInteractionSettings__Fields {
  float MinCollisionMagnitude;
  struct LayerMask InteractableLayers;
  struct SoundProvider * SoundProvider;
  struct Rect SoundVolumeRemapping;
  struct Event_1 * WiseEvent;
  struct RTPC * ImpactRtpc;
};
struct RigidbodyInteractionController_SoundInteractionSettings {
  struct RigidbodyInteractionController_SoundInteractionSettings__Class *klass;
  struct MonitorData *monitor;
  struct RigidbodyInteractionController_SoundInteractionSettings__Fields fields;
};
struct RigidbodyInteractionController_SoundInteractionSettings__Array {
  struct RigidbodyInteractionController_SoundInteractionSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RigidbodyInteractionController_SoundInteractionSettings * vector[32];
};
struct RigidbodyInteractionController_InstanciationInteractionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RigidbodyInteractionController_InstanciationInteractionSettings__StaticFields {
};
struct RigidbodyInteractionController_InstanciationInteractionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodyInteractionController_InstanciationInteractionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodyInteractionController_InstanciationInteractionSettings__VTable vtable;
};
struct RigidbodyInteractionController_SoundInteractionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RigidbodyInteractionController_SoundInteractionSettings__StaticFields {
};
struct RigidbodyInteractionController_SoundInteractionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodyInteractionController_SoundInteractionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodyInteractionController_SoundInteractionSettings__VTable vtable;
};
struct RigidbodyInteractionController_InteractionInformation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RigidbodyInteractionController_InteractionInformation__StaticFields {
};
struct RigidbodyInteractionController_InteractionInformation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodyInteractionController_InteractionInformation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodyInteractionController_InteractionInformation__VTable vtable;
};
struct RigidbodyInteractionController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RigidbodyInteractionController__StaticFields {
  struct List_1_UnityEngine_ParticleSystem_ * s_particleSystemList;
  struct List_1_UnityEngine_ParticleSystem_ * s_particleSystemListB;
};
struct RigidbodyInteractionController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodyInteractionController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodyInteractionController__VTable vtable;
};
struct InetractionControllerPassthrough__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InetractionControllerPassthrough__StaticFields {
};
struct InetractionControllerPassthrough__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InetractionControllerPassthrough__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InetractionControllerPassthrough__VTable vtable;
};

struct RigidbodyInteractionController_SoundInteractionInfo {
  struct RigidbodyInteractionController_SoundInteractionSettings * CollisionSound;
  float ImpactMagnitude;
};
struct RigidbodyInteractionController_SoundInteractionInfo__Boxed {
  struct RigidbodyInteractionController_SoundInteractionInfo__Class *klass;
  struct MonitorData *monitor;
  struct RigidbodyInteractionController_SoundInteractionInfo fields;
};
struct RigidbodyInteractionController_SoundInteractionInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RigidbodyInteractionController_SoundInteractionInfo__StaticFields {
};
struct RigidbodyInteractionController_SoundInteractionInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodyInteractionController_SoundInteractionInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodyInteractionController_SoundInteractionInfo__VTable vtable;
};

struct RopeVisualLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * LeftAttachment;
  struct Transform * RightAttachment;
  struct GameObject * RopeGraphic;
  float m_ropeOriginalScale;
};
struct RopeVisualLogic {
  struct RopeVisualLogic__Class *klass;
  struct MonitorData *monitor;
  struct RopeVisualLogic__Fields fields;
};
struct RopeVisualLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RopeVisualLogic__StaticFields {
};
struct RopeVisualLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RopeVisualLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RopeVisualLogic__VTable vtable;
};

struct SpawnPrefabOnAccelerationChange__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * PrefabToSpawn;
  float MinimalAccelerationToSpawn;
  float CooldownTime;
  float EmissionRatioMultiplier;
  int32_t PrewarmAmount;
  bool LimitAmountOfActiveInstance;
  struct InstantiationRecycleHelper * m_recycleHelper;
  struct Vector3 m_previousPosition;
  float m_lastInstanciationTime;
  float m_previousSpeed;
  enum SuspendableMask__Enum _Mask_k__BackingField;
  bool _IsSuspended_k__BackingField;
};
struct SpawnPrefabOnAccelerationChange {
  struct SpawnPrefabOnAccelerationChange__Class *klass;
  struct MonitorData *monitor;
  struct SpawnPrefabOnAccelerationChange__Fields fields;
};
struct SpawnPrefabOnAccelerationChange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct SpawnPrefabOnAccelerationChange__StaticFields {
};
struct SpawnPrefabOnAccelerationChange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpawnPrefabOnAccelerationChange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpawnPrefabOnAccelerationChange__VTable vtable;
};}