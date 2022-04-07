namespace app {
struct IkLimbPostprocess {
  struct IkLimbPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct IkLimbPostprocess__Fields fields;
};
struct IkLimbPostprocess__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_RequiresOnUpdate;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData OnUpdate_1;
  VirtualInvokeData get_TotalWeight;
  VirtualInvokeData get_HasFinished;
  VirtualInvokeData get_Order;
  VirtualInvokeData OnPostEnable;
  VirtualInvokeData OnPostDisable;
  VirtualInvokeData OnAddedToAnimator;
  VirtualInvokeData OnRemovedFromAnimator;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData Process;
  VirtualInvokeData OnSceneGui;
};
struct IkLimbPostprocess__StaticFields {
};
struct IkLimbPostprocess__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IkLimbPostprocess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IkLimbPostprocess__VTable vtable;
};

struct AnimationPostprocess__Array {
  struct AnimationPostprocess__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationPostprocess * vector[32];
};

struct MoonAnimator_LayersUpdateResult {
  bool AnyActive;
  bool TopologyChanged;
};
struct MoonAnimator_LayersUpdateResult__Boxed {
  struct MoonAnimator_LayersUpdateResult__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_LayersUpdateResult fields;
};
struct MoonAnimator_LayersUpdateResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonAnimator_LayersUpdateResult__StaticFields {
};
struct MoonAnimator_LayersUpdateResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimator_LayersUpdateResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimator_LayersUpdateResult__VTable vtable;
};

struct MoonAnimator_CrossfadeAnimation__Fields {
  struct MoonAnimation__Fields _;
  struct MoonAnimator_AnimationInstance * Source;
  struct MoonAnimator_AnimationInstance * Target;
  struct AnimationTransition * Transition;
  struct Nullable_1_Single_ CrossfadeTimeOverride;
};
struct MoonAnimator_CrossfadeAnimation {
  struct MoonAnimator_CrossfadeAnimation__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_CrossfadeAnimation__Fields fields;
};
struct MoonAnimator_CrossfadeAnimation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Layer;
  VirtualInvokeData Moon_IAnimation_get_AnimatorDefinition;
  VirtualInvokeData get_DefaultTransitionInDuration;
  VirtualInvokeData get_UseDefaultTransitionIn;
  VirtualInvokeData get_DefaultTransitionIn;
  VirtualInvokeData get_LayerBlendInDuration;
  VirtualInvokeData get_LayerBlendOutDuration;
  VirtualInvokeData get_DisabledPostprocessGroups;
  VirtualInvokeData get_PostprocessGroupModifiers;
  VirtualInvokeData get_Type;
  VirtualInvokeData Moon_IAnimation_get_AdditiveWeightMultiplier;
  VirtualInvokeData GetTransition;
  VirtualInvokeData IsLooping;
  VirtualInvokeData GetDuration;
  VirtualInvokeData get_Type_1;
  VirtualInvokeData get_BlendTreeSize;
  VirtualInvokeData CollectAnimations;
  VirtualInvokeData IsLooping_1;
  VirtualInvokeData GetDuration_1;
  VirtualInvokeData GetFrameRate;
  VirtualInvokeData CollectParameters;
  VirtualInvokeData CollectAnimationClips;
  VirtualInvokeData PrepareRootMotionEvaluation;
  VirtualInvokeData EvaluateRootMotion;
};
struct MoonAnimator_CrossfadeAnimation__StaticFields {
  struct MoonAnimator_CrossfadeAnimation * s_instance;
};
struct MoonAnimator_CrossfadeAnimation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimator_CrossfadeAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimator_CrossfadeAnimation__VTable vtable;
};

struct __declspec(align(8)) MoonAnimator_c_DisplayClass54_0__Fields {
  float time;
  struct MoonAnimator * __4__this;
};
struct MoonAnimator_c_DisplayClass54_0 {
  struct MoonAnimator_c_DisplayClass54_0__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_c_DisplayClass54_0__Fields fields;
};
struct MoonAnimator_c_DisplayClass54_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonAnimator_c_DisplayClass54_0__StaticFields {
};
struct MoonAnimator_c_DisplayClass54_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimator_c_DisplayClass54_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimator_c_DisplayClass54_0__VTable vtable;
};

struct MoonAnimator_c {
  struct MoonAnimator_c__Class *klass;
  struct MonitorData *monitor;
};
struct MoonAnimator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonAnimator_c__StaticFields {
  struct MoonAnimator_c * __9;
  struct Action_1_UnityEngine_Vector3_ * __9__202_0;
  struct Action_1_UnityEngine_Quaternion_ * __9__202_1;
  struct Action_1_UnityEngine_Vector3_ * __9__208_0;
  struct Action_1_UnityEngine_Quaternion_ * __9__208_1;
  struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_ * __9__208_2;
  struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_ * __9__208_3;
  struct Action_2_Moon_FloatAnimationParameter_Single_ * __9__208_4;
  struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_ * __9__208_5;
};
struct MoonAnimator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimator_c__VTable vtable;
};

struct MoonAnimatorSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct PlayableGraph _PlayableGraph_k__BackingField;
  struct List_1_Moon_MoonAnimator_ * m_animators;
  struct Queue_1_Moon_MoonAnimator_ * m_unregisterQueue;
  int32_t m_processedAnimatorIndex;
  bool m_updating;
};
struct MoonAnimatorSystem {
  struct MoonAnimatorSystem__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorSystem__Fields fields;
};
struct MoonAnimatorSystem_AnimatorPriorityComparer {
  struct MoonAnimatorSystem_AnimatorPriorityComparer__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Queue_1_Moon_MoonAnimator___Fields {
  struct MoonAnimator__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_MoonAnimator_ {
  struct Queue_1_Moon_MoonAnimator___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_MoonAnimator___Fields fields;
};
struct MoonAnimatorSystem_AnimatorPriorityComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct MoonAnimatorSystem_AnimatorPriorityComparer__StaticFields {
};
struct MoonAnimatorSystem_AnimatorPriorityComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimatorSystem_AnimatorPriorityComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimatorSystem_AnimatorPriorityComparer__VTable vtable;
};
struct Queue_1_Moon_MoonAnimator___VTable {
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
struct Queue_1_Moon_MoonAnimator___StaticFields {
};
struct Queue_1_Moon_MoonAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_MoonAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_MoonAnimator___VTable vtable;
};
struct MoonAnimatorSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct MoonAnimatorSystem__StaticFields {
  struct List_1_Moon_MoonAnimator_ * m_previewMoonAnimators;
  bool EnablePostprocessUpdate;
  bool EnablePostAnimationCullingOptimization;
  struct MoonAnimatorSystem * m_instance;
  struct MoonAnimatorSystem_AnimatorPriorityComparer * m_animatorPriorityComparer;
};
struct MoonAnimatorSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimatorSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimatorSystem__VTable vtable;
};

struct MoonAnimatorSystem_UpdateGuard {
  struct MoonAnimatorSystem * m_system;
};
struct MoonAnimatorSystem_UpdateGuard__Boxed {
  struct MoonAnimatorSystem_UpdateGuard__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorSystem_UpdateGuard fields;
};
struct MoonAnimatorSystem_UpdateGuard__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct MoonAnimatorSystem_UpdateGuard__StaticFields {
};
struct MoonAnimatorSystem_UpdateGuard__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimatorSystem_UpdateGuard__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimatorSystem_UpdateGuard__VTable vtable;
};

struct __declspec(align(8)) MoonAnimatorSystem_c_DisplayClass27_0__Fields {
  struct MoonAnimator * animator;
};
struct MoonAnimatorSystem_c_DisplayClass27_0 {
  struct MoonAnimatorSystem_c_DisplayClass27_0__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorSystem_c_DisplayClass27_0__Fields fields;
};
struct MoonAnimatorSystem_c_DisplayClass27_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonAnimatorSystem_c_DisplayClass27_0__StaticFields {
};
struct MoonAnimatorSystem_c_DisplayClass27_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimatorSystem_c_DisplayClass27_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimatorSystem_c_DisplayClass27_0__VTable vtable;
};

struct InverseKinematicsPostprocess__Fields {
  struct AnimationPostprocess__Fields _;
  struct JointChain * Chain;
  struct VectorAnimationParameter * TargetParameter;
  int32_t OrderNumber;
  float WeightOverride;
  bool UseWeightOverride;
  bool AllowFindInactiveChildren;
  struct IK * m_ik;
};
struct InverseKinematicsPostprocess {
  struct InverseKinematicsPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct InverseKinematicsPostprocess__Fields fields;
};
struct JointChain__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform__Array * Data;
};
struct JointChain {
  struct JointChain__Class *klass;
  struct MonitorData *monitor;
  struct JointChain__Fields fields;
};
struct JointChain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JointChain__StaticFields {
};
struct JointChain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JointChain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JointChain__VTable vtable;
};
struct InverseKinematicsPostprocess__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_RequiresOnUpdate;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData OnUpdate_1;
  VirtualInvokeData get_TotalWeight;
  VirtualInvokeData get_HasFinished;
  VirtualInvokeData get_Order;
  VirtualInvokeData OnPostEnable;
  VirtualInvokeData OnPostDisable;
  VirtualInvokeData OnAddedToAnimator;
  VirtualInvokeData OnRemovedFromAnimator;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData Process;
  VirtualInvokeData OnSceneGui;
};
struct InverseKinematicsPostprocess__StaticFields {
};
struct InverseKinematicsPostprocess__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InverseKinematicsPostprocess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InverseKinematicsPostprocess__VTable vtable;
};

struct InverseKinematicsSettings__Fields {
  struct AnimationMaskNode__Fields _;
  struct InverseKinematicsSolver_AngleRestriction * AngleRestrictions;
};
struct InverseKinematicsSettings {
  struct InverseKinematicsSettings__Class *klass;
  struct MonitorData *monitor;
  struct InverseKinematicsSettings__Fields fields;
};
struct __declspec(align(8)) InverseKinematicsSolver_AngleRestriction__Fields {
  bool xAxis;
  float xMin;
  float xMax;
  bool yAxis;
  float yMin;
  float yMax;
  bool zAxis;
  float zMin;
  float zMax;
};
struct InverseKinematicsSolver_AngleRestriction {
  struct InverseKinematicsSolver_AngleRestriction__Class *klass;
  struct MonitorData *monitor;
  struct InverseKinematicsSolver_AngleRestriction__Fields fields;
};
struct InverseKinematicsSolver_AngleRestriction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InverseKinematicsSolver_AngleRestriction__StaticFields {
};
struct InverseKinematicsSolver_AngleRestriction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InverseKinematicsSolver_AngleRestriction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InverseKinematicsSolver_AngleRestriction__VTable vtable;
};
struct InverseKinematicsSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InverseKinematicsSettings__StaticFields {
};
struct InverseKinematicsSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InverseKinematicsSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InverseKinematicsSettings__VTable vtable;
};

struct __declspec(align(8)) InverseKinematicsSolver__Fields {
  struct Vector3 Target;
  struct List_1_Moon_InverseKinematicsSolver_JointEntity_ * JointEntities;
  bool IsDamping;
  float DampingMax;
};
struct InverseKinematicsSolver {
  struct InverseKinematicsSolver__Class *klass;
  struct MonitorData *monitor;
  struct InverseKinematicsSolver__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_InverseKinematicsSolver_JointEntity___Fields {
  struct InverseKinematicsSolver_JointEntity__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_InverseKinematicsSolver_JointEntity_ {
  struct List_1_Moon_InverseKinematicsSolver_JointEntity___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_InverseKinematicsSolver_JointEntity___Fields fields;
};
struct __declspec(align(8)) InverseKinematicsSolver_JointEntity__Fields {
  struct Transform * Joint;
  struct InverseKinematicsSolver_AngleRestriction * AngleRestrictionRange;
};
struct InverseKinematicsSolver_JointEntity {
  struct InverseKinematicsSolver_JointEntity__Class *klass;
  struct MonitorData *monitor;
  struct InverseKinematicsSolver_JointEntity__Fields fields;
};
struct InverseKinematicsSolver_JointEntity__Array {
  struct InverseKinematicsSolver_JointEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InverseKinematicsSolver_JointEntity * vector[32];
};
struct IEnumerator_1_Moon_InverseKinematicsSolver_JointEntity_ {
  struct IEnumerator_1_Moon_InverseKinematicsSolver_JointEntity___Class *klass;
  struct MonitorData *monitor;
};
struct InverseKinematicsSolver_JointEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InverseKinematicsSolver_JointEntity__StaticFields {
};
struct InverseKinematicsSolver_JointEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InverseKinematicsSolver_JointEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InverseKinematicsSolver_JointEntity__VTable vtable;
};
struct IEnumerator_1_Moon_InverseKinematicsSolver_JointEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_InverseKinematicsSolver_JointEntity___StaticFields {
};
struct IEnumerator_1_Moon_InverseKinematicsSolver_JointEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_InverseKinematicsSolver_JointEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_InverseKinematicsSolver_JointEntity___VTable vtable;
};
struct List_1_Moon_InverseKinematicsSolver_JointEntity___VTable {
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
struct List_1_Moon_InverseKinematicsSolver_JointEntity___StaticFields {
  struct InverseKinematicsSolver_JointEntity__Array * _emptyArray;
};
struct List_1_Moon_InverseKinematicsSolver_JointEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_InverseKinematicsSolver_JointEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_InverseKinematicsSolver_JointEntity___VTable vtable;
};
struct InverseKinematicsSolver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InverseKinematicsSolver__StaticFields {
};
struct InverseKinematicsSolver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InverseKinematicsSolver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InverseKinematicsSolver__VTable vtable;
};

struct JointChains__Fields {
  struct MonoBehaviour__Fields _;
  struct JointChains_Chain__Array * Chains;
};
struct JointChains {
  struct JointChains__Class *klass;
  struct MonitorData *monitor;
  struct JointChains__Fields fields;
};
struct __declspec(align(8)) JointChains_Chain__Fields {
  struct Transform__Array * Data;
};
struct JointChains_Chain {
  struct JointChains_Chain__Class *klass;
  struct MonitorData *monitor;
  struct JointChains_Chain__Fields fields;
};
struct JointChains_Chain__Array {
  struct JointChains_Chain__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JointChains_Chain * vector[32];
};
struct JointChains_Chain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JointChains_Chain__StaticFields {
};
struct JointChains_Chain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JointChains_Chain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JointChains_Chain__VTable vtable;
};
struct JointChains__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JointChains__StaticFields {
};
struct JointChains__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JointChains__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JointChains__VTable vtable;
};

struct MoonAnimatorParallelUpdater__Fields {
  struct MonoBehaviour__Fields _;
  struct PlayableGraph m_playableGraph;
  struct MoonAnimatorParallelUpdater_AnimatorState__Array * m_animatorStates;
  int32_t m_validAnimatorStatesCount;
  enum UpdateType__Enum _UpdateType_k__BackingField;
};
struct MoonAnimatorParallelUpdater {
  struct MoonAnimatorParallelUpdater__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorParallelUpdater__Fields fields;
};
struct MoonAnimatorParallelUpdater_AnimatorState {
  struct MoonAnimator * Animator;
  bool ShouldEvaluate;
  bool ShouldEvaluateGraph;
  bool ShouldEvaluatePostprocess;
};
struct MoonAnimatorParallelUpdater_AnimatorState__Boxed {
  struct MoonAnimatorParallelUpdater_AnimatorState__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorParallelUpdater_AnimatorState fields;
};
struct MoonAnimatorParallelUpdater_AnimatorState__Array {
  struct MoonAnimatorParallelUpdater_AnimatorState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimatorParallelUpdater_AnimatorState vector[32];
};
struct MoonAnimatorParallelUpdater_AnimatorState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonAnimatorParallelUpdater_AnimatorState__StaticFields {
};
struct MoonAnimatorParallelUpdater_AnimatorState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimatorParallelUpdater_AnimatorState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimatorParallelUpdater_AnimatorState__VTable vtable;
};
struct MoonAnimatorParallelUpdater__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct MoonAnimatorParallelUpdater__StaticFields {
  struct MoonAnimatorParallelUpdater * m_instance;
  bool UseGameObjectsMoonReady;
  struct List_1_Moon_MoonAnimator_ * Animators;
};
struct MoonAnimatorParallelUpdater__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimatorParallelUpdater__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimatorParallelUpdater__VTable vtable;
};

struct PlayAnimationOnStart__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonAnimation * Animation;
};
struct PlayAnimationOnStart {
  struct PlayAnimationOnStart__Class *klass;
  struct MonitorData *monitor;
  struct PlayAnimationOnStart__Fields fields;
};
struct PlayAnimationOnStart__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayAnimationOnStart__StaticFields {
};
struct PlayAnimationOnStart__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayAnimationOnStart__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayAnimationOnStart__VTable vtable;
};

struct SimpleSwayAnimPostprocess_Params {
  float Gravity;
  float FracPow;
  float Acceleration;
  float Damping;
  float DampingWater;
  float MaxDeviationPercentage;
  float MaxDeviationPivotFrac;
};
struct SimpleSwayAnimPostprocess_Params__Boxed {
  struct SimpleSwayAnimPostprocess_Params__Class *klass;
  struct MonitorData *monitor;
  struct SimpleSwayAnimPostprocess_Params fields;
};
struct SimpleSwayAnimPostprocess_PerFrameReadOnly {
  float axx;
  float gravity;
  float damping;
  float weight;
  float dt;
  float dtInv;
  bool DebugDraw;
};
struct SimpleSwayAnimPostprocess_PerFrameReadOnly__Boxed {
  struct SimpleSwayAnimPostprocess_PerFrameReadOnly__Class *klass;
  struct MonitorData *monitor;
  struct SimpleSwayAnimPostprocess_PerFrameReadOnly fields;
};
struct SimpleSwayAnimPostprocess__Fields {
  struct AnimationPostprocess__Fields _;
  struct VerletPhysicsAnimationPostprocess * FancyPostprocess;
  int32_t OrderNumber;
  struct JointChains * JointChains;
  bool InWater;
  struct SimpleSwayAnimPostprocess_Params m_params;
  bool ForceUpdateParamsEachFrame;
  bool DebugDraw;
  bool m_wasJustActivated;
  struct JointChains_Chain__Array * m_chains;
  bool m_swaysInitialized;
  struct SimpleSwayAnimPostprocess_SwayChain__Array * m_sways;
  struct SimpleSwayAnimPostprocess_PerFrameReadOnly m_common;
};
struct SimpleSwayAnimPostprocess {
  struct SimpleSwayAnimPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct SimpleSwayAnimPostprocess__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_SimpleSwayAnimPostprocess___Fields {
  struct SimpleSwayAnimPostprocess__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_SimpleSwayAnimPostprocess_ {
  struct List_1_Moon_SimpleSwayAnimPostprocess___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_SimpleSwayAnimPostprocess___Fields fields;
};
struct SimpleSwayAnimPostprocess__Array {
  struct SimpleSwayAnimPostprocess__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SimpleSwayAnimPostprocess * vector[32];
};
struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess_ {
  struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess___Class *klass;
  struct MonitorData *monitor;
};
struct VerletPhysicsAnimationPostprocess__Fields {
  struct AnimationPostprocess__Fields _;
  int32_t OrderNumber;
  struct JointChains * JointChains;
  struct Vector3 BoneDirectionAxis;
  bool AutoDetectBoneDirectionAxis;
  int32_t VerletIterationCount;
  bool AnimateLastJointRotation;
  float LastLinkLength;
  struct VectorAnimationParameter * AdditionalForceParameter;
  struct Vector3 AdditionalForce;
  struct Vector3 TurbulenceForce;
  float TurbulenceOscillationSpeed;
  bool AttenuateTurbulence;
  float AnimationPoseRetainForce;
  bool UseAnimationPoseRetainForceTip;
  float AnimationPoseRetainForceTip;
  float AnimationPoseRetainForceDuringCrossfade;
  float AnimationRetainForceGravityFactor;
  float DampingRoot;
  float DampingTip;
  float AngularLimit;
  float Stiffness;
  float Gravity;
  bool JointsAreAnimated;
  bool DebugDraw;
  bool Jobify;
  bool UseOptimizedValueWriteout;
  bool DetectDeterminantSignChange;
  float DistanceTolerance;
  float AngleTolerance;
  float MaxRootDeviationFromPoseDistance;
  float MaxDeviationFromPoseDistance;
  bool OnlyEnableDuringBaseLayerAnimationCrossfade;
  float CrossfadeEnableBlendInSpeed;
  float CrossfadeEnableBlendOutSpeed;
  float CrossfadeEnableMinWeight;
  bool MakeThreadSafe;
  bool ForceBlockOnJobCompletion;
  struct IRng * m_rng;
  bool m_wasJustActivated;
  int32_t m_transformDeterminantSign;
  bool m_useJobs;
  struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_ * m_verletChains;
  struct JobHandle m_jobHandle;
  float m_simulationTime;
  float m_crossfadeBasedWeight;
};
struct VerletPhysicsAnimationPostprocess {
  struct VerletPhysicsAnimationPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct VerletPhysicsAnimationPostprocess__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Fields {
  struct VerletPhysicsAnimationPostprocess_VerletChain__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_ {
  struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Fields fields;
};
struct __declspec(align(8)) VerletPhysicsAnimationPostprocess_VerletChain__Fields {
  struct Vector3 TurbulenceForce;
  bool HasTurbulenceForce;
  struct Quaternion RootParentRotation;
  struct Quaternion RootWorldRotation;
  struct Matrix4x4 RootWorldMatrix;
  struct Matrix4x4 RootLocalMatrix;
  struct VerletBodyIndexed * Body;
  struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_ * Joints;
};
struct VerletPhysicsAnimationPostprocess_VerletChain {
  struct VerletPhysicsAnimationPostprocess_VerletChain__Class *klass;
  struct MonitorData *monitor;
  struct VerletPhysicsAnimationPostprocess_VerletChain__Fields fields;
};
struct VerletPhysicsAnimationPostprocess_VerletChain__Array {
  struct VerletPhysicsAnimationPostprocess_VerletChain__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VerletPhysicsAnimationPostprocess_VerletChain * vector[32];
};
struct __declspec(align(8)) VerletBodyIndexed__Fields {
  int32_t LinksAccuracy;
  struct Vector3 Gravity;
  float DistanceTolerance;
  float AngleTolerance;
  struct VerletBodyIndexed_Point__Array * Points;
  struct VerletBodyIndexed_Link__Array * Links;
  struct VerletBodyIndexed_AngularConstraint__Array * AngularConstraints;
};
struct VerletBodyIndexed {
  struct VerletBodyIndexed__Class *klass;
  struct MonitorData *monitor;
  struct VerletBodyIndexed__Fields fields;
};
struct VerletBodyIndexed_Point {
  struct Vector3 PrevPosition;
  struct Vector3 Position;
  struct Vector3 Acceleration;
  float Damping;
  float InverseMass;
};
struct VerletBodyIndexed_Point__Boxed {
  struct VerletBodyIndexed_Point__Class *klass;
  struct MonitorData *monitor;
  struct VerletBodyIndexed_Point fields;
};
struct VerletBodyIndexed_Point__Array {
  struct VerletBodyIndexed_Point__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VerletBodyIndexed_Point vector[32];
};
struct VerletBodyIndexed_Link {
  int32_t IndexP0;
  int32_t IndexP1;
  float RestDistance;
  float Stiffness;
};
struct VerletBodyIndexed_Link__Boxed {
  struct VerletBodyIndexed_Link__Class *klass;
  struct MonitorData *monitor;
  struct VerletBodyIndexed_Link fields;
};
struct VerletBodyIndexed_Link__Array {
  struct VerletBodyIndexed_Link__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VerletBodyIndexed_Link vector[32];
};
struct VerletBodyIndexed_AngularConstraint {
  int32_t IndexL0;
  int32_t IndexL1;
  float MaxAngle;
};
struct VerletBodyIndexed_AngularConstraint__Boxed {
  struct VerletBodyIndexed_AngularConstraint__Class *klass;
  struct MonitorData *monitor;
  struct VerletBodyIndexed_AngularConstraint fields;
};
struct VerletBodyIndexed_AngularConstraint__Array {
  struct VerletBodyIndexed_AngularConstraint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VerletBodyIndexed_AngularConstraint vector[32];
};
struct __declspec(align(8)) List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Fields {
  struct VerletPhysicsAnimationPostprocess_JointMetadata__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_ {
  struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Fields fields;
};
struct __declspec(align(8)) VerletPhysicsAnimationPostprocess_JointMetadata__Fields {
  struct Transform * InstanceTransform;
  bool HasInstanceTransform;
  struct Vector3 InstancePosition;
  struct Vector3 InstanceRootLocalPosition;
  struct Quaternion AnimationOutputJointRotation;
  struct Vector3 AnimationOutputJointPosition;
  struct Quaternion ResultLocalRotation;
  struct Quaternion CachedLocalRotation;
  struct Quaternion PreviousLocalRotation;
  int32_t VerletPointIndex;
  int32_t VerletLinkIndex;
  struct Vector3 Axis;
  struct Vector3 OriginalLocalPosition;
  struct Quaternion OriginalLocalRotation;
  float TurbulenceOffset;
  struct Vector3 AxisDirection;
};
struct VerletPhysicsAnimationPostprocess_JointMetadata {
  struct VerletPhysicsAnimationPostprocess_JointMetadata__Class *klass;
  struct MonitorData *monitor;
  struct VerletPhysicsAnimationPostprocess_JointMetadata__Fields fields;
};}