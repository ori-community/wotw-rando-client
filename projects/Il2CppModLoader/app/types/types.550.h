namespace app {
struct CartController {
    struct CartController__Class *klass;
    MonitorData *monitor;
    struct CartController__Fields fields;
};

struct Cart__Fields {
    struct LegacyEntity__Fields _;
    struct CartController *CartController;
    struct CartLogicCycle *LogicCycle;
    struct PlatformBehaviour *PlatformBehaviour;
    struct CartJump *CartJump;
    struct CartBoost *CartBoost;
    struct CartFlip *CartFlip;
    struct CapsuleCollider *Collider;
    struct Collider *SeinCollider;
    struct CartDamageCheckAction *CartDamage;
    struct GameObject *RidePosition;
    struct GameObject *AngleRaycastPosition;
    struct Transform *GoThroughAboveRailRaycastPosition;
    struct GameObject *CollisionRaycastAnchor;
    float MaxEnterDistance;
    float FlipDistance;
    struct CartSettings *Settings;
    struct GameObject *DestroyEffect;
    struct GameObject *LandEffect;
    struct LegacyTimelineSequence *ImpactSequence;
    struct MoonTimeline *ImpactSequenceNew;
    struct MoonTimeline *StopCarryingSequence;
    struct MoonTimeline *OnPlayerDeathSequence;
    struct MoonTimeline *LandSequence;
    struct MoonTimeline *BumperHitSequence;
    struct Rect CollectableDetector;
    struct RTPC *VelocityRTPC;
    struct SoundProvider *VelocitySoundProvider;
    bool DebugDraw;
    struct Action *OnStop;
    float railContactDistance;
    float railSnapDistance;
    float railLoseTime;
    float killOutsideOfScreenTimeout;
    float m_speed;
    struct Transform *m_transform;
    struct CartBody *m_body;
    struct CartAnimation *m_animation;
    struct GameObject *m_carryingObj;
    struct Collider__Array *m_carryingObjColliders;
    bool m_isMoving;
    struct LegacyTimelineSequence *m_currentSequence;
    bool m_wasOnCartStopper;
    struct CartStopper *m_cartStopper;
    struct RaycastHit__Array *m_rayHitBuffer;
    struct List_1_Rail_ *m_validRails;
    struct PushPullBlock *m_pushPullBlock;
    struct CameraLookAheadController *m_cameraLookAhead;
    struct Rect m_worldRectBounds;
    struct Rigidbody *m_rigidbody;
    struct Vector3 m_oldRailPosition;
    struct Vector3 m_oldRailLocalPoint;
    struct Rail *m_oldRail;
    float m_railDistance;
    struct Vector3 m_railNormal;
    bool m_insideStopper;
    bool m_wasCarrying;
    float m_outsideScreenTime;
    struct Collider *m_ignoredCollider;
    struct ISoundHost *m_soundHost;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct Rail *_CurrentRail_k__BackingField;
    struct IDamageReciever__Array *m_damageReceivers;
};

struct Cart {
    struct Cart__Class *klass;
    MonitorData *monitor;
    struct Cart__Fields fields;
};

struct CartLogicCycle__Fields {
    struct MonoBehaviour__Fields _;
    struct Cart *Cart;
    int32_t m_currentAutoExecutionOrder;
    struct SortedList_2_System_Int32_CharacterState_ *m_states;
    struct Dictionary_2_System_Type_System_Int32_ *m_executionOrders;
    struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_ *m_isAllowedDelegates;
    struct List_1_System_Type_ *m_exclusiveActiveStateTypes;
    struct List_1_CharacterState_ *m_exclusiveActiveStates;
    struct CharacterState *m_exclusiveActiveState;
};

struct CartLogicCycle {
    struct CartLogicCycle__Class *klass;
    MonitorData *monitor;
    struct CartLogicCycle__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_CartLogicCycle_IsAllowedDelegate_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_CartLogicCycle_IsAllowedDelegate_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_ {
    struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct CartLogicCycle_IsAllowedDelegate *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate_ fields;
};

struct CartLogicCycle_IsAllowedDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct CartLogicCycle_IsAllowedDelegate {
    struct CartLogicCycle_IsAllowedDelegate__Class *klass;
    MonitorData *monitor;
    struct CartLogicCycle_IsAllowedDelegate__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_CartLogicCycle_IsAllowedDelegate_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_CartLogicCycle_IsAllowedDelegate___Fields {
    struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_CartLogicCycle_IsAllowedDelegate_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_CartLogicCycle_IsAllowedDelegate___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_CartLogicCycle_IsAllowedDelegate___Fields {
    struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_CartLogicCycle_IsAllowedDelegate_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_CartLogicCycle_IsAllowedDelegate___Fields fields;
};

struct CartLogicCycle_IsAllowedDelegate__Array {
    struct CartLogicCycle_IsAllowedDelegate__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CartLogicCycle_IsAllowedDelegate *vector[32];
};

struct IEnumerator_1_CartLogicCycle_IsAllowedDelegate_ {
    struct IEnumerator_1_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_CartLogicCycle_IsAllowedDelegate_ {
    struct ICollection_1_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate_ {
    struct Type *key;
    struct CartLogicCycle_IsAllowedDelegate *value;
};

struct KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate___Boxed {
    struct KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate_ fields;
};

struct KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate___Array {
    struct KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_CartLogicCycle_IsAllowedDelegate_ {
    struct IEnumerable_1_CartLogicCycle_IsAllowedDelegate___Class *klass;
    MonitorData *monitor;
};

struct PlatformBehaviour__Fields {
    struct MonoBehaviour__Fields _;
    struct CharacterPlatformMovement *PlatformMovement;
    struct CharacterLeftRightMovement *LeftRightMovement;
    struct CharacterGravity *Gravity;
    struct CharacterGravityToGround *GravityToGround;
    struct PlatformMovementListOfColliders *PlatformMovementListOfColliders;
    struct PlatformMovementForce *Force;
    struct CharacterCapsuleController *CapsuleController;
    struct CharacterInstantStop *InstantStop;
    struct CharacterAirNoDeceleration *AirNoDeceleration;
    struct CharacterUpwardsDeceleration *UpwardsDeceleration;
    struct CharacterApplyFrictionToSpeed *ApplyFrictionToSpeed;
    struct CharacterJumpSustain *JumpSustain;
    struct CharacterVisuals *Visuals;
    SurfaceMaterialType__Enum m_wallSurfaceMaterialType;
    
    SurfaceMaterialType__Enum m_groundSurfaceMaterialType;
    
    SurfaceMaterialType__Enum m_ceilingSurfaceMaterialType;
    
};

struct PlatformBehaviour {
    struct PlatformBehaviour__Class *klass;
    MonitorData *monitor;
    struct PlatformBehaviour__Fields fields;
};

struct CharacterLeftRightMovement__Fields {
    struct CharacterState__Fields _;
    struct HorizontalPlatformMovementSettings *m_settings;
    struct PlatformBehaviour *PlatformBehaviour;
    struct HorizontalPlatformMovementSettings *Settings;
    bool UpdateFacingDirection;
    struct CharacterLeftRightMovement_PreDashDelegateType *OnSetTurningHandler;
    struct Action *OnPreTurningHandlerTurn;
    float m_horizontalInput;
    struct ICharacterTurningHandler *m_turningHandler;
    int32_t m_framesLeftBeforeResetingTurningHandler;
    struct Action_1_HorizontalPlatformMovementSettings_ *ModifyHorizontalPlatformMovementSettingsEvent;
};

struct CharacterLeftRightMovement {
    struct CharacterLeftRightMovement__Class *klass;
    MonitorData *monitor;
    struct CharacterLeftRightMovement__Fields fields;
};

struct CharacterLeftRightMovement_PreDashDelegateType__Fields {
    struct MulticastDelegate__Fields _;
};

struct CharacterLeftRightMovement_PreDashDelegateType {
    struct CharacterLeftRightMovement_PreDashDelegateType__Class *klass;
    MonitorData *monitor;
    struct CharacterLeftRightMovement_PreDashDelegateType__Fields fields;
};

struct ICharacterTurningHandler {
    struct ICharacterTurningHandler__Class *klass;
    MonitorData *monitor;
};

struct Action_1_HorizontalPlatformMovementSettings___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_HorizontalPlatformMovementSettings_ {
    struct Action_1_HorizontalPlatformMovementSettings___Class *klass;
    MonitorData *monitor;
    struct Action_1_HorizontalPlatformMovementSettings___Fields fields;
};

struct CharacterGravity__Fields {
    struct CharacterState__Fields _;
    struct GravityPlatformMovementSettings *m_settings;
    struct PlatformBehaviour *PlatformBehaviour;
    struct GravityPlatformMovementSettings *Settings;
    struct Action_1_GravityPlatformMovementSettings_ *ModifyGravityPlatformMovementSettingsEvent;
};

struct CharacterGravity {
    struct CharacterGravity__Class *klass;
    MonitorData *monitor;
    struct CharacterGravity__Fields fields;
};

struct Action_1_GravityPlatformMovementSettings___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_GravityPlatformMovementSettings_ {
    struct Action_1_GravityPlatformMovementSettings___Class *klass;
    MonitorData *monitor;
    struct Action_1_GravityPlatformMovementSettings___Fields fields;
};

struct CharacterGravityToGround__Fields {
    struct CharacterState__Fields _;
    float RotateSpeed;
    float m_targetAngle;
    float m_angleIgnoreRange;
    float m_maxAngleDiff;
    struct Cart *m_cart;
    struct PlatformBehaviour *PlatformBehaviour;
    struct Collider *m_groundCollider;
    struct GravityToGroundSurface *m_gravityToGroundSurface;
};

struct CharacterGravityToGround {
    struct CharacterGravityToGround__Class *klass;
    MonitorData *monitor;
    struct CharacterGravityToGround__Fields fields;
};

struct GravityToGroundSurface__Fields {
    struct SaveSerialize__Fields _;
};

struct GravityToGroundSurface {
    struct GravityToGroundSurface__Class *klass;
    MonitorData *monitor;
    struct GravityToGroundSurface__Fields fields;
};

struct PlatformMovementListOfColliders__Fields {
    struct SaveSerialize__Fields _;
    struct PlatformMovement *PlatformMovement;
    struct List_1_UnityEngine_Collider_ *GroundColliders;
    struct List_1_UnityEngine_Collider_ *CeilingColliders;
    struct List_1_UnityEngine_Collider_ *WallLeftColliders;
    struct List_1_UnityEngine_Collider_ *WallRightColliders;
};

struct PlatformMovementListOfColliders {
    struct PlatformMovementListOfColliders__Class *klass;
    MonitorData *monitor;
    struct PlatformMovementListOfColliders__Fields fields;
};

struct PlatformMovementForce__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinCharacter *Sein;
};

struct PlatformMovementForce {
    struct PlatformMovementForce__Class *klass;
    MonitorData *monitor;
    struct PlatformMovementForce__Fields fields;
};

struct CharacterCapsuleController__Fields {
    struct SaveSerialize__Fields _;
    struct PlatformBehaviour *PlatformBehaviour;
    struct CapsuleCollider *CapsuleCollider;
    struct CapsuleCollider *CrushCollider;
    struct Vector3 m_originalCenter;
    float m_originalHeight;
    float m_originalRadius;
    float m_disabledColliderDuration;
};

struct CharacterCapsuleController {
    struct CharacterCapsuleController__Class *klass;
    MonitorData *monitor;
    struct CharacterCapsuleController__Fields fields;
};

struct CharacterInstantStop__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour *PlatformBehaviour;
    float m_lockTimeRemaining;
};

struct CharacterInstantStop {
    struct CharacterInstantStop__Class *klass;
    MonitorData *monitor;
    struct CharacterInstantStop__Fields fields;
};

struct CharacterAirNoDeceleration__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour *PlatformBehaviour;
    bool m_noDeceleration;
};

struct CharacterAirNoDeceleration {
    struct CharacterAirNoDeceleration__Class *klass;
    MonitorData *monitor;
    struct CharacterAirNoDeceleration__Fields fields;
};

struct CharacterUpwardsDeceleration__Fields {
    struct CharacterState__Fields _;
    float Deceleration;
    struct PlatformBehaviour *PlatformBehaviour;
};

struct CharacterUpwardsDeceleration {
    struct CharacterUpwardsDeceleration__Class *klass;
    MonitorData *monitor;
    struct CharacterUpwardsDeceleration__Fields fields;
};

struct CharacterApplyFrictionToSpeed__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour *PlatformBehaviour;
    float SpeedFactor;
    struct Vector3 SpeedToSlowDown;
};

struct CharacterApplyFrictionToSpeed {
    struct CharacterApplyFrictionToSpeed__Class *klass;
    MonitorData *monitor;
    struct CharacterApplyFrictionToSpeed__Fields fields;
};

struct CharacterJumpSustain__Fields {
    struct CharacterState__Fields _;
    float JumpStopDeceleration;
    float JumpStopDecelerationMultiplier;
    struct PlatformBehaviour *PlatformBehaviour;
    float m_amountOfSpeedToLose;
    bool m_DisableSustainForThisJump;
    float m_forceSustainForThisJump;
};

struct CharacterJumpSustain {
    struct CharacterJumpSustain__Class *klass;
    MonitorData *monitor;
    struct CharacterJumpSustain__Fields fields;
};

struct __declspec(align(8)) CharacterVisuals__Fields {
    struct CharacterSpriteMirror *SpriteMirror;
    struct CharacterAnimationSystem *Animation;
    struct MoonAnimator *Animator;
    struct SeinSpriteRotationController *SpriteRotater;
    struct GameObject *Sprite;
    struct Renderer *SpriteRenderer;
    struct Renderer__Array *Renderers;
    struct PerspectiveRotationAdjustment *PerspectiveAdjustment;
};

struct CharacterVisuals {
    struct CharacterVisuals__Class *klass;
    MonitorData *monitor;
    struct CharacterVisuals__Fields fields;
};

struct SeinSpriteRotationController__Fields {
    struct CharacterState__Fields _;
    struct Transform *FeetTransform;
    struct Transform *HeadTransform;
    struct Transform *CenterTransform;
    bool CinematicRotation;
    float FeetAngle;
    float HeadAngle;
    float CenterAngle;
    float m_ceilingAngle;
    float m_groundAngle;
    struct Vector2 m_localPosition;
    float m_wallLeftAngle;
    float m_wallRightAngle;
    float m_tiltLeftRightTimer;
    float m_tiltUpDownTimer;
    float m_tiltLeftRightDuration;
};

struct SeinSpriteRotationController {
    struct SeinSpriteRotationController__Class *klass;
    MonitorData *monitor;
    struct SeinSpriteRotationController__Fields fields;
};

struct PerspectiveRotationAdjustment__Fields {
    struct MonoBehaviour__Fields _;
    float AdjustmentWeight;
    bool PreserveZRotation;
    struct Transform *m_transform;
    float m_desiredWeight;
    float m_blendSpeed;
    bool m_initialized;
    float m_defaultWeight;
};

struct PerspectiveRotationAdjustment {
    struct PerspectiveRotationAdjustment__Class *klass;
    MonitorData *monitor;
    struct PerspectiveRotationAdjustment__Fields fields;
};

struct CartJump__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour *PlatformBehaviour;
    float JumpHeight;
    float DurationSinceLastOnGroundThatWeCanStillJump;
    struct GameObject *JumpEffect;
    struct LegacyTimelineSequence *JumpSequence;
    struct MoonTimeline *JumpSequenceNew;
    struct CartAnimation *CartAnimation;
    float CartScaleForce;
    float timeSinceLastJump;
    SurfaceMaterialType__Enum m_currentJumpingMaterial;
    
    bool m_spriteMirrorLock;
    float m_timeWeCanJumpRemaining;
    struct Func_1_Boolean_ *m_shouldJumpMoving;
    struct Action *onAnimationEnd;
    struct Action_1_Single_ *OnJumpEvent;
};

struct CartJump {
    struct CartJump__Class *klass;
    MonitorData *monitor;
    struct CartJump__Fields fields;
};

struct BaseTimelineSequence__Fields {
    struct BaseAnimator__Fields _;
    bool LockDuration;
    float LockedDuration;
    struct List_1_IEntry_ *m_currentlySampledEntries;
    struct HashSet_1_IEntry_ *m_entriesProcessedThisFrame;
    struct List_1_BaseAnimator_ *m_allSubAnimators;
    float _UnlockedDuration_k__BackingField;
};

struct BaseTimelineSequence {
    struct BaseTimelineSequence__Class *klass;
    MonitorData *monitor;
    struct BaseTimelineSequence__Fields fields;
};

enum class LegacyTimelineSequence_SortMode__Enum : int32_t {
    None = 0x00000000,
    Name = 0x00000001,
    Time = 0x00000002,
};

struct LegacyTimelineSequence_SortMode__Enum__Boxed {
    struct LegacyTimelineSequence_SortMode__Enum__Class *klass;
    MonitorData *monitor;
    LegacyTimelineSequence_SortMode__Enum value;
    
};

struct LegacyTimelineSequence__Fields {
    struct BaseTimelineSequence__Fields _;
    LegacyTimelineSequence_SortMode__Enum Mode;
    
    bool ExcludeFromOtherTimelines;
    bool Loop;
    struct List_1_LegacyTimelineSequence_SequenceEntry_ *Entries;
    struct Dictionary_2_System_Int32_System_Single_ *PreviousEntriesStartTime;
    float m_cachedUnlockedDuration;
    struct Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ *AddCallback;
    struct Action *BeforeUpdateCallback;
    struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ *m_existingAnimators;
    struct HashSet_1_BaseAnimator_ *m_missingAnimators;
    struct Stack_1_UnityEngine_Transform_ *m_process;
    bool ContainsDuplicateEntry;
};

struct LegacyTimelineSequence {
    struct LegacyTimelineSequence__Class *klass;
    MonitorData *monitor;
    struct LegacyTimelineSequence__Fields fields;
};

struct __declspec(align(8)) List_1_IEntry___Fields {
    struct IEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IEntry_ {
    struct List_1_IEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_IEntry___Fields fields;
};

struct IEntry {
    struct IEntry__Class *klass;
    MonitorData *monitor;
};

struct IEntry__Array {
    struct IEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IEntry *vector[32];
};

struct IEnumerator_1_IEntry_ {
    struct IEnumerator_1_IEntry___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) HashSet_1_IEntry___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_IEntry___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_IEntry_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_IEntry_ {
    struct HashSet_1_IEntry___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_IEntry___Fields fields;
};

struct HashSet_1_T_Slot_IEntry_ {
    int32_t hashCode;
    int32_t next;
    struct IEntry *value;
};

struct HashSet_1_T_Slot_IEntry___Boxed {
    struct HashSet_1_T_Slot_IEntry___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_IEntry_ fields;
};

struct HashSet_1_T_Slot_IEntry___Array {
    struct HashSet_1_T_Slot_IEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_IEntry_ vector[32];
};

struct IEqualityComparer_1_IEntry_ {
    struct IEqualityComparer_1_IEntry___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_IEntry_ {
    struct IEnumerable_1_IEntry___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_BaseAnimator___Fields {
    struct BaseAnimator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_BaseAnimator_ {
    struct List_1_BaseAnimator___Class *klass;
    MonitorData *monitor;
    struct List_1_BaseAnimator___Fields fields;
};

struct BaseAnimator__Array {
    struct BaseAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BaseAnimator *vector[32];
};

struct IEnumerator_1_BaseAnimator_ {
    struct IEnumerator_1_BaseAnimator___Class *klass;
    MonitorData *monitor;
};

struct MasterTimelineSequence__Fields {
    struct BaseTimelineSequence__Fields _;
    struct SceneRoot *SceneRoot;
    struct RuntimeSceneMetaData *RuntimeSceneMetaData;
    struct List_1_MasterTimelineSequence_SceneEntry_ *Entries;
    struct List_1_MasterTimelineSequence_SceneSettings_ *Scenes;
    struct LegacyTimelineSequence *TimelineSequence;
    struct ActionSequence *OnFinish;
    float BeforeFinishActionTimeOffset;
    struct ActionSequence *BeforeFinishAction;
    bool Record;
    struct AutoRecorder *m_recorder;
    struct HashSet_1_MasterTimelineSequence_SceneEntry_ *m_preloadedScenes;
    bool m_hasFinished;
    bool m_hasRunBeforeFinishAction;
    float m_time;
    struct MasterTimelineSequence_SceneEntry *m_crossFadingFromScene;
    float m_crossFadePadding;
    bool m_playing;
    float m_realTime;
    float m_lastRealTime;
    float m_crossFadeTimeOffset;
    float m_cachedUnlockedDuration;
};

struct MasterTimelineSequence {
    struct MasterTimelineSequence__Class *klass;
    MonitorData *monitor;
    struct MasterTimelineSequence__Fields fields;
};

struct __declspec(align(8)) RuntimeSceneMetaData__Fields {
    struct String *Scene;
    struct Vector2 PlaceholderPosition;
    struct MoonGuid *SceneMoonGuid;
    int32_t LinearId;
    struct List_1_UnityEngine_Rect_ *SceneLoadingBoundaries;
    struct List_1_UnityEngine_Rect_ *SceneBoundaries;
    struct List_1_UnityEngine_Rect_ *ScenePaddingBoundaries;
    struct List_1_System_Single_ *ScenePaddingWideScreenExpansion;
    struct Condition_1 *LoadingCondition;
    struct List_1_UnityEngine_Vector3_ *FPSTestPosition;
    struct List_1_MoonGuid_ *IncludedScenes;
    struct List_1_System_Int32_ *IncludedScenesLinear;
    bool SceneInCurrentFrame;
    struct Dictionary_2_MoonGuid_NearbySceneData_ *m_nearbyReachableScenes;
    int32_t SceneUtility;
    bool DependantScene;
    bool IsMasterScene;
    bool IsRecordableMasterScene;
    bool MasterSceneCompleted;
    struct Rect m_totalRect;
    bool m_doneTotal;
    bool VisibleOnlyInPadding;
    struct SceneMetaData *VisibleOnlyInPaddingDependantScene;
    bool OverrideOriPositionInMap;
    struct Vector3 MapPositionOverride;
    float DynamicCameraEnemyFOVMultiplier;
    bool CanTimeSlice;
    struct SceneSoundBankData *SoundBankData;
    struct Boolean__Array *m_IsInsideSceneBoundsIsCached;
    struct Boolean__Array *m_cachedIsInsideSceneBounds;
    struct Boolean__Array *m_IsInsideScenePaddingBoundsIsCached;
    struct Boolean__Array *m_cachedIsInsideScenePaddingBounds;
};

struct RuntimeSceneMetaData {
    struct RuntimeSceneMetaData__Class *klass;
    MonitorData *monitor;
    struct RuntimeSceneMetaData__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_MoonGuid_NearbySceneData___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_MoonGuid_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_NearbySceneData_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_NearbySceneData_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_MoonGuid_NearbySceneData_ {
    struct Dictionary_2_MoonGuid_NearbySceneData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_MoonGuid_NearbySceneData___Fields fields;
};

struct NearbySceneData {
    struct MoonGuid *SceneGuid;
    struct RuntimeSceneMetaData *MetaData;
    int32_t Hops;
};

struct NearbySceneData__Boxed {
    struct NearbySceneData__Class *klass;
    MonitorData *monitor;
    struct NearbySceneData fields;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData_ {
    int32_t hashCode;
    int32_t next;
    struct MoonGuid *key;
    struct NearbySceneData value;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData___Array {
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_NearbySceneData_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_NearbySceneData___Fields {
    struct Dictionary_2_MoonGuid_NearbySceneData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_NearbySceneData_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_NearbySceneData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_NearbySceneData___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_NearbySceneData___Fields {
    struct Dictionary_2_MoonGuid_NearbySceneData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_NearbySceneData_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_NearbySceneData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_NearbySceneData___Fields fields;
};

struct NearbySceneData__Array {
    struct NearbySceneData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NearbySceneData vector[32];
};

struct IEnumerator_1_NearbySceneData_ {
    struct IEnumerator_1_NearbySceneData___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_NearbySceneData_ {
    struct ICollection_1_NearbySceneData___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_MoonGuid_NearbySceneData_ {
    struct MoonGuid *key;
    struct NearbySceneData value;
};

struct KeyValuePair_2_MoonGuid_NearbySceneData___Boxed {
    struct KeyValuePair_2_MoonGuid_NearbySceneData___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_MoonGuid_NearbySceneData_ fields;
};

struct KeyValuePair_2_MoonGuid_NearbySceneData___Array {
    struct KeyValuePair_2_MoonGuid_NearbySceneData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_MoonGuid_NearbySceneData_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_MoonGuid_NearbySceneData_ {
    struct IEnumerator_1_KeyValuePair_2_MoonGuid_NearbySceneData___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_NearbySceneData_ {
    struct IEnumerable_1_NearbySceneData___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SceneSoundBankData__Fields {
    struct List_1_Moon_Wwise_SoundBankEntry_ *SoundBanks;
    struct SoundBankEntry__Array *AdditionalSoundBanks;
};

struct SceneSoundBankData {
    struct SceneSoundBankData__Class *klass;
    MonitorData *monitor;
    struct SceneSoundBankData__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_Wwise_SoundBankEntry___Fields {
    struct SoundBankEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Wwise_SoundBankEntry_ {
    struct List_1_Moon_Wwise_SoundBankEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Wwise_SoundBankEntry___Fields fields;
};

struct SoundBankEntry__Array {
    struct SoundBankEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SoundBankEntry *vector[32];
};

struct IEnumerator_1_Moon_Wwise_SoundBankEntry_ {
    struct IEnumerator_1_Moon_Wwise_SoundBankEntry___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_MasterTimelineSequence_SceneEntry___Fields {
    struct MasterTimelineSequence_SceneEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MasterTimelineSequence_SceneEntry_ {
    struct List_1_MasterTimelineSequence_SceneEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_MasterTimelineSequence_SceneEntry___Fields fields;
};

struct __declspec(align(8)) MasterTimelineSequence_SceneEntry__Fields {
    struct SceneMetaData *SceneMetaData;
    struct MasterTimelineSequence_SceneEntry *PreviousEntry;
    float m_startOffset;
    float PreloadTime;
    float CrossfadeDuration;
    struct String *TimelineName;
    bool WasEnabled;
    float m_speed;
    float m_lastCachedDuration;
    struct BaseAnimator *m_animator;
};

struct MasterTimelineSequence_SceneEntry {
    struct MasterTimelineSequence_SceneEntry__Class *klass;
    MonitorData *monitor;
    struct MasterTimelineSequence_SceneEntry__Fields fields;
};

struct MasterTimelineSequence_SceneEntry__Array {
    struct MasterTimelineSequence_SceneEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MasterTimelineSequence_SceneEntry *vector[32];
};

struct IEnumerator_1_MasterTimelineSequence_SceneEntry_ {
    struct IEnumerator_1_MasterTimelineSequence_SceneEntry___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_MasterTimelineSequence_SceneSettings___Fields {
    struct MasterTimelineSequence_SceneSettings__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MasterTimelineSequence_SceneSettings_ {
    struct List_1_MasterTimelineSequence_SceneSettings___Class *klass;
    MonitorData *monitor;
    struct List_1_MasterTimelineSequence_SceneSettings___Fields fields;
};

struct __declspec(align(8)) MasterTimelineSequence_SceneSettings__Fields {
    struct SceneMetaData *SceneMetaData;
    float SceneStartTime;
    float BaseDuration;
    float CrossfadeDuration;
    float PreloadTime;
};

struct MasterTimelineSequence_SceneSettings {
    struct MasterTimelineSequence_SceneSettings__Class *klass;
    MonitorData *monitor;
    struct MasterTimelineSequence_SceneSettings__Fields fields;
};

struct MasterTimelineSequence_SceneSettings__Array {
    struct MasterTimelineSequence_SceneSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MasterTimelineSequence_SceneSettings *vector[32];
};

struct IEnumerator_1_MasterTimelineSequence_SceneSettings_ {
    struct IEnumerator_1_MasterTimelineSequence_SceneSettings___Class *klass;
    MonitorData *monitor;
};

}
