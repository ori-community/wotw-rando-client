namespace app {
struct SeinSwimming {
  struct SeinSwimming__Class *klass;
  struct MonitorData *monitor;
  struct SeinSwimming__Fields fields;
};
enum CharacterPlatformMovement_SpeedSpace__Enum : int32_t {
  CharacterPlatformMovement_SpeedSpace__Enum_Local = 0,
  CharacterPlatformMovement_SpeedSpace__Enum_World = 1,
};
struct CharacterPlatformMovement_SpeedSpace__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CharacterPlatformMovement_SpeedSpace__Enum value;
};
struct __declspec(align(8)) CharacterPlatformMovement_ScheduledSpeedCurve__Fields {
  enum CharacterPlatformMovement_SpeedSpace__Enum m_space;
  bool m_additive;
  struct AnimationCurve * m_curveX;
  struct AnimationCurve * m_curveY;
  struct AnimationCurve * m_directionCurve;
  float m_curveScaleX;
  float m_curveScaleY;
  float m_directionCurveScale;
  float m_timeScale;
  struct Func_1_Boolean_ * m_canContinue;
  struct Vector2 m_direction;
  struct Vector2 m_lastSpeed;
  float m_timer;
};
struct CharacterPlatformMovement_ScheduledSpeedCurve {
  struct CharacterPlatformMovement_ScheduledSpeedCurve__Class *klass;
  struct MonitorData *monitor;
  struct CharacterPlatformMovement_ScheduledSpeedCurve__Fields fields;
};
enum WaterZone_DamageApplyType__Enum : int32_t {
  WaterZone_DamageApplyType__Enum_ApplyDamageWhenCorrupted = 0,
  WaterZone_DamageApplyType__Enum_AlwaysApplyDamage = 1,
  WaterZone_DamageApplyType__Enum_NeverApplyDamage = 2,
};
struct WaterZone_DamageApplyType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WaterZone_DamageApplyType__Enum value;
};
struct WaterZone__Fields {
  struct MonoBehaviour__Fields _;
  bool IgnoreZoneDamage;
  float DamageAmount;
  float DamageTickRate;
  struct Rect Bounds;
  bool HasTopSurface;
  float SwimGravityMultiplier;
  bool DisableDamageIfPurified;
  enum WaterZone_DamageApplyType__Enum DamageCondition;
  struct Vector3 m_previousPosition;
  struct Vector3 m_previousScale;
  struct Vector2 m_velocity;
};
struct WaterZone {
  struct WaterZone__Class *klass;
  struct MonitorData *monitor;
  struct WaterZone__Fields fields;
};
struct LegacyAnimator__Fields {
  struct MonoBehaviour__Fields _;
  bool m_isInScene;
  struct AnimationCurve * AnimationCurve;
  bool PlayAutomatically;
  bool SampleFirstFrameOnStart;
  float TimeOffset;
  float CurveMagnitude;
  float Speed;
  float m_startSpeed;
  bool m_stopped;
  bool _Reversed_k__BackingField;
  float _MaxTime_k__BackingField;
  float _MinTime_k__BackingField;
  float _CurrentTime_k__BackingField;
  struct Action * OnAnimationEndEvent;
  bool m_hasStarted;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
  bool m_wasStopped;
};
struct LegacyAnimator {
  struct LegacyAnimator__Class *klass;
  struct MonitorData *monitor;
  struct LegacyAnimator__Fields fields;
};
struct LegacyAnimator__Array {
  struct LegacyAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyAnimator * vector[32];
};
struct CameraOffsetAnimator__Fields {
  struct LegacyAnimator__Fields _;
  float m_lastValue;
  bool AnimateX;
  bool AnimateY;
  bool AnimateZ;
};
struct CameraOffsetAnimator {
  struct CameraOffsetAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CameraOffsetAnimator__Fields fields;
};
struct __declspec(align(8)) HashSet_1_Moon_DamageOwner___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_Moon_DamageOwner___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_Moon_DamageOwner_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_Moon_DamageOwner_ {
  struct HashSet_1_Moon_DamageOwner___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_Moon_DamageOwner___Fields fields;
};
struct HashSet_1_T_Slot_Moon_DamageOwner_ {
  int32_t hashCode;
  int32_t next;
  struct DamageOwner * value;
};
struct HashSet_1_T_Slot_Moon_DamageOwner___Boxed {
  struct HashSet_1_T_Slot_Moon_DamageOwner___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_Moon_DamageOwner_ fields;
};
struct HashSet_1_T_Slot_Moon_DamageOwner___Array {
  struct HashSet_1_T_Slot_Moon_DamageOwner___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_Moon_DamageOwner_ vector[32];
};
struct IEqualityComparer_1_Moon_DamageOwner_ {
  struct IEqualityComparer_1_Moon_DamageOwner___Class *klass;
  struct MonitorData *monitor;
};
struct DamageOwner__Array {
  struct DamageOwner__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DamageOwner * vector[32];
};
struct IEnumerator_1_Moon_DamageOwner_ {
  struct IEnumerator_1_Moon_DamageOwner___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_DamageOwner_ {
  struct IEnumerable_1_Moon_DamageOwner___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinDigging___Fields {
  bool HasState;
  struct SeinDigging * State;
};
struct CharacterStateWrapper_1_SeinDigging_ {
  struct CharacterStateWrapper_1_SeinDigging___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinDigging___Fields fields;
};
enum SeinDigging_State__Enum : int32_t {
  SeinDigging_State__Enum_OutOfZone = 0,
  SeinDigging_State__Enum_OutOfZoneDashing = 1,
  SeinDigging_State__Enum_Digging = 2,
  SeinDigging_State__Enum_Dashing = 3,
  SeinDigging_State__Enum_ExitingSand = 4,
};
struct SeinDigging_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinDigging_State__Enum value;
};
enum StressTestStatus__Enum : int32_t {
  StressTestStatus__Enum_Resting = 0,
  StressTestStatus__Enum_Running = 1,
  StressTestStatus__Enum_Finished = 2,
};
struct StressTestStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StressTestStatus__Enum value;
};
struct SeinDigging__Fields {
  struct CharacterState__Fields _;
  bool DebugDrawEnabled;
  enum SeinDigging_State__Enum m_currentState;
  struct AnimationCurve * DeadZoneRemappingCurve;
  float DigSpeed;
  float DigAccel;
  float DashSpeed;
  float DashTime;
  float DashDecelSmoothDamp;
  float DashDecelMaxSpeed;
  float DashCooldown;
  float DashCooldownOnExit;
  float DashCooldownOnEnter;
  float TurnSmoothTime;
  struct AnimationCurve * SmoothTimeVsInputMagnitude;
  float MinSmoothTime;
  float DashTurnSmoothTime;
  float SpeedMultiplierOnExit;
  float OutOfDigDashSpeed;
  float OutOfDigDashDuration;
  float ExitDashDuration;
  struct AnimationCurve * OutOfDigDashSpeedCurve;
  float DashDamage;
  enum DamageWeight__Enum DashDamageWeight;
  float DashDamageRadius;
  float DashDamageForce;
  struct LayerMask DashDamageLayerMask;
  bool ApplyDashExitCurve;
  struct AnimationCurve * DashExitCurve;
  float DashExitDigSpeed;
  struct GameObject * DashHitEffect;
  float DashExitEnableTurnThreshold;
  float AutoDashMaxDistance;
  float FailedDashRotationResetTime;
  struct LayerMask RicochetCheckMask;
  float RicochetInputCooldown;
  float RicochetStickToWallCooldown;
  float SpeedMultiplierOnRicochet;
  float RicochetCheckMinDotProduct;
  struct LayerMask StickToWallCheckMask;
  float StickToWallRadius;
  float StickToWallMaxDotProduct;
  float StickToWallMinInputAlignment;
  float StickToWallTurnSmoothTime;
  float DigBlendParameterSpeed;
  float ExitSandRootScale;
  struct SeinDigging_DiggingEffects__Array * DiggingVFX;
  struct SeinDigging_DiggingEffects * m_currentVFX;
  float m_pushTimeoutInterval;
  float m_pushTimeout;
  float RicochetEffectCooldown;
  float m_ricochetEffectTimer;
  float TrailEffectDistance;
  float TrailAllowedBorder;
  float DashExtraSandParticleRadius;
  int32_t DashExtraSandParticleAmount;
  float SeinRadius;
  float DigInsteadOfDashPredictionTime;
  float DigInsteadOfDashRadius;
  struct AnimationCurve * DigInsteadOfDashThreasholdAngleCurve;
  struct SoundProvider * DashSoundProvider;
  struct SoundProvider * RicochetSoundProvider;
  struct SoundProvider * InSandSoundLoopingProvider;
  struct SoundProvider * StartDigAbilitySoundProvider;
  struct SoundProvider * EnterSandSoundEvent;
  struct SoundProvider * ExitSandSoundEvent;
  struct State * InSandSoundState;
  struct State * OutSandSoundState;
  struct Event_1 * DashEnableSoundEvent;
  struct RTPC * DigTurnAngle;
  struct Event_1 * DigTurn;
  float DigTurnThreshold;
  float CameraXWeight;
  float CameraYWeight;
  struct Vector2 CameraMinOffset;
  struct Vector2 CameraMaxOffset;
  float CameraSpeed;
  int32_t StartVFX;
  bool m_cameraLookAheadActive;
  float m_currentStateTime;
  struct DigZone * m_currentZone;
  struct Rigidbody * m_currentZoneBody;
  struct DigZone * m_lastZone;
  float m_speed;
  float m_angle;
  float m_previousWantedAngle;
  struct CharacterPlatformMovement_ScheduledSpeedCurve * m_dashExitCurve;
  float m_angleSpeed;
  float m_dashDecelSmoothVelocity;
  struct Vector3 m_dir;
  struct GameObject * m_trailEffect;
  struct ParticleSystem * m_trailParticleSystem;
  float m_ricochetCooldownRemaining;
  float m_ricochetStickToWallCooldownRemaining;
  bool m_damaged;
  bool m_isSlidingAlongWall;
  struct Vector2 m_lastCollisionNormal;
  bool m_isDashing;
  float m_dashTimer;
  float m_dashCooldown;
  struct GameObject * m_digDashEffect;
  struct Vector2 m_outOfZoneDashStartDirection;
  float m_totalDigDistanceTravelled;
  float m_exitingSandDuration;
  bool m_canDealDamage;
  float m_dealDamageTimer;
  struct DigZoneHandler * m_digZoneEntranceHandler;
  struct Collider__Array * m_damageHitColliders;
  int32_t m_currentDamageID;
  bool m_shouldStartDashing;
  bool m_adjustDashDirection;
  struct Vector2 m_adjustedDashDirection;
  float m_rotationFrom;
  struct Vector3 m_lastSandEnterPosition;
  float m_currentDigBlendValue;
  bool m_wasInSand;
  float m_timeSinceLastOutOfSandDash;
  struct Transform * m_trailAnchor;
  struct Vector3 m_trailAnchorPos;
  struct Transform * m_trailBackAnchor;
  struct Vector3 m_lastTrailAnchorPosition;
  struct WwiseEventSystem_SoundHandle m_inSandSoundHandle;
  float m_deltaAngle;
  float m_digParam;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct SeinDigging {
  struct SeinDigging__Class *klass;
  struct MonitorData *monitor;
  struct SeinDigging__Fields fields;
};
struct __declspec(align(8)) SeinDigging_DiggingEffects__Fields {
  struct PhysicMaterial * PhysicsMat;
  struct GameObject * EffectOnEnter;
  struct GameObject * EffectOnEnterUnderwater;
  struct GameObject * TrailEffect;
  struct GameObject * DigDashEffect;
  struct GameObject * RicochetEffect;
};
struct SeinDigging_DiggingEffects {
  struct SeinDigging_DiggingEffects__Class *klass;
  struct MonitorData *monitor;
  struct SeinDigging_DiggingEffects__Fields fields;
};
struct SeinDigging_DiggingEffects__Array {
  struct SeinDigging_DiggingEffects__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinDigging_DiggingEffects * vector[32];
};
struct DigZone__Fields {
  struct MonoBehaviour__Fields _;
  bool LockHorizontalEntrance;
  bool LockVerticalEntrance;
  struct Transform * insideTester;
  struct Vector2 exitPushMultiplier;
  bool autoDashOnExit;
  float TurningSpeedMultiplier;
  struct Action * OnDigStartedInZoneCallback;
  struct CageStructureTool * m_cageStructure;
  bool m_hasInitedCageStructure;
  struct Collider * m_cageCollider;
};
struct DigZone {
  struct DigZone__Class *klass;
  struct MonitorData *monitor;
  struct DigZone__Fields fields;
};
struct Action_1_DigZone___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_DigZone_ {
  struct Action_1_DigZone___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_DigZone___Fields fields;
};
struct CageStructureTool__Fields {
  struct MonoBehaviour__Fields _;
  int32_t VerticeUniqueID;
  int32_t EdgeUniqueID;
  int32_t FaceUniqueID;
  int32_t EditingMode;
  struct List_1_ICageMetaData_ * MetaData;
  struct Texture2D * CageStructureTexture;
  struct Byte__Array * ZoneMap;
  int32_t ZoneMapWidth;
  int32_t ZoneMapHeight;
  bool UseTextureMap;
  struct List_1_CageStructureTool_Vertex_ * Vertices;
  struct List_1_CageStructureTool_Edge_ * Edges;
  struct List_1_CageStructureTool_Face_ * Faces;
  struct Action_1_CageStructureTool_Vertex_ * OnAddVertex;
  struct Action_1_CageStructureTool_Vertex_ * OnRemoveVertex;
  struct Action_1_CageStructureTool_Edge_ * OnAddEdge;
  struct Action_1_CageStructureTool_Edge_ * OnRemoveEdge;
  struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ * OnSplitEdge;
  struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ * OnMergeEdge;
  struct Action_1_CageStructureTool_Face_ * OnAddFace;
  struct Action_1_CageStructureTool_Face_ * OnRemoveFace;
  struct Action * OnModified;
  struct Action_3_CageStructureTool_Face_Boolean_Boolean_ * OnDisplayFace;
  struct Action_3_CageStructureTool_Edge_Boolean_Boolean_ * OnDisplayEdge;
  struct Action_3_CageStructureTool_Vertex_Boolean_Boolean_ * OnDisplayVertex;
  struct List_1_CageStructureTool_Vertex_ * m_selectedVertices;
  struct Dictionary_2_System_Int32_System_Int32_ * m_faceHashToIdMap;
  struct Renderer * m_renderer;
  bool EnableBoundsCheckOptimization;
  bool ShouldBeStrippedForBuilds;
  bool cage3D;
  bool saveMeshToAsset;
  struct Transform * m_transform;
  bool DontGenerateFaces;
  struct Rect__Array * m_faceOptimisation;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ * Connections;
  bool m_localPolyValid;
  struct List_1_UnityEngine_Vector2_ * m_localVertices;
  struct Bounds m_bounds;
  bool m_hasBoundsBeenCalculated;
  struct Vector3 m_boundsCenterInLocalSpace;
};
struct CageStructureTool {
  struct CageStructureTool__Class *klass;
  struct MonitorData *monitor;
  struct CageStructureTool__Fields fields;
};
struct __declspec(align(8)) List_1_ICageMetaData___Fields {
  struct ICageMetaData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ICageMetaData_ {
  struct List_1_ICageMetaData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ICageMetaData___Fields fields;
};
struct ICageMetaData {
  struct ICageMetaData__Class *klass;
  struct MonitorData *monitor;
};
struct ICageMetaData__Array {
  struct ICageMetaData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ICageMetaData * vector[32];
};
struct IEnumerator_1_ICageMetaData_ {
  struct IEnumerator_1_ICageMetaData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_CageStructureTool_Vertex___Fields {
  struct CageStructureTool_Vertex__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CageStructureTool_Vertex_ {
  struct List_1_CageStructureTool_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CageStructureTool_Vertex___Fields fields;
};
struct __declspec(align(8)) CageStructureTool_Vertex__Fields {
  struct Vector3 Position;
  struct Vector3 _ScreenPosition_k__BackingField;
  struct Vector4 Metadata;
  int32_t ID;
};
struct CageStructureTool_Vertex {
  struct CageStructureTool_Vertex__Class *klass;
  struct MonitorData *monitor;
  struct CageStructureTool_Vertex__Fields fields;
};
struct CageStructureTool_Vertex__Array {
  struct CageStructureTool_Vertex__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CageStructureTool_Vertex * vector[32];
};
struct IEnumerator_1_CageStructureTool_Vertex_ {
  struct IEnumerator_1_CageStructureTool_Vertex___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_CageStructureTool_Edge___Fields {
  struct CageStructureTool_Edge__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CageStructureTool_Edge_ {
  struct List_1_CageStructureTool_Edge___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CageStructureTool_Edge___Fields fields;
};
struct __declspec(align(8)) CageStructureTool_Edge__Fields {
  int32_t VertexA;
  int32_t VertexB;
  int32_t ID;
};
struct CageStructureTool_Edge {
  struct CageStructureTool_Edge__Class *klass;
  struct MonitorData *monitor;
  struct CageStructureTool_Edge__Fields fields;
};
struct CageStructureTool_Edge__Array {
  struct CageStructureTool_Edge__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CageStructureTool_Edge * vector[32];
};
struct IEnumerator_1_CageStructureTool_Edge_ {
  struct IEnumerator_1_CageStructureTool_Edge___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_CageStructureTool_Face___Fields {
  struct CageStructureTool_Face__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CageStructureTool_Face_ {
  struct List_1_CageStructureTool_Face___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CageStructureTool_Face___Fields fields;
};
struct __declspec(align(8)) CageStructureTool_Face__Fields {
  struct List_1_System_Int32_ * Triangles;
  struct List_1_System_Int32_ * Vertices;
  int32_t ID;
};
struct CageStructureTool_Face {
  struct CageStructureTool_Face__Class *klass;
  struct MonitorData *monitor;
  struct CageStructureTool_Face__Fields fields;
};
struct CageStructureTool_Face__Array {
  struct CageStructureTool_Face__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CageStructureTool_Face * vector[32];
};
struct IEnumerator_1_CageStructureTool_Face_ {
  struct IEnumerator_1_CageStructureTool_Face___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_CageStructureTool_Vertex___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_CageStructureTool_Vertex_ {
  struct Action_1_CageStructureTool_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_CageStructureTool_Vertex___Fields fields;
};
struct Action_1_CageStructureTool_Edge___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_CageStructureTool_Edge_ {
  struct Action_1_CageStructureTool_Edge___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_CageStructureTool_Edge___Fields fields;
};
struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ {
  struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge___Fields fields;
};
struct Action_1_CageStructureTool_Face___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_CageStructureTool_Face_ {
  struct Action_1_CageStructureTool_Face___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_CageStructureTool_Face___Fields fields;
};
struct Action_3_CageStructureTool_Face_Boolean_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_CageStructureTool_Face_Boolean_Boolean_ {
  struct Action_3_CageStructureTool_Face_Boolean_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_CageStructureTool_Face_Boolean_Boolean___Fields fields;
};
struct Action_3_CageStructureTool_Edge_Boolean_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_CageStructureTool_Edge_Boolean_Boolean_ {
  struct Action_3_CageStructureTool_Edge_Boolean_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_CageStructureTool_Edge_Boolean_Boolean___Fields fields;
};
struct Action_3_CageStructureTool_Vertex_Boolean_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_CageStructureTool_Vertex_Boolean_Boolean_ {
  struct Action_3_CageStructureTool_Vertex_Boolean_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_CageStructureTool_Vertex_Boolean_Boolean___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Dictionary_2_System_Int32_System_Int32_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields fields;
};
struct Dictionary_2_System_Int32_System_Int32___Array {
  struct Dictionary_2_System_Int32_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_System_Int32_System_Int32_ * vector[32];
};
struct IEnumerator_1_Dictionary_2_System_Int32_System_Int32_ {
  struct IEnumerator_1_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Dictionary_2_System_Int32_System_Int32_ {
  struct ICollection_1_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
  int32_t key;
  struct Dictionary_2_System_Int32_System_Int32_ * value;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Boxed {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ fields;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Array {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Dictionary_2_System_Int32_System_Int32_ {
  struct IEnumerable_1_Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct DigZoneHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct Collider__Array * IgnoreColliders;
  struct HashSet_1_DigZone_ * m_ignoredZones;
  bool m_passThrough;
};
struct DigZoneHandler {
  struct DigZoneHandler__Class *klass;
  struct MonitorData *monitor;
  struct DigZoneHandler__Fields fields;
};
struct __declspec(align(8)) HashSet_1_DigZone___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_DigZone___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_DigZone_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_DigZone_ {
  struct HashSet_1_DigZone___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_DigZone___Fields fields;
};
struct HashSet_1_T_Slot_DigZone_ {
  int32_t hashCode;
  int32_t next;
  struct DigZone * value;
};
struct HashSet_1_T_Slot_DigZone___Boxed {
  struct HashSet_1_T_Slot_DigZone___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_DigZone_ fields;
};
struct HashSet_1_T_Slot_DigZone___Array {
  struct HashSet_1_T_Slot_DigZone___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_DigZone_ vector[32];
};
struct IEqualityComparer_1_DigZone_ {
  struct IEqualityComparer_1_DigZone___Class *klass;
  struct MonitorData *monitor;
};
struct DigZone__Array {
  struct DigZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DigZone * vector[32];
};
struct IEnumerator_1_DigZone_ {
  struct IEnumerator_1_DigZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_DigZone_ {
  struct IEnumerable_1_DigZone___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinDashNew___Fields {
  bool HasState;
  struct SeinDashNew * State;
};
struct CharacterStateWrapper_1_SeinDashNew_ {
  struct CharacterStateWrapper_1_SeinDashNew___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinDashNew___Fields fields;
};
struct Nullable_1_UnityEngine_Vector2_ {
  struct Vector2 value;
  bool has_value;
};
struct Nullable_1_UnityEngine_Vector2___Boxed {
  struct Nullable_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_UnityEngine_Vector2_ fields;
};
struct SeinDashNew__Fields {
  struct CharacterState__Fields _;
  bool _WasGroundedSinceLastExecution_k__BackingField;
  struct LayerMask SandZoneHittingLayer;
  struct LayerMask WaterZoneHittingLayer;
  bool _IsEnding_k__BackingField;
  struct SeinDashNew_PreDashDelegateType * PreDashDelegate;
  bool OnlyRootMotion;
  bool AllowAirDash;
  bool BackdashEnabled;
  bool ScaleForwardMotionToEnemies;
  float ForwardMotionDistance;
  float ForwardAirMotionDistance;
  struct LayerMask EnemyLayerMask;
  struct List_1_System_String_ * RootMotionScalingIgnoreTags;
  float ForwardStickThreshold;
  struct AnimationCurve * MaxSpeedCurve;
  float AllowMeleeAttackNormalizedTime;
  float StuckOnWallDuration;
  float InvincibilityToAttacksTime;
  float PostDashSpeed;
  float DigTolerance;
  struct GameObject * DashEntryTarget;
  struct MoonTimeline * ActivateDiggingTargetSequence;
  struct MoonTimeline * DeactivateDiggingTargetSequence;
  float _CoolDown_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  float m_timeToGetUnstuck;
  float m_currentDistanceTraveled;
  float m_predictedTravelDistance;
  float m_rootMotionScale;
  bool m_isDashing;
  bool m_isAirDashing;
  bool m_allowDash;
  bool m_attackButtonPressedDuringDash;
  bool m_forwardDash;
  int32_t m_dashDirection;
  int32_t m_facingDirection;
  struct MoonTimeline * m_currentTimeline;
  struct MoonAnimator * m_seinAnimator;
  struct Vector2 m_previousPosition;
  struct Nullable_1_UnityEngine_Vector2_ m_dashEntryPoint;
  struct Vector2 m_dashEntryPointNormal;
  struct Vector2 m_adjustedDashDirection;
  struct List_1_DigZone_ * m_digZonesWithinRadius;
  struct List_1_WaterZone_ * m_swimZonesWithinRadius;
  struct DigZone * m_targetDigZone;
  struct Rigidbody * m_targetDigZoneRigibody;
  struct WaterZone * m_targetWaterZone;
  float DigDirectionErrorAngle;
  float DistanceCostMultiplier;
  float AngleCostMultiplier;
  float InputDirectionOffsetY;
  struct List_1_DigZone_ * m_nearbyDigZones;
  int32_t m_nearbyDigZonesCachedFrame;
  struct List_1_WaterZone_ * m_nearbyWaterZones;
  int32_t m_nearbyWaterZonesCachedFrame;
  bool m_shouldDigCached;
  int32_t m_shouldDigUpdateFramID;
  float _MoveCooldown_k__BackingField;
  float _MoveCooldownTimer_k__BackingField;
  struct List_1_Moon_ComboSystem_IComboMove_ * _ComboMoves_k__BackingField;
  struct Vector3 m_lastRootVelocity;
};
struct SeinDashNew {
  struct SeinDashNew__Class *klass;
  struct MonitorData *monitor;
  struct SeinDashNew__Fields fields;
};
struct SeinDashNew_PreDashDelegateType__Fields {
  struct MulticastDelegate__Fields _;
};
struct SeinDashNew_PreDashDelegateType {
  struct SeinDashNew_PreDashDelegateType__Class *klass;
  struct MonitorData *monitor;
  struct SeinDashNew_PreDashDelegateType__Fields fields;
};
struct __declspec(align(8)) List_1_DigZone___Fields {
  struct DigZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DigZone_ {
  struct List_1_DigZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DigZone___Fields fields;
};
struct __declspec(align(8)) List_1_WaterZone___Fields {
  struct WaterZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_WaterZone_ {
  struct List_1_WaterZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_WaterZone___Fields fields;
};
struct WaterZone__Array {
  struct WaterZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WaterZone * vector[32];
};
struct IEnumerator_1_WaterZone_ {
  struct IEnumerator_1_WaterZone___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinDrill___Fields {
  bool HasState;
  struct SeinDrill * State;
};
struct CharacterStateWrapper_1_SeinDrill_ {
  struct CharacterStateWrapper_1_SeinDrill___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinDrill___Fields fields;
};
enum SeinDrill_DrillState__Enum : int32_t {
  SeinDrill_DrillState__Enum_StandBy = 0,
  SeinDrill_DrillState__Enum_Drill = 1,
};
struct SeinDrill_DrillState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinDrill_DrillState__Enum value;
};
struct SeinDrill__Fields {
  struct CharacterState__Fields _;
  bool DebugEnabled;
  float DigDashDamage;
  float SwimDashDamage;
  float DashDamageRadius;
  float DashDamageForce;
  struct LayerMask DashDamageLayerMask;
  float MinSpeedToStartDrill;
  float MaxDrillSpeed;
  float DecelSmoothTime;
  float DecelMaxSpeed;
  float DrillTurnSmoothTime;
  float SwimAngleDeltaLimit;
  float DrillEnterDistance;
  float DrillEnterMaxAngle;
  struct GameObject * DrillDashEffect;
  struct MoonAnimator * m_seinAnimator;
  struct DrillZone * m_targetDrillZone;
  enum SeinDrill_DrillState__Enum m_drillState;
  float m_dashDecelSmoothVelocity;
};
struct SeinDrill {
  struct SeinDrill__Class *klass;
  struct MonitorData *monitor;
  struct SeinDrill__Fields fields;
};
struct DrillZone__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedBooleanUberState * SerializedState;
  struct MoonTimeline * BreakTimeline;
  struct EventTriggerAnimator * ReleaseEvent;
  struct Collider * m_collider;
  struct List_1_UnityEngine_Collider_ * m_ignoringColliders;
};
struct DrillZone {
  struct DrillZone__Class *klass;
  struct MonitorData *monitor;
  struct DrillZone__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinGoldenSeinAbility___Fields {
  bool HasState;
  struct SeinGoldenSeinAbility * State;
};
struct CharacterStateWrapper_1_SeinGoldenSeinAbility_ {
  struct CharacterStateWrapper_1_SeinGoldenSeinAbility___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinGoldenSeinAbility___Fields fields;
};
enum SeinGoldenSeinAbility_State__Enum : int32_t {
  SeinGoldenSeinAbility_State__Enum_None = 0,
  SeinGoldenSeinAbility_State__Enum_Resting = 1,
  SeinGoldenSeinAbility_State__Enum_Charging = 2,
  SeinGoldenSeinAbility_State__Enum_Release = 3,
};
struct SeinGoldenSeinAbility_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinGoldenSeinAbility_State__Enum value;
};
struct SeinGoldenSeinAbility__Fields {
  struct CharacterState__Fields _;
  struct GameObject * GoldenSeinPrefab;
  struct SoundProvider * EnableSound;
  struct GameObject * QuickGlowPrefab;
  struct GameObject * ChargeEffectPrefab;
  struct GameObject * HitImpactEffect;
  float HorizontalAirMaxSpeed;
  float HorizontalAirDeceleration;
  float WaterMaxSpeed;
  float WaterDeceleration;
  float HoldButtonDurationForCharge;
  struct MoonTimeline * ChargeReleaseTimeline;
  struct EventTriggerAnimator * ChargeReleaseTrigger;
  struct EventTriggerAnimator * ChargeReleaseUnblockTrigger;
  float ChargeDamage;
  float ChargeForce;
  enum DamageWeight__Enum ChargeDamageWeight;
  float ChargeEnergyCost;
  float ChargeRadius;
  struct MoonTimeline * ChargeStartedTimeline;
  struct MoonTimeline * ChargeInterrupptedTimeline;
  struct GameObject * InterrupptedInstantiateAnimator;
  struct ConditionUberState * DisableGoldenSeinCondition;
  bool m_playChargeInterruptEffect;
  enum SeinGoldenSeinAbility_State__Enum m_currentState;
  struct MoonTimeline * m_currentlyPlayingTimeline;
  bool m_facingLeft;
  bool m_hasPerformedGlow;
  struct GlowChargeEffect * m_currentChargeEffect;
  float m_holdButtonDuration;
  bool m_buttonReleaseRequired;
  bool m_canNotifyEnergy;
  struct GoldenSein * m_goldenSeinInstance;
};
struct SeinGoldenSeinAbility {
  struct SeinGoldenSeinAbility__Class *klass;
  struct MonitorData *monitor;
  struct SeinGoldenSeinAbility__Fields fields;
};
enum GlowChargeEffect_State__Enum : int32_t {
  GlowChargeEffect_State__Enum_Invalid = 0,
  GlowChargeEffect_State__Enum_Charging = 1,
  GlowChargeEffect_State__Enum_Cancelling = 2,
};
struct GlowChargeEffect_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GlowChargeEffect_State__Enum value;
};}