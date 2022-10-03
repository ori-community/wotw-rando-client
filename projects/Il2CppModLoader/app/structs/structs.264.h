namespace app {
    struct BaseMeshEffect__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaseMeshEffect__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaseMeshEffect__VTable vtable;
    };

    struct PositionAsUV1__Fields {
        struct BaseMeshEffect__Fields _;
    };

    struct PositionAsUV1 {
        struct PositionAsUV1__Class* klass;
        MonitorData* monitor;
        struct PositionAsUV1__Fields fields;
    };

    struct PositionAsUV1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData IsActive;
        VirtualInvokeData OnRectTransformDimensionsChange;
        VirtualInvokeData OnBeforeTransformParentChanged;
        VirtualInvokeData OnTransformParentChanged;
        VirtualInvokeData OnDidApplyAnimationProperties;
        VirtualInvokeData OnCanvasGroupChanged;
        VirtualInvokeData OnCanvasHierarchyChanged;
        VirtualInvokeData IsDestroyed;
        VirtualInvokeData ModifyMesh;
        VirtualInvokeData ModifyMesh_1;
        VirtualInvokeData ModifyMesh_2;
        VirtualInvokeData ModifyMesh_3;
    };

    struct PositionAsUV1__StaticFields {
    };

    struct PositionAsUV1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PositionAsUV1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PositionAsUV1__VTable vtable;
    };

    struct __declspec(align(8)) FrameProfiler__Fields {
        struct FrameProfiler_FrameData__Array* m_frameHistory;
        struct FrameProfiler_FrameData* m_currentFrame;
        struct Stopwatch* m_stopwatch;
        int32_t m_historyIndex;
        bool m_hasRenderedFrame;
    };

    struct FrameProfiler {
        struct FrameProfiler__Class* klass;
        MonitorData* monitor;
        struct FrameProfiler__Fields fields;
    };

    struct __declspec(align(8)) List_1_FrameProfiler_MetricInfo___Fields {
        struct FrameProfiler_MetricInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FrameProfiler_MetricInfo_ {
        struct List_1_FrameProfiler_MetricInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_FrameProfiler_MetricInfo___Fields fields;
    };

    enum class Metric__Enum : int32_t {
        FrameTime = 0x00000000,
        CPUTime = 0x00000001,
        GPUTime = 0x00000002,
        RenderLoopJob = 0x00000003,
        GfxWaitForPresent = 0x00000004,
        WaitForRenderJobs = 0x00000005,
        ProfilerSelfImpact = 0x00000006,
        Shuriken_Update = 0x00000007,
        Shuriken_WaitForRendering = 0x00000008,
        Shuriken_EndUpdateAll = 0x00000009,
        ParticleEmitter_Update = 0x0000000a,
        Physics_SyncRigidbodyTransform = 0x0000000b,
        Physics_PhysicsFetchResults = 0x0000000c,
        Physics_Simulate = 0x0000000d,
        Network_UpdateOnMainThread = 0x0000000e,
        Preload_TimesliceIntegration = 0x0000000f,
        GUIManager_DoGUIEvent = 0x00000010,
        Render_UpdateAllRenderers = 0x00000011,
        Camera_Render = 0x00000012,
        AudioManager_Update = 0x00000013,
        Camera_Cull = 0x00000014,
        Camera_Render_Standalone = 0x00000015,
        CullResults_CreateRenderScene = 0x00000016,
        MainThread_SemaphoreWait = 0x00000017,
        Shuriken_ScheduleGeometryJobs = 0x00000018,
        MainThreadExt_SemaphoreWait = 0x00000019,
        AudioManager_FixedUpdate = 0x0000001a,
        FMOD_Update = 0x0000001b,
        PreloadManager_Process = 0x0000001c,
        PreloadManager_SingleStep = 0x0000001d,
        CoroutinesDelayedCalls = 0x0000001e,
        BuiltinLast = 0x0000001e,
        SRP_GameView = 0x0000001f,
        MainThreadWaitForPresent = 0x00000020,
        MainThread_StealWork = 0x00000021,
        RenderThreadTime = 0x00000022,
        Async_ResourceUpload = 0x00000023,
        PlayerLoop = 0x00000024,
        FixedUpdate = 0x00000025,
        Update = 0x00000026,
        EarlyUpdate = 0x00000027,
        PreUpdate = 0x00000028,
        PreLateUpdate = 0x00000029,
        PostLateUpdate = 0x0000002a,
        SimulationCost = 0x0000002b,
        TimeSliceAndIntegration = 0x0000002c,
        WaitForTargetFPS = 0x0000002d,
        InconsistentMetrics = 0x0000002e,
        UberGCManager = 0x0000002f,
        TimesliceSystem_LateUpdate = 0x00000030,
        SRP_OnRenderImage = 0x00000031,
        Prewarm_Shaders = 0x00000032,
        NSFS_Constructor = 0x00000033,
        NSFS_Exists = 0x00000034,
        NSFS_Copy = 0x00000035,
        NSFS_ReadAllBytes = 0x00000036,
        NSFS_Delete = 0x00000037,
        NSFS_Commit = 0x00000038,
        NSFS_ReaderConstructor = 0x00000039,
        NSFS_WriterDispose = 0x0000003a,
        NSFS_WriterDisposeA = 0x0000003b,
        NSFS_WriterDisposeB = 0x0000003c,
        NSFS_WriterDisposeC = 0x0000003d,
        NSFS_WriterDisposeD = 0x0000003e,
        NSFS_WriterDisposeE = 0x0000003f,
        NSFS_WriterDisposeF = 0x00000040,
        NSFS_WriterFlush = 0x00000041,
        NSFS_AsyncWrite = 0x00000042,
        MicroProfilerGraph = 0x00000043,
        UberPostProcess_UpdateHDR = 0x00000044,
        WWiseBootstrap_Update = 0x00000045,
        WWiseSyncProcessor_Update = 0x00000046,
        WWise_UpdateState = 0x00000047,
        WWise_LateUpdate = 0x00000048,
        Wwise_LoadSoundBankCollection = 0x00000049,
        Wwise_UnloadSoundBankCollection = 0x0000004a,
        Wwise_LoadSoundBank = 0x0000004b,
        Wwise_RequestUnloadSoundBank = 0x0000004c,
        Wwise_DoUnloadBanks = 0x0000004d,
        AuxiliarySendZone_Update = 0x0000004e,
        PlatformMovement = 0x0000004f,
        PlatformMovement_UpdateRays = 0x00000050,
        PlatformMovement_SetSurfaceDetailRTPCs = 0x00000051,
        SeinLogicCycle_FixedUpdate = 0x00000052,
        MixerManager_FixedUpdate = 0x00000053,
        SceneManagerScene_EnableDisabledScene = 0x00000054,
        SceneManagerScene_PreEnableScene = 0x00000055,
        ScenesManager_FixedUpdate = 0x00000056,
        ScenesManager_ExtrapoltatePosition = 0x00000057,
        ScenesManager_ProcessQueue = 0x00000058,
        ScenesManager_UpdateUtility = 0x00000059,
        ScenesManager_UpdateUtilityPosition = 0x0000005a,
        ScenesManager_UpdateUtilityEnable = 0x0000005b,
        ScenesManager_UpdateUtilityUnload = 0x0000005c,
        ScenesManager_SetHidden = 0x0000005d,
        ScenesManager_SetReady = 0x0000005e,
        UberInteraction_InteractionUpdate = 0x0000005f,
        UberInteraction_ManagerUpdate = 0x00000060,
        ScenesManager_UpdateUtilityLoad = 0x00000061,
        DamageReceiver_ReceiveDamage = 0x00000062,
        DamageReceiver_ProcessAllDamage = 0x00000063,
        Projectile_FixedUpdate = 0x00000064,
        DropPickup_SuckTowardsPlayer = 0x00000065,
        GameplayCamera_FixedUpdate = 0x00000066,
        GameplayCamera_CalculateOffset = 0x00000067,
        ColorVariationManager_Update = 0x00000068,
        LightInfluenceSystem_Update = 0x00000069,
        LightCullingSystem_Update = 0x0000006a,
        PlayerInput_FixedUpdate = 0x0000006b,
        CameraFrustumOptimizer = 0x0000006c,
        CameraFrustumOptimizer_UnhideEarlyZ = 0x0000006d,
        CameraFrustumOptimizer_DeferredActivations = 0x0000006e,
        CameraFrustumOptimizer_UpdateOptimizeables = 0x0000006f,
        CameraFrustumOptimizer_PrefetchAllBounds = 0x00000070,
        TraceGroundMovement = 0x00000071,
        PlayerAbilities_HasAbility = 0x00000072,
        SpellInventory_HasSpell = 0x00000073,
        MicroProfiler_EndFrame = 0x00000074,
        FrameCaptureTester_LateUpdate = 0x00000075,
        TimeSlicedActivationTask_Config = 0x00000076,
        TimeslicedUnload_Destroy = 0x00000077,
        TimeslicedResourceDestroy = 0x00000078,
        TimeslicedResourceUnload = 0x00000079,
        ResourcesReconstruction = 0x0000007a,
        TimeslicedActivation_ProcessObject = 0x0000007b,
        TimeslicedActivation_EnableObject = 0x0000007c,
        TimeslicedActivation_DisableObject = 0x0000007d,
        TimeslicedActivation_Profiling = 0x0000007e,
        SceneRoot_DisableTimeSlicedObjects = 0x0000007f,
        SceneRoot_EarlyStart = 0x00000080,
        SceneRoot_EnableSceneTimeSliced = 0x00000081,
        SceneRoot_PreEnableScene = 0x00000082,
        SceneRoot_InitActivationTask = 0x00000083,
        SceneRoot_Awake = 0x00000084,
        SceneRoot_Save = 0x00000085,
        SceneRoot_PostEnableScene = 0x00000086,
        SceneRoot_SetMoonHiddenToHierarchy = 0x00000087,
        SceneRoot_DisableSceneTimesliced = 0x00000088,
        SceneRoot_OnPreDisableScene = 0x00000089,
        SceneRoot_NotifySceneRootPreDisableObservers = 0x0000008a,
        SceneRoot_SetIsReady = 0x0000008b,
        SceneRoot_ChangeState = 0x0000008c,
        SceneRoot_RefreshObjectsToTimesliceEnableList = 0x0000008d,
        ScenesManager_EnableDisabledScenesAtPosition = 0x0000008e,
        ScenesManager_AdditivelyLoadAtPosition = 0x0000008f,
        ScenesManager_AdditivelyLoadScenesInsideRect = 0x00000090,
        ScenesManager_UnloadAtPosition = 0x00000091,
        ScenesManager_UnloadScene = 0x00000092,
        ScenesManager_Update = 0x00000093,
        ScenesManager_RegisterSceneByName = 0x00000094,
        ScenesManager_QueryQuadTree = 0x00000095,
        BugReporter_Update = 0x00000096,
        SeinLogicCycle_OnUpdate = 0x00000097,
        SpiritLeash_Update = 0x00000098,
        MoonTrail_Simulate = 0x00000099,
        SeinUI_FixedUpdate = 0x0000009a,
        XboxOneController_FixedUpdate_Vibration = 0x0000009b,
        XboxOneController_FixedUpdate_AutoSwitch = 0x0000009c,
        XboxOneController_SetCurrentMotorVibration = 0x0000009d,
        XboxOneController_Update = 0x0000009e,
        XboxOneFlow_FixedUpdate = 0x0000009f,
        CameraTargetProvider_Update = 0x000000a0,
        CameraTargetProvider_GetTargets = 0x000000a1,
        DynamicCamera_UpdateTargetting = 0x000000a2,
        DynamicCamera_CalcWeights = 0x000000a3,
        DynamicCamera_CalcFraming = 0x000000a4,
        DeltaTime = 0x000000a5,
        FixedDeltaTime = 0x000000a6,
        FixedTimeOffset = 0x000000a7,
        DRSScale = 0x000000a8,
        RTSpinLock = 0x000000a9,
        DrawCallCount = 0x000000aa,
        UberWaterControl_UpdateSim = 0x000000ab,
        VerletStructure_Simulate = 0x000000ac,
        DeltaTimeManager = 0x000000ad,
        DamageDealer_OnFixedUpdate = 0x000000ae,
        Update_ChangeStateOnCondition = 0x000000af,
        UberShaderRuntimeUpdate = 0x000000b0,
        GameplaySoundManager = 0x000000b1,
        GameplaySoundManager_SwitchSpecificUpdate = 0x000000b2,
        Pickup_ChangeColliderSize = 0x000000b3,
        BehaviourTree_Execute = 0x000000b4,
        CharacterPlatformMovementManager = 0x000000b5,
        AnimatedCritterController_Update = 0x000000b6,
        DamageDealer_DealDamage = 0x000000b7,
        DamageDealer_TriggerStay = 0x000000b8,
        CharacterPlatformMovement_OnCollision = 0x000000b9,
        UberTransformFollow_RuntimeUpdate = 0x000000ba,
        Digzone_Checks = 0x000000bb,
        SwitchController = 0x000000bc,
        Vibration_PlayVibrate = 0x000000bd,
        SwitchController_Vibrate = 0x000000be,
        Playfab_SendCachedRaceData = 0x000000bf,
        MoonDriver_EntryManagement = 0x000000c0,
        MoonDriver_MoveEntry = 0x000000c1,
        MoonDriver_EntryUpdate = 0x000000c2,
        SkinningModifier_UpdatePhysics = 0x000000c3,
        VerletSkinningModifier_UpdatePhysics = 0x000000c4,
        PhysicalSystemManager_UpdatePhysics = 0x000000c5,
        PhysicalSystemManger_Awake = 0x000000c6,
        PhysicalSystemManger_OnEnable = 0x000000c7,
        PhysicalSystemManger_Start = 0x000000c8,
        PhysicalSystemManger_Suspend = 0x000000c9,
        PhysicalSystemManger_Resume = 0x000000ca,
        PhysicalSystemManager_FreezeBodies = 0x000000cb,
        PhysicalSystemManager_UnfreezeBodies = 0x000000cc,
        AttachSpriteToPhysicsSystem = 0x000000cd,
        TentaclesPhysics_FixedUpdate = 0x000000ce,
        MoonFlagReady = 0x000000cf,
        MoonFlagHidden = 0x000000d0,
        MoonFlagSimulation = 0x000000d1,
        CamerController_Post = 0x000000d2,
        SRP_scopeBegin = 0x000000d3,
        SRP_prepare = 0x000000d4,
        SRP_prepareRender = 0x000000d5,
        SRP_prepareScene = 0x000000d6,
        SRP_postsAndUI = 0x000000d7,
        SRP_scenePosts = 0x000000d8,
        SRP_uiPosts = 0x000000d9,
        SRP_ui = 0x000000da,
        SRP_slice0 = 0x000000db,
        SRP_slice1 = 0x000000dc,
        SRP_slice2 = 0x000000dd,
        SRP_slice3 = 0x000000de,
        SRP_slice4 = 0x000000df,
        SRP_slice5 = 0x000000e0,
        SRP_slice6 = 0x000000e1,
        SRP_slice7 = 0x000000e2,
        SRP_update = 0x000000e3,
        SRP_prepareSlices = 0x000000e4,
        SRP_drawSlices = 0x000000e5,
        SRP_acquireSharedSliceRTs = 0x000000e6,
        SRP_clearSlice = 0x000000e7,
        SRP_startSlice = 0x000000e8,
        SRP_depthPrecull = 0x000000e9,
        SRP_acquireMRT = 0x000000ea,
        SRP_clearMRT = 0x000000eb,
        SRP_earlyZ = 0x000000ec,
        SRP_objects = 0x000000ed,
        SRP_water = 0x000000ee,
        SRP_opaque3DObjects = 0x000000ef,
        SRP_otherObjects = 0x000000f0,
        SRP_maskErasingObjects = 0x000000f1,
        SRP_maskedObjects = 0x000000f2,
        SRP_reflectionRefraction = 0x000000f3,
        SRP_lights = 0x000000f4,
        SRP_emissivity = 0x000000f5,
        SRP_darkeningPost = 0x000000f6,
        SRP_emissivityPost = 0x000000f7,
        SRP_motionVectors = 0x000000f8,
        SRP_cameraMotion = 0x000000f9,
        SRP_TAA = 0x000000fa,
        SRP_FXAA = 0x000000fb,
        SRP_motionBlur = 0x000000fc,
        SRP_blurSlice = 0x000000fd,
        SRP_composeToScene = 0x000000fe,
        SRP_frontToBackBgColor = 0x000000ff,
        SRP_releaseSharedSliceRTs = 0x00000100,
        SRP_trails = 0x00000101,
        SRP_godrays = 0x00000102,
        SRP_godraysBlurAndPost = 0x00000103,
        SRP_scopeEnd = 0x00000104,
        Animation_Total = 0x00000105,
        Animation_Verlet = 0x00000106,
        Animation_SimpleSway = 0x00000107,
        Animation_SimpleSwayBoss = 0x00000108,
        Animation_ParallelAnimatorOverhead = 0x00000109,
        Animation_TreeUpdate = 0x0000010a,
        Animation_Postprocessing = 0x0000010b,
        Entity_Update = 0x0000010c,
        UnknownEntity_Update = 0x0000010d,
        SkeetoEntity_Update = 0x0000010e,
        TentacleEntity_Update = 0x0000010f,
        MortarEntity_Update = 0x00000110,
        DropSlugEntity_Update = 0x00000111,
        GasballEntity_Update = 0x00000112,
        SpiderBatEntity_Update = 0x00000113,
        PiranhaEntity_Update = 0x00000114,
        LizardEntity_Update = 0x00000115,
        LaserShooterEntity_Update = 0x00000116,
        SpikeSlugEntity_Update = 0x00000117,
        SneezeSlug_Update = 0x00000118,
        SpiderlingEntity_Update = 0x00000119,
        CrabEntity_Update = 0x0000011a,
        MinerEntity_Update = 0x0000011b,
        SandWormEntity_Update = 0x0000011c,
        Entity_IsLocomotionPausedByTask = 0x0000011d,
        Entity_IsLocomotionPausedByNode = 0x0000011e,
        VerletUndergroundPlantController = 0x0000011f,
        FireFlyHive_Update = 0x00000120,
        SandWormEntity_SnakeSolver = 0x00000121,
        SandWormEntity_SandWormTailPost = 0x00000122,
        SandWormEntity_UpdateSegments = 0x00000123,
        SandWormEntity_RotateHead = 0x00000124,
        SimpleGenericPool_GetInstance = 0x00000125,
        SimpleGenericPool_Destroy = 0x00000126,
        UberSpawnManager_FixedUpdate = 0x00000127,
        Leash_Attackables = 0x00000128,
        Leash_Surfaces = 0x00000129,
        WorldMapLogic = 0x0000012a,
        EntityPlaceholder = 0x0000012b,
        TimelineEntity = 0x0000012c,
        LightCanvas_TimeslicedSetPos = 0x0000012d,
        LightCanvas_Update = 0x0000012e,
        MoonTimeline_OnDisable = 0x0000012f,
        MoonTimeline_OnEnable = 0x00000130,
        MultiplyLayerModifier = 0x00000131,
        TentacleAnimationPostProcess = 0x00000132,
        TentaclePhysicsPostprocess = 0x00000133,
        MoonEOF = 0x00000134,
        LineOfSight_Ray = 0x00000135,
        LineOfSight_Sphere = 0x00000136,
        WaterSplashObject = 0x00000137,
        SeinDeadlyDarknessController = 0x00000138,
        SpiritLightVisualAffectorManager = 0x00000139,
        WaterFallMask = 0x0000013a,
        StretchGameObjectSystem = 0x0000013b,
        PickupBase = 0x0000013c,
        DropPickup = 0x0000013d,
        CollisionSoundSource = 0x0000013e,
        LimitedLifetime = 0x0000013f,
        ParticleSystemEmissionRateOverDistance = 0x00000140,
        ProtectiveLightRadial = 0x00000141,
        UnparentTrailRenderer = 0x00000142,
        PreventGroundPenetration = 0x00000143,
        MoonEffectResolve = 0x00000144,
        MoonEffectRevert = 0x00000145,
        MoonFlagsSystem = 0x00000146,
        Count = 0x00000147,
    };

    struct Metric__Enum__Boxed {
        struct Metric__Enum__Class* klass;
        MonitorData* monitor;
        Metric__Enum value;
    };

    struct __declspec(align(8)) FrameProfiler_MetricInfo__Fields {
        Metric__Enum Metric;

        struct String* ShortName;
        struct Color Color;
    };

    struct FrameProfiler_MetricInfo {
        struct FrameProfiler_MetricInfo__Class* klass;
        MonitorData* monitor;
        struct FrameProfiler_MetricInfo__Fields fields;
    };

    struct FrameProfiler_MetricInfo__Array {
        struct FrameProfiler_MetricInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FrameProfiler_MetricInfo* vector[32];
    };

    struct IEnumerator_1_FrameProfiler_MetricInfo_ {
        struct IEnumerator_1_FrameProfiler_MetricInfo___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) FrameProfiler_FrameData__Fields {
        int64_t NsEnd;
        struct FrameProfiler_FrameSample__Array* Samples;
    };

    struct FrameProfiler_FrameData {
        struct FrameProfiler_FrameData__Class* klass;
        MonitorData* monitor;
        struct FrameProfiler_FrameData__Fields fields;
    };

    struct __declspec(align(8)) FrameProfiler_FrameSample__Fields {
        int64_t NsStart;
        int64_t NsEnd;
        struct FrameProfiler_MetricInfo* Metric;
    };

    struct FrameProfiler_FrameSample {
        struct FrameProfiler_FrameSample__Class* klass;
        MonitorData* monitor;
        struct FrameProfiler_FrameSample__Fields fields;
    };

    struct FrameProfiler_FrameSample__Array {
        struct FrameProfiler_FrameSample__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FrameProfiler_FrameSample* vector[32];
    };

    struct FrameProfiler_FrameData__Array {
        struct FrameProfiler_FrameData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FrameProfiler_FrameData* vector[32];
    };

    struct Metric__Enum__VTable {
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

    struct Metric__Enum__StaticFields {
    };

    struct Metric__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Metric__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Metric__Enum__VTable vtable;
    };

    struct FrameProfiler_MetricInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FrameProfiler_MetricInfo__StaticFields {
    };

    struct FrameProfiler_MetricInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler_MetricInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler_MetricInfo__VTable vtable;
    };

    struct FrameProfiler_MetricInfo__Array__VTable {
    };

    struct FrameProfiler_MetricInfo__Array__StaticFields {
    };

    struct FrameProfiler_MetricInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler_MetricInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler_MetricInfo__Array__VTable vtable;
    };

    struct IEnumerator_1_FrameProfiler_MetricInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FrameProfiler_MetricInfo___StaticFields {
    };

    struct IEnumerator_1_FrameProfiler_MetricInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FrameProfiler_MetricInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_FrameProfiler_MetricInfo___VTable vtable;
    };

    struct List_1_FrameProfiler_MetricInfo___VTable {
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

    struct List_1_FrameProfiler_MetricInfo___StaticFields {
        struct FrameProfiler_MetricInfo__Array* _emptyArray;
    };

    struct List_1_FrameProfiler_MetricInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_FrameProfiler_MetricInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_FrameProfiler_MetricInfo___VTable vtable;
    };

    struct FrameProfiler_FrameSample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FrameProfiler_FrameSample__StaticFields {
    };

    struct FrameProfiler_FrameSample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler_FrameSample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler_FrameSample__VTable vtable;
    };

    struct FrameProfiler_FrameSample__Array__VTable {
    };

    struct FrameProfiler_FrameSample__Array__StaticFields {
    };

    struct FrameProfiler_FrameSample__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler_FrameSample__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler_FrameSample__Array__VTable vtable;
    };

    struct FrameProfiler_FrameData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FrameProfiler_FrameData__StaticFields {
    };

    struct FrameProfiler_FrameData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler_FrameData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler_FrameData__VTable vtable;
    };

    struct FrameProfiler_FrameData__Array__VTable {
    };

    struct FrameProfiler_FrameData__Array__StaticFields {
    };

    struct FrameProfiler_FrameData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler_FrameData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler_FrameData__Array__VTable vtable;
    };

    struct FrameProfiler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FrameProfiler__StaticFields {
        struct List_1_FrameProfiler_MetricInfo_* s_metrics;
        struct Int32__Array* s_metricIndices;
        int32_t MetricCount;
        int32_t HistoryLength;
        struct FrameProfiler* Instance;
    };

    struct FrameProfiler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler__VTable vtable;
    };

    struct __declspec(align(8)) FrameProfiler_c_DisplayClass17_0__Fields {
        int32_t i;
    };

    struct FrameProfiler_c_DisplayClass17_0 {
        struct FrameProfiler_c_DisplayClass17_0__Class* klass;
        MonitorData* monitor;
        struct FrameProfiler_c_DisplayClass17_0__Fields fields;
    };

    struct FrameProfiler_c_DisplayClass17_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FrameProfiler_c_DisplayClass17_0__StaticFields {
    };

    struct FrameProfiler_c_DisplayClass17_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameProfiler_c_DisplayClass17_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameProfiler_c_DisplayClass17_0__VTable vtable;
    };

    struct PlayerLoopSystem___VTable {
    };

    struct PlayerLoopSystem___StaticFields {
    };

    struct PlayerLoopSystem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerLoopSystem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerLoopSystem___VTable vtable;
    };

    enum class Marker__Enum : int32_t {
        SceneStreaming = 0x00000000,
        Timeslicing = 0x00000001,
        ShaderPrewarm = 0x00000002,
        PoolingPrewarm = 0x00000003,
        AudioPrewarm = 0x00000004,
        LoadIntro = 0x00000005,
        AsyncUpload = 0x00000006,
        Custom = 0x00000007,
        Count = 0x00000008,
    };

    struct Marker__Enum__Boxed {
        struct Marker__Enum__Class* klass;
        MonitorData* monitor;
        Marker__Enum value;
    };

    struct Marker__Enum__VTable {
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

    struct Marker__Enum__StaticFields {
    };

    struct Marker__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Marker__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Marker__Enum__VTable vtable;
    };

    enum class Stat__Enum : int32_t {
        Mono_Update_Called = 0x00000005,
        Mono_Update_Bypassed = 0x00000006,
        Mono_FixedUpdate_Called = 0x00000007,
        Mono_FixedUpdate_Bypassed = 0x00000008,
        AllocDefault = 0x00000009,
        AllocTempJob = 0x0000000a,
        AllocTempBackgroundJob = 0x0000000b,
        AllocGameobject = 0x0000000c,
        AllocGfx = 0x0000000d,
        AllocTempThread = 0x0000000e,
        GPUMemorySize = 0x0000000f,
        GCTotalMemory = 0x00000010,
        MaxHeapSize = 0x00000011,
        GarbageCollect = 0x00000012,
        ScenesActive = 0x00000013,
        DynamicResolutionScale = 0x00000014,
        Count = 0x00000015,
    };

    struct Stat__Enum__Boxed {
        struct Stat__Enum__Class* klass;
        MonitorData* monitor;
        Stat__Enum value;
    };

    struct Stat__Enum__VTable {
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

    struct Stat__Enum__StaticFields {
    };

    struct Stat__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Stat__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Stat__Enum__VTable vtable;
    };

    struct __declspec(align(8)) MicroProfiler_SampleStats__Fields {
        struct MicroProfiler_MetricStats__Array* m_metricStats;
        struct MicroProfiler_StatInfo__Array* m_stats;
        struct MicroProfiler_MarkerInfo__Array* m_markers;
        int32_t m_frameId;
    };

    struct MicroProfiler_SampleStats {
        struct MicroProfiler_SampleStats__Class* klass;
        MonitorData* monitor;
        struct MicroProfiler_SampleStats__Fields fields;
    };

    struct MicroProfiler_MetricStats {
        int64_t PeakFrameDuration;
        int64_t TimeInvocated;
        uint32_t InvocationsCount;
        uint32_t PeakFrameInvocationsCount;
        bool Invoked;
    };

    struct MicroProfiler_MetricStats__Boxed {
        struct MicroProfiler_MetricStats__Class* klass;
        MonitorData* monitor;
        struct MicroProfiler_MetricStats fields;
    };

    struct MicroProfiler_MetricStats__Array {
        struct MicroProfiler_MetricStats__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MicroProfiler_MetricStats vector[32];
    };

    enum class MicroProfiler_StatType__Enum : uint8_t {
        Bool = 0x00,
        Float = 0x01,
        Int = 0x02,
    };

    struct MicroProfiler_StatType__Enum__Boxed {
        struct MicroProfiler_StatType__Enum__Class* klass;
        MonitorData* monitor;
        MicroProfiler_StatType__Enum value;
    };

    struct MicroProfiler_StatInfo {
        float m_value;
        MicroProfiler_StatType__Enum m_type;
    };

    struct MicroProfiler_StatInfo__Boxed {
        struct MicroProfiler_StatInfo__Class* klass;
        MonitorData* monitor;
        struct MicroProfiler_StatInfo fields;
    };

    struct MicroProfiler_StatInfo__Array {
        struct MicroProfiler_StatInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MicroProfiler_StatInfo vector[32];
    };

    enum class MicroProfiler_MarkerInfo_FrameFlags__Enum : uint8_t {
        Inactive = 0x00,
        Begun = 0x01,
        Active = 0x02,
        Ended = 0x04,
    };

    struct MicroProfiler_MarkerInfo_FrameFlags__Enum__Boxed {
        struct MicroProfiler_MarkerInfo_FrameFlags__Enum__Class* klass;
        MonitorData* monitor;
        MicroProfiler_MarkerInfo_FrameFlags__Enum value;
    };

    struct MicroProfiler_MarkerInfo {
        MicroProfiler_MarkerInfo_FrameFlags__Enum m_frameFlags;
    };

    struct MicroProfiler_MarkerInfo__Boxed {
        struct MicroProfiler_MarkerInfo__Class* klass;
        MonitorData* monitor;
        struct MicroProfiler_MarkerInfo fields;
    };

    struct MicroProfiler_MarkerInfo__Array {
        struct MicroProfiler_MarkerInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MicroProfiler_MarkerInfo vector[32];
    };

    struct MicroProfiler_MetricStats__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MicroProfiler_MetricStats__StaticFields {
    };

    struct MicroProfiler_MetricStats__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MicroProfiler_MetricStats__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MicroProfiler_MetricStats__VTable vtable;
    };

} // namespace app
