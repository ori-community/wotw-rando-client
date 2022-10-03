namespace app {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet {
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Fields {
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates_* BackgroundFlight;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates_* Wait;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates_* Attack;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates_* PostAttack;
    };

    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates {
        struct PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Fields fields;
    };

    struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates___Fields {
        struct PetrifiedOwlBossDiveBombHorizontalBehaviour* m_behaviour;
        struct StateMachine_2* m_stateMachine;
        struct PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates* m_states;
        struct PetrifiedOwlBossEntity* m_entity;
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates_ {
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates___Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates___Fields fields;
    };

    struct PetrifiedOwlBossEntity__Fields {
        struct EnemyEntity__Fields _;
        struct EntityPlaceholderScalingLink* ScalingLink;
        struct SoundHost* MainSoundHost;
        struct Transform* StiltTipLeft;
        struct Transform* StiltTipRight;
        struct Transform* SpitShootBone;
        struct Transform* FeatherFlurryShootBone;
        float IdlePositionGapBetweenStilts;
        float MinDistanceForBlockingStomp;
        struct Transform* Arena1LeftBound;
        struct Transform* Arena1RightBound;
        struct Transform* Arena1InitialPosition;
        struct Transform* Arena1CenterPosition;
        struct Transform* Arena1MaxHeightPosition;
        struct Transform* Escape1ScenePosition;
        struct Transform* Arena2InitialPosition;
        struct Transform* Arena2CenterPosition;
        struct Transform* Arena2MaxHeightPosition;
        struct Transform* Arena2LeftBound;
        struct Transform* Arena2RightBound;
        struct Transform* Arena2FeatherFlurryLeftPosition;
        struct Transform* Arena2FeatherFlurryRightPosition;
        struct Transform* Arena2RakeLeftPosition;
        struct Transform* Arena2RakeRightPosition;
        float MaxTimeTargetEnclosed;
        float MaxTimeTargetFree;
        float SpitMaxRange;
        float m_targetFreeTime;
        float m_targetEnclosedTime;
        int32_t m_sideMovesSinceLastEnclosed;
        struct GameObject* HeadCollidersParent;
        struct DamageDealer__Array* m_headDamageDealers;
        struct MoonAnimation* LookAtBlendAnimation;
        struct Transform* LookAtReferenceBone;
        struct Transform* LookAtMaxValueProvider;
        float OriTargetOffsetZ;
        struct Vector2 AnglesForFullLookAt;
        float TimeToTurnHead;
        struct FloatAnimationParameter* m_lookAtHorizontalRatio;
        struct FloatAnimationParameter* m_lookAtVerticalRatio;
        struct ActiveAnimationHandle m_activeLookAtBlendAnimation;
        struct PlayerInsideZoneChecker* StiltsNarrowZone;
        struct PlayerInsideZoneChecker* StiltsWideZone;
        struct PlayerInsideZoneChecker* ClawsNarrowZone;
        struct PlayerInsideZoneChecker* ClawsWideZone;
        struct PlayerInsideZoneChecker* HeadZone;
        struct PlayerInsideZoneChecker* Arena1LeftWallZone;
        struct PlayerInsideZoneChecker* Arena1RightWallZone;
        struct PlayerInsideZoneChecker* Arena2EndEscapeZone;
        struct PlayerInsideZoneChecker* Arena2MainZone;
        struct PlayerInsideZoneChecker* Arena2GrassLeftZone;
        struct PlayerInsideZoneChecker* Arena2GrassRightZone;
        struct MoonReference_1_PetrifiedOwlBossLavaController_* m_lavaController;
        struct PetrifiedOwlBossLavaController* m_lavaControllerCached;
        float GrassTimeToTriggerLava;
        float LavaUpTime;
        float LavaCooldownTime;
        struct List_1_Moon_MoonReference_1_* InvisibleWalls;
        struct List_1_UnityEngine_Collider_* m_invisibleWallsCached;
        struct Transform* CameraFocusPoint;
        struct Vector3 StartingPosition;
        bool m_hasInitialized;
        struct PetrifiedOwlBossFight1StartBehaviour* Fight1StartBehaviour;
        struct PetrifiedOwlBossEscape1Behaviour* Escape1StartBehaviour;
        struct PetrifiedOwlBossFight2StartBehaviour* Fight2StartBehaviour;
        struct PetrifiedOwlBossFinalComboBehaviour* FinalComboBehaviour;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* EpilogueTimeline;
        bool m_shouldIncrementState;
        struct DamageReceiver_OverrideInfo* m_receiversOverrideInfo;
        struct SerializedBooleanUberState* GameFinishedState;
        struct List_1_Moon_SerializedBooleanUberState_* AllBreakableStates;
        struct SerializedByteUberState* PhasesState;
        float TransitionRatioEscape1;
        float TransitionRatioFight3;
        struct FloatAnimationParameter* m_flyToCamBlendParameter;
        struct GameObject* HitEffectPrefab;
        int32_t HitEffectPrewarmAmount;
        struct InstantiationRecycleHelper* m_hitEffectPrefabRecycler;
        struct HitFlash3D* HitFlash;
        struct AnimationCurve* DamageRequiredForStaggerCurve;
        float m_timeSinceLastHitReact;
        float m_accumulatedHitDamage;
        bool m_isInHitAccumulationWindow;
        bool m_isInHitReactionAllowedWindow;
        struct PetrifiedOwlBossEntity_OnDamageReceivedDelegate* OnDamageReceivedCallback;
        struct FirewhirlBeamSpawner* BeamSpawnerLegStompR;
        struct FirewhirlBeamSpawner* BeamSpawnerLegStompL;
        struct ProjectileSpawner* SpitSpawnerDefault;
        struct ProjectileSpawner* SpitSpawnerSeeking;
        struct ProjectileSpawner* FeatherFlurrySpawnerDefault;
        struct ProjectileSpawner* FeatherFlurrySpawnerSeeking;
        struct GameObject* StompAnticipationFeedbackPrefab;
        struct GameObject* DiveAnticipationFeedbackPrefab;
        struct BlockableLaser* Laser;
        struct Transform* Fight1StartCheckpointPosition;
        struct Transform* Escape1StartCheckpointPosition;
        struct Transform* Fight2StartCheckpointPosition;
        struct Transform* Fight3StartCheckpointPosition;
        struct Transform* DefeatedCheckpointPosition;
        struct List_1_Moon_MoonReference_1__9* Arena2GroundPiecesRefs;
        float Breakable1HealthRatio;
        float Breakable2HealthRatio;
        struct List_1_PetrifiedOwlBossGroundPiece_* m_groundPieces;
        struct List_1_PetrifiedOwlBossBaseBehaviour_* m_executingBehaviours;
        float m_attackCooldownTimer;
        float m_insideGrassZoneTimer;
        float m_outsideGrassZoneTimer;
        float m_lavaCooldownTimer;
        struct List_1_UnityEngine_GameObject_* m_shriekEffects;
        bool m_isRestoringState;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct PetrifiedOwlBossEntity {
        struct PetrifiedOwlBossEntity__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossEntity__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_PetrifiedOwlBossLavaController___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_PetrifiedOwlBossLavaController_* m_cachedProxyType;
        struct PetrifiedOwlBossLavaController* m_volatileValue;
    };

    struct MoonReference_1_PetrifiedOwlBossLavaController_ {
        struct MoonReference_1_PetrifiedOwlBossLavaController___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_PetrifiedOwlBossLavaController___Fields fields;
    };

    struct IMoonType_1_PetrifiedOwlBossLavaController_ {
        struct IMoonType_1_PetrifiedOwlBossLavaController___Class* klass;
        MonitorData* monitor;
    };

    enum class PetrifiedOwlBossLavaController_LaveDesiredState__Enum : int32_t {
        Down = 0x00000000,
        Up = 0x00000001,
    };

    struct PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Boxed {
        struct PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class* klass;
        MonitorData* monitor;
        PetrifiedOwlBossLavaController_LaveDesiredState__Enum value;
    };

    struct PetrifiedOwlBossLavaController__Fields {
        struct MonoBehaviour__Fields _;
        bool TEST_BUTTON;
        struct Transform* Visuals;
        struct Vector3 UpOffset;
        float LerpTime;
        PetrifiedOwlBossLavaController_LaveDesiredState__Enum m_desiredState;

        struct Vector3 m_visualsMoveCurrentVelocity;
        struct Vector3 m_initialLocalPos;
        float m_upRemainingTime;
    };

    struct PetrifiedOwlBossLavaController {
        struct PetrifiedOwlBossLavaController__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossLavaController__Fields fields;
    };

    struct PetrifiedOwlBossFight1StartBehaviour__Fields {
        struct PetrifiedOwlBossBaseBehaviour__Fields _;
        struct MoonTimeline* Timeline;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* WillowCeremonyTimeline;
        struct MoonReference_1_UnityEngine_GameObject_* TreeVisualsParent;
        struct CheckpointFunctionality m_checkpoint;
    };

    struct PetrifiedOwlBossFight1StartBehaviour {
        struct PetrifiedOwlBossFight1StartBehaviour__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossFight1StartBehaviour__Fields fields;
    };

    struct PetrifiedOwlBossEscape1Behaviour__Fields {
        struct PetrifiedOwlBossBaseBehaviour__Fields _;
        struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart_* EscapeParts;
        struct MoonTimeline* StayHighTimeline;
        struct MoonTimeline* JumpTimeline;
        struct MoonTimeline* FlyStartTimeline;
        struct MoonTimeline* FlyEndTimeline;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* CloudDissolveTimeline;
        struct EventTriggerAnimator* BreakArena1Event;
        struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_* Arena1Ground;
        float WaitTime;
        struct CheckpointFunctionality m_checkpoint;
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart* m_currentEscapePart;
        struct StateMachine_2* m_stateMachine;
        struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates* m_states;
    };

    struct PetrifiedOwlBossEscape1Behaviour {
        struct PetrifiedOwlBossEscape1Behaviour__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossEscape1Behaviour__Fields fields;
    };

    struct __declspec(align(8)) List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___Fields {
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart_ {
        struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___Class* klass;
        MonitorData* monitor;
        struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___Fields fields;
    };

    struct __declspec(align(8)) PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields {
        struct PlayerInsideZoneChecker* Trigger;
        struct MoonTimeline* Timeline;
        struct SerializedBooleanUberState* State;
        bool HasBeenTriggered;
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart {
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields fields;
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array {
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart* vector[32];
    };

    struct IEnumerator_1_PetrifiedOwlBossEscape1Behaviour_EscapePart_ {
        struct IEnumerator_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Fields {
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates_* Wait;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates_* Jump;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates_* FlyStart;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates_* FlyEnd;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates_* WaitForTriggers;
    };

    struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates {
        struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Fields fields;
    };

    struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Fields {
        struct PetrifiedOwlBossEscape1Behaviour* m_behaviour;
        struct StateMachine_2* m_stateMachine;
        struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates* m_states;
        struct PetrifiedOwlBossEntity* m_entity;
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates_ {
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Fields fields;
    };

    struct PetrifiedOwlBossFight2StartBehaviour__Fields {
        struct PetrifiedOwlBossBaseBehaviour__Fields _;
        struct MoonTimeline* Timeline;
        struct EventTriggerAnimator* ShriekSpawnTrigger;
        struct GameObject* ShriekPrefab;
        struct CheckpointFunctionality m_checkpoint;
    };

    struct PetrifiedOwlBossFight2StartBehaviour {
        struct PetrifiedOwlBossFight2StartBehaviour__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossFight2StartBehaviour__Fields fields;
    };

    struct PetrifiedOwlBossFinalComboBehaviour__Fields {
        struct PetrifiedOwlBossBaseBehaviour__Fields _;
        bool TEST_SKIP_INTRO;
        bool TEST_SKIP_UNTIL_END;
        struct MoonTimeline* IntroTimeline;
        struct MoonTimeline* RainOfFeathersStart;
        struct MoonTimeline* RainOfFeathersLoop;
        struct MoonTimeline* RainOfFeathersEnd;
        struct EventTriggerAnimator* ShootTrigger;
        float SpawnHeightOffset;
        struct Vector2 SpawnHorizontalArenaWidthRange;
        float TimeBetweenProjectiles;
        float ProjectileGravity;
        int32_t ProjectileDamage;
        float ProjectileSpeed;
        float ProjectileSpeedVariation;
        bool m_canSpawnSeekers;
        float TimeBetweenSeekers;
        float TimeBetweenSeekersVariation;
        float SeekerProjectileMaxSpeed;
        float SeekerDistanceToStopHoming;
        bool m_isShooting;
        float m_shootTimer;
        float m_seekerCooldown;
        struct MoonTimeline* FlyToCamTimeline;
        struct MoonTimeline* StompTimeline;
        struct EventTriggerAnimator* StompDestructionEvent;
        struct MoonTimeline* StayInAirHorizontalTimeline;
        struct MoonTimeline* DiveHorizontalTimeline;
        float DiveHorizontalDelay;
        bool m_lastDiveHorizontalMirrored;
        struct MoonTimeline* StayInAirVerticalTimeline;
        struct MoonTimeline* DiveVerticalTimeline;
        float DiveVerticalDelay;
        bool m_lastDiveVerticalMirrored;
        struct MoonTimeline* FlurryTimeline;
        float FlurryApertureConeAngle;
        int32_t FlurryTotalUniformlyDistributedProjectiles;
        int32_t FlurryTotalProjectiles;
        struct EventTriggerAnimator* FlurryShootTrigger;
        float FlurryProjectileGravity;
        int32_t FlurryProjectileDamage;
        struct Vector2 FlurryProjectileSpeedRange;
        struct MoonTimeline* DiveLaserTimeline;
        int32_t TotalLasersInSequence;
        float DiveLaserDelay;
        bool m_lastDivelaserMirrored;
        int32_t m_totalLasers;
        int32_t TotalDivesInSequence;
        int32_t m_totalDives;
        struct CheckpointFunctionality m_checkpoint;
        bool m_isMirrored;
        struct StateMachine_2* m_stateMachine;
        struct PetrifiedOwlBossFinalComboBehaviour_FinalComboStates* m_states;
        struct Enum__Array* Entries;
    };

    struct PetrifiedOwlBossFinalComboBehaviour {
        struct PetrifiedOwlBossFinalComboBehaviour__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossFinalComboBehaviour__Fields fields;
    };

    struct __declspec(align(8)) PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Fields {
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* Intro;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* RainOfFeathersStart;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* RainOfFeathersLoop;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* RainOfFeathersEnd;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* Swoop;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* Stomp;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* DiveHorizontal;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* DiveVertical;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* FeatherFlurry;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_* DiveLaser;
    };

    struct PetrifiedOwlBossFinalComboBehaviour_FinalComboStates {
        struct PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Fields fields;
    };

    struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates___Fields {
        struct PetrifiedOwlBossFinalComboBehaviour* m_behaviour;
        struct StateMachine_2* m_stateMachine;
        struct PetrifiedOwlBossFinalComboBehaviour_FinalComboStates* m_states;
        struct PetrifiedOwlBossEntity* m_entity;
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates_ {
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates___Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossFinalComboBehaviour_PetrifiedOwlBossFinalComboBehaviour_FinalComboStates___Fields fields;
    };

    struct PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct PetrifiedOwlBossEntity_OnDamageReceivedDelegate {
        struct PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_MoonReference_1__9__Fields {
        struct MoonReference_1_PetrifiedOwlBossGroundPiece___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_MoonReference_1__9 {
        struct List_1_Moon_MoonReference_1__9__Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_MoonReference_1__9__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_PetrifiedOwlBossGroundPiece___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_PetrifiedOwlBossGroundPiece_* m_cachedProxyType;
        struct PetrifiedOwlBossGroundPiece* m_volatileValue;
    };

    struct MoonReference_1_PetrifiedOwlBossGroundPiece_ {
        struct MoonReference_1_PetrifiedOwlBossGroundPiece___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_PetrifiedOwlBossGroundPiece___Fields fields;
    };

    struct IMoonType_1_PetrifiedOwlBossGroundPiece_ {
        struct IMoonType_1_PetrifiedOwlBossGroundPiece___Class* klass;
        MonitorData* monitor;
    };

    struct PetrifiedOwlBossGroundPiece__Fields {
        struct MonoBehaviour__Fields _;
        bool Breakable;
        struct ObjectInsideZoneChecker* ProvidedGroundZoneBounds;
        struct SerializedBooleanUberState* State;
        struct MoonTimeline* BreakTimeline;
        struct ObjectInsideZoneChecker* BrekableZoneChecker;
        struct MoonTimeline* OffLimitsAnticTimeline;
    };

    struct PetrifiedOwlBossGroundPiece {
        struct PetrifiedOwlBossGroundPiece__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBossGroundPiece__Fields fields;
    };

    struct MoonReference_1_PetrifiedOwlBossGroundPiece___Array {
        struct MoonReference_1_PetrifiedOwlBossGroundPiece___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonReference_1_PetrifiedOwlBossGroundPiece_* vector[32];
    };

    struct IEnumerator_1_Moon_MoonReference_1__9 {
        struct IEnumerator_1_Moon_MoonReference_1__9__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PetrifiedOwlBossGroundPiece___Fields {
        struct PetrifiedOwlBossGroundPiece__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PetrifiedOwlBossGroundPiece_ {
        struct List_1_PetrifiedOwlBossGroundPiece___Class* klass;
        MonitorData* monitor;
        struct List_1_PetrifiedOwlBossGroundPiece___Fields fields;
    };

    struct PetrifiedOwlBossGroundPiece__Array {
        struct PetrifiedOwlBossGroundPiece__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PetrifiedOwlBossGroundPiece* vector[32];
    };

    struct IEnumerator_1_PetrifiedOwlBossGroundPiece_ {
        struct IEnumerator_1_PetrifiedOwlBossGroundPiece___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PetrifiedOwlBossBaseBehaviour___Fields {
        struct PetrifiedOwlBossBaseBehaviour__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PetrifiedOwlBossBaseBehaviour_ {
        struct List_1_PetrifiedOwlBossBaseBehaviour___Class* klass;
        MonitorData* monitor;
        struct List_1_PetrifiedOwlBossBaseBehaviour___Fields fields;
    };

    struct PetrifiedOwlBossBaseBehaviour__Array {
        struct PetrifiedOwlBossBaseBehaviour__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PetrifiedOwlBossBaseBehaviour* vector[32];
    };

    struct IEnumerator_1_PetrifiedOwlBossBaseBehaviour_ {
        struct IEnumerator_1_PetrifiedOwlBossBaseBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__StaticFields {
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__VTable vtable;
    };

    struct IMoonType_1_PetrifiedOwlBossLavaController___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_PetrifiedOwlBossLavaController___StaticFields {
    };

    struct IMoonType_1_PetrifiedOwlBossLavaController___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_PetrifiedOwlBossLavaController___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_PetrifiedOwlBossLavaController___VTable vtable;
    };

    struct PetrifiedOwlBossLavaController_LaveDesiredState__Enum__VTable {
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

    struct PetrifiedOwlBossLavaController_LaveDesiredState__Enum__StaticFields {
    };

    struct PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossLavaController_LaveDesiredState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossLavaController_LaveDesiredState__Enum__VTable vtable;
    };

    struct PetrifiedOwlBossLavaController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PetrifiedOwlBossLavaController__StaticFields {
    };

    struct PetrifiedOwlBossLavaController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossLavaController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossLavaController__VTable vtable;
    };

    struct PetrifiedOwlBossLavaController___VTable {
    };

    struct PetrifiedOwlBossLavaController___StaticFields {
    };

    struct PetrifiedOwlBossLavaController___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossLavaController___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossLavaController___VTable vtable;
    };

    struct MoonReference_1_PetrifiedOwlBossLavaController___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
        VirtualInvokeData get_IsStaticValue;
        VirtualInvokeData GetTypeData;
        VirtualInvokeData CanResolve;
        VirtualInvokeData get_IsCrossSceneReference;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct MoonReference_1_PetrifiedOwlBossLavaController___StaticFields {
    };

    struct MoonReference_1_PetrifiedOwlBossLavaController___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_PetrifiedOwlBossLavaController___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_PetrifiedOwlBossLavaController___VTable vtable;
    };

    struct DamageDealer_DamageDirectionMode___VTable {
    };

    struct DamageDealer_DamageDirectionMode___StaticFields {
    };

    struct DamageDealer_DamageDirectionMode___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageDealer_DamageDirectionMode___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageDealer_DamageDirectionMode___VTable vtable;
    };

    struct PetrifiedOwlBossFight1StartBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_States;
        VirtualInvokeData get_StateMachine;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData CanTakeDamage;
        VirtualInvokeData CopyData;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData IsLocomotionFollowAllowed;
        VirtualInvokeData ModifyRootMotion;
        VirtualInvokeData ModifyDesiredDamageDirectionMode;
        VirtualInvokeData ModifyMaxLookAt;
    };

    struct PetrifiedOwlBossFight1StartBehaviour__StaticFields {
    };

    struct PetrifiedOwlBossFight1StartBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossFight1StartBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossFight1StartBehaviour__VTable vtable;
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart__StaticFields {
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__VTable vtable;
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__VTable {
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__StaticFields {
    };

    struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__VTable vtable;
    };

    struct IEnumerator_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___StaticFields {
    };

    struct IEnumerator_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___VTable vtable;
    };

    struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___VTable {
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

    struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___StaticFields {
        struct PetrifiedOwlBossEscape1Behaviour_EscapePart__Array* _emptyArray;
    };

    struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart___VTable vtable;
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___StaticFields {
    };

    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___VTable vtable;
    };

    struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__StaticFields {
    };

    struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__VTable vtable;
    };

    struct PetrifiedOwlBossEscape1Behaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_States;
        VirtualInvokeData get_StateMachine;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData CanTakeDamage;
        VirtualInvokeData CopyData;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData IsLocomotionFollowAllowed;
        VirtualInvokeData ModifyRootMotion;
        VirtualInvokeData ModifyDesiredDamageDirectionMode;
        VirtualInvokeData ModifyMaxLookAt;
    };

    struct PetrifiedOwlBossEscape1Behaviour__StaticFields {
    };

    struct PetrifiedOwlBossEscape1Behaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBossEscape1Behaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBossEscape1Behaviour__VTable vtable;
    };

    struct PetrifiedOwlBossFight2StartBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_States;
        VirtualInvokeData get_StateMachine;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData CanTakeDamage;
        VirtualInvokeData CopyData;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData IsLocomotionFollowAllowed;
        VirtualInvokeData ModifyRootMotion;
        VirtualInvokeData ModifyDesiredDamageDirectionMode;
        VirtualInvokeData ModifyMaxLookAt;
    };

} // namespace app
