namespace app {
    struct Equipment_CategoryRange__Enum__Boxed {
        struct Equipment_CategoryRange__Enum__Class* klass;
        MonitorData* monitor;
        Equipment_CategoryRange__Enum value;
    };

    struct TextureUberScreenInfo {
        UberScreenMode__Enum Mode;

        float Tweak;
        struct Vector3 Error;
    };

    struct TextureUberScreenInfo__Boxed {
        struct TextureUberScreenInfo__Class* klass;
        MonitorData* monitor;
        struct TextureUberScreenInfo fields;
    };

    enum class TextureVisualizeMode__Enum : int32_t {
        None = 0x00000000,
        RGB = 0x00000001,
        A = 0x00000002,
    };

    struct TextureVisualizeMode__Enum__Boxed {
        struct TextureVisualizeMode__Enum__Class* klass;
        MonitorData* monitor;
        TextureVisualizeMode__Enum value;
    };

    enum class MaskMode__Enum : int32_t {
        None = 0x00000000,
        Masking = 0x00000001,
        MaskErasing = 0x00000002,
        Masked = 0x00000003,
        InvMasked = 0x00000004,
    };

    struct MaskMode__Enum__Boxed {
        struct MaskMode__Enum__Class* klass;
        MonitorData* monitor;
        MaskMode__Enum value;
    };

    enum class WorldMapAreaType__Enum : int32_t {
        Normal = 0x00000000,
    };

    struct WorldMapAreaType__Enum__Boxed {
        struct WorldMapAreaType__Enum__Class* klass;
        MonitorData* monitor;
        WorldMapAreaType__Enum value;
    };

    enum class RigidbodyState_boolState__Enum : int32_t {
        stateUndefined = 0x00000000,
        stateTrue = 0x00000001,
        stateFalse = 0x00000002,
    };

    struct RigidbodyState_boolState__Enum__Boxed {
        struct RigidbodyState_boolState__Enum__Class* klass;
        MonitorData* monitor;
        RigidbodyState_boolState__Enum value;
    };

    enum class PhysicsEdge_colliderType__Enum : int32_t {
        noCollider = 0x00000000,
        capsule = 0x00000001,
        plane = 0x00000002,
        box = 0x00000003,
        sphere = 0x00000004,
    };

    struct PhysicsEdge_colliderType__Enum__Boxed {
        struct PhysicsEdge_colliderType__Enum__Class* klass;
        MonitorData* monitor;
        PhysicsEdge_colliderType__Enum value;
    };

    struct LightCanvas_SaveMetaData {
        struct String* AssetPath;
        struct Texture2D* TextureToSave;
        int32_t StateGuid;
    };

    struct LightCanvas_SaveMetaData__Boxed {
        struct LightCanvas_SaveMetaData__Class* klass;
        MonitorData* monitor;
        struct LightCanvas_SaveMetaData fields;
    };

    enum class BaseSpline_UniSplineType__Enum : int32_t {
        CatmullRom = 0x00000000,
        Hermite = 0x00000001,
        KochanekBartels = 0x00000002,
    };

    struct BaseSpline_UniSplineType__Enum__Boxed {
        struct BaseSpline_UniSplineType__Enum__Class* klass;
        MonitorData* monitor;
        BaseSpline_UniSplineType__Enum value;
    };

    enum class EntityDataCaptureAgent_EntityDataHeader__Enum : int32_t {
        AmountOfEntities = 0x00000000,
        ActiveEntities = 0x00000001,
    };

    struct EntityDataCaptureAgent_EntityDataHeader__Enum__Boxed {
        struct EntityDataCaptureAgent_EntityDataHeader__Enum__Class* klass;
        MonitorData* monitor;
        EntityDataCaptureAgent_EntityDataHeader__Enum value;
    };

    enum class NvnMemoryCaptureAgent_MemoryHeader__Enum : int32_t {
        GenericNvnMemory = 0x00000000,
        ShaderNvnMemory = 0x00000001,
        LBufferNvnMemory = 0x00000002,
        TextureNvnMemory = 0x00000003,
        RenderTargetNvnMemory = 0x00000004,
        TotalAllocatedNvnMemory = 0x00000005,
        TotalUsedNvnMemory = 0x00000006,
        LargestLBufferAlloc = 0x00000007,
    };

    struct NvnMemoryCaptureAgent_MemoryHeader__Enum__Boxed {
        struct NvnMemoryCaptureAgent_MemoryHeader__Enum__Class* klass;
        MonitorData* monitor;
        NvnMemoryCaptureAgent_MemoryHeader__Enum value;
    };

    enum class ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum : int32_t {
        PooledInstantiations = 0x00000000,
        UnpooledInstantiations = 0x00000001,
        PooledDeinstantiations = 0x00000002,
        UnpooledDeinstantiations = 0x00000003,
    };

    struct ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Boxed {
        struct ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class* klass;
        MonitorData* monitor;
        ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum value;
    };

    enum class ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum : int32_t {
        OProf_ParticlesUpdate = 0x00000000,
        OProf_EmitterUpdate = 0x00000001,
    };

    struct ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Boxed {
        struct ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class* klass;
        MonitorData* monitor;
        ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum value;
    };

    enum class SampleOffsetCaptureAgent_FrameSummaryHeader__Enum : int32_t {
        AddedMS = 0x00000000,
    };

    struct SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Boxed {
        struct SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class* klass;
        MonitorData* monitor;
        SampleOffsetCaptureAgent_FrameSummaryHeader__Enum value;
    };

    enum class TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum : int32_t {
        ExpensiveObjectReport = 0x00000000,
        TimesliceTime = 0x00000001,
        TimeslicedJobsFinished = 0x00000002,
        TimeslicedJobsLeft = 0x00000003,
        TimesliceBudgetUsed = 0x00000004,
    };

    struct TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Boxed {
        struct TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class* klass;
        MonitorData* monitor;
        TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum value;
    };

    enum class ProjectState__Enum : int32_t {
        Locked = 0x00000000,
        Discovered = 0x00000001,
        InProgress = 0x00000002,
        Completed = 0x00000003,
    };

    struct ProjectState__Enum__Boxed {
        struct ProjectState__Enum__Class* klass;
        MonitorData* monitor;
        ProjectState__Enum value;
    };

    struct ShopkeeperScreen_HintsSettings {
        struct GameObject* MessagePrefab;
        struct Transform* MessageAnchor;
        float MessageDuration;
        struct MessageProvider* NotEnoughSpiritLight;
        struct MessageProvider* MaxedOut;
        struct MessageProvider* ItemLocked;
    };

    struct ShopkeeperScreen_HintsSettings__Boxed {
        struct ShopkeeperScreen_HintsSettings__Class* klass;
        MonitorData* monitor;
        struct ShopkeeperScreen_HintsSettings fields;
    };

    enum class DebugMode__Enum : int32_t {
        None = 0x00000000,
        File = 0x00000001,
        UnityLog = 0x00000002,
    };

    struct DebugMode__Enum__Boxed {
        struct DebugMode__Enum__Class* klass;
        MonitorData* monitor;
        DebugMode__Enum value;
    };

    struct CVRSystem_PollNextEventUnion {
        struct IVRSystem_PollNextEvent* pPollNextEvent;
        struct CVRSystem_PollNextEventPacked* pPollNextEventPacked;
    };

    struct CVRSystem_PollNextEventUnion__Boxed {
        struct CVRSystem_PollNextEventUnion__Class* klass;
        MonitorData* monitor;
        struct CVRSystem_PollNextEventUnion fields;
    };

    struct CVRSystem_GetControllerStateUnion {
        struct IVRSystem_GetControllerState* pGetControllerState;
        struct CVRSystem_GetControllerStatePacked* pGetControllerStatePacked;
    };

    struct CVRSystem_GetControllerStateUnion__Boxed {
        struct CVRSystem_GetControllerStateUnion__Class* klass;
        MonitorData* monitor;
        struct CVRSystem_GetControllerStateUnion fields;
    };

    struct CVRSystem_GetControllerStateWithPoseUnion {
        struct IVRSystem_GetControllerStateWithPose* pGetControllerStateWithPose;
        struct CVRSystem_GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked;
    };

    struct CVRSystem_GetControllerStateWithPoseUnion__Boxed {
        struct CVRSystem_GetControllerStateWithPoseUnion__Class* klass;
        MonitorData* monitor;
        struct CVRSystem_GetControllerStateWithPoseUnion fields;
    };

    struct CVROverlay_PollNextOverlayEventUnion {
        struct IVROverlay_PollNextOverlayEvent* pPollNextOverlayEvent;
        struct CVROverlay_PollNextOverlayEventPacked* pPollNextOverlayEventPacked;
    };

    struct CVROverlay_PollNextOverlayEventUnion__Boxed {
        struct CVROverlay_PollNextOverlayEventUnion__Class* klass;
        MonitorData* monitor;
        struct CVROverlay_PollNextOverlayEventUnion fields;
    };

    struct CVRRenderModels_GetComponentStateUnion {
        struct IVRRenderModels_GetComponentState* pGetComponentState;
        struct CVRRenderModels_GetComponentStatePacked* pGetComponentStatePacked;
    };

    struct CVRRenderModels_GetComponentStateUnion__Boxed {
        struct CVRRenderModels_GetComponentStateUnion__Class* klass;
        MonitorData* monitor;
        struct CVRRenderModels_GetComponentStateUnion fields;
    };

    enum class EVRState__Enum : int32_t {
        Undefined = -1,
        Off = 0x00000000,
        Searching = 0x00000001,
        Searching_Alert = 0x00000002,
        Ready = 0x00000003,
        Ready_Alert = 0x00000004,
        NotReady = 0x00000005,
        Standby = 0x00000006,
        Ready_Alert_Low = 0x00000007,
    };

    struct EVRState__Enum__Boxed {
        struct EVRState__Enum__Class* klass;
        MonitorData* monitor;
        EVRState__Enum value;
    };

    enum class EVRMouseButton__Enum : int32_t {
        Left = 0x00000001,
        Right = 0x00000002,
        Middle = 0x00000004,
    };

    struct EVRMouseButton__Enum__Boxed {
        struct EVRMouseButton__Enum__Class* klass;
        MonitorData* monitor;
        EVRMouseButton__Enum value;
    };

    enum class EVRControllerEventOutputType__Enum : int32_t {
        ControllerEventOutput_OSEvents = 0x00000000,
        ControllerEventOutput_VREvents = 0x00000001,
    };

    struct EVRControllerEventOutputType__Enum__Boxed {
        struct EVRControllerEventOutputType__Enum__Class* klass;
        MonitorData* monitor;
        EVRControllerEventOutputType__Enum value;
    };

    enum class ECollisionBoundsStyle__Enum : int32_t {
        COLLISION_BOUNDS_STYLE_BEGINNER = 0x00000000,
        COLLISION_BOUNDS_STYLE_INTERMEDIATE = 0x00000001,
        COLLISION_BOUNDS_STYLE_SQUARES = 0x00000002,
        COLLISION_BOUNDS_STYLE_ADVANCED = 0x00000003,
        COLLISION_BOUNDS_STYLE_NONE = 0x00000004,
        COLLISION_BOUNDS_STYLE_COUNT = 0x00000005,
    };

    struct ECollisionBoundsStyle__Enum__Boxed {
        struct ECollisionBoundsStyle__Enum__Class* klass;
        MonitorData* monitor;
        ECollisionBoundsStyle__Enum value;
    };

    enum class EChaperoneImportFlags__Enum : int32_t {
        EChaperoneImport_BoundsOnly = 0x00000001,
    };

    struct EChaperoneImportFlags__Enum__Boxed {
        struct EChaperoneImportFlags__Enum__Class* klass;
        MonitorData* monitor;
        EChaperoneImportFlags__Enum value;
    };

    enum class EGamepadTextInputMode__Enum_1 : int32_t {
        k_EGamepadTextInputModeNormal = 0x00000000,
        k_EGamepadTextInputModePassword = 0x00000001,
        k_EGamepadTextInputModeSubmit = 0x00000002,
    };

    struct EGamepadTextInputMode__Enum_1__Boxed {
        struct EGamepadTextInputMode__Enum_1__Class* klass;
        MonitorData* monitor;
        EGamepadTextInputMode__Enum_1 value;
    };

    enum class EGamepadTextInputLineMode__Enum_1 : int32_t {
        k_EGamepadTextInputLineModeSingleLine = 0x00000000,
        k_EGamepadTextInputLineModeMultipleLines = 0x00000001,
    };

    struct EGamepadTextInputLineMode__Enum_1__Boxed {
        struct EGamepadTextInputLineMode__Enum_1__Class* klass;
        MonitorData* monitor;
        EGamepadTextInputLineMode__Enum_1 value;
    };

    enum class EVRComponentProperty__Enum : int32_t {
        IsStatic = 0x00000001,
        IsVisible = 0x00000002,
        IsTouched = 0x00000004,
        IsPressed = 0x00000008,
        IsScrolled = 0x00000010,
    };

    struct EVRComponentProperty__Enum__Boxed {
        struct EVRComponentProperty__Enum__Class* klass;
        MonitorData* monitor;
        EVRComponentProperty__Enum value;
    };

    struct HmdVector4_t {
        float v0;
        float v1;
        float v2;
        float v3;
    };

    struct HmdVector4_t__Boxed {
        struct HmdVector4_t__Class* klass;
        MonitorData* monitor;
        struct HmdVector4_t fields;
    };

    struct HmdVector3d_t {
        double v0;
        double v1;
        double v2;
    };

    struct HmdVector3d_t__Boxed {
        struct HmdVector3d_t__Class* klass;
        MonitorData* monitor;
        struct HmdVector3d_t fields;
    };

    struct HmdQuaternion_t {
        double w;
        double x;
        double y;
        double z;
    };

    struct HmdQuaternion_t__Boxed {
        struct HmdQuaternion_t__Class* klass;
        MonitorData* monitor;
        struct HmdQuaternion_t fields;
    };

    struct VRTextureWithPose_t {
        struct HmdMatrix34_t mDeviceToAbsoluteTracking;
    };

    struct VRTextureWithPose_t__Boxed {
        struct VRTextureWithPose_t__Class* klass;
        MonitorData* monitor;
        struct VRTextureWithPose_t fields;
    };

    struct VRVulkanTextureData_t {
        uint64_t m_nImage;
        void* m_pDevice;
        void* m_pPhysicalDevice;
        void* m_pInstance;
        void* m_pQueue;
        uint32_t m_nQueueFamilyIndex;
        uint32_t m_nWidth;
        uint32_t m_nHeight;
        uint32_t m_nFormat;
        uint32_t m_nSampleCount;
    };

    struct VRVulkanTextureData_t__Boxed {
        struct VRVulkanTextureData_t__Class* klass;
        MonitorData* monitor;
        struct VRVulkanTextureData_t fields;
    };

    struct D3D12TextureData_t {
        void* m_pResource;
        void* m_pCommandQueue;
        uint32_t m_nNodeMask;
    };

    struct D3D12TextureData_t__Boxed {
        struct D3D12TextureData_t__Class* klass;
        MonitorData* monitor;
        struct D3D12TextureData_t fields;
    };

    struct VREvent_Property_t {
        uint64_t container;
        ETrackedDeviceProperty__Enum prop;
    };

    struct VREvent_Property_t__Boxed {
        struct VREvent_Property_t__Class* klass;
        MonitorData* monitor;
        struct VREvent_Property_t fields;
    };

    struct Compositor_OverlaySettings {
        uint32_t size;
        bool curved;
        bool antialias;
        float scale;
        float distance;
        float alpha;
        float uOffset;
        float vOffset;
        float uScale;
        float vScale;
        float gridDivs;
        float gridWidth;
        float gridScale;
        struct HmdMatrix44_t transform;
    };

    struct Compositor_OverlaySettings__Boxed {
        struct Compositor_OverlaySettings__Class* klass;
        MonitorData* monitor;
        struct Compositor_OverlaySettings fields;
    };

    struct RenderModel_Vertex_t {
        struct HmdVector3_t vPosition;
        struct HmdVector3_t vNormal;
        float rfTextureCoord0;
        float rfTextureCoord1;
    };

    struct RenderModel_Vertex_t__Boxed {
        struct RenderModel_Vertex_t__Class* klass;
        MonitorData* monitor;
        struct RenderModel_Vertex_t fields;
    };

    struct COpenVRContext {
        void* m_pVRSystem;
        void* m_pVRChaperone;
        void* m_pVRChaperoneSetup;
        void* m_pVRCompositor;
        void* m_pVROverlay;
        void* m_pVRResources;
        void* m_pVRRenderModels;
        void* m_pVRExtendedDisplay;
        void* m_pVRSettings;
        void* m_pVRApplications;
        void* m_pVRTrackedCamera;
        void* m_pVRScreenshots;
        void* m_pVRDriverManager;
    };

    struct COpenVRContext__Boxed {
        struct COpenVRContext__Class* klass;
        MonitorData* monitor;
        struct COpenVRContext fields;
    };

    enum class UserGetTokenAndSignatureOptions__Enum : int32_t {
        None = 0x00000000,
        ForceRefresh = 0x00000001,
        AllUsers = 0x00000002,
    };

    struct UserGetTokenAndSignatureOptions__Enum__Boxed {
        struct UserGetTokenAndSignatureOptions__Enum__Class* klass;
        MonitorData* monitor;
        UserGetTokenAndSignatureOptions__Enum value;
    };

    struct SteamAppInstalled_t {
        struct AppId_t m_nAppID;
    };

    struct SteamAppInstalled_t__Boxed {
        struct SteamAppInstalled_t__Class* klass;
        MonitorData* monitor;
        struct SteamAppInstalled_t fields;
    };

    struct SteamAppUninstalled_t {
        struct AppId_t m_nAppID;
    };

    struct SteamAppUninstalled_t__Boxed {
        struct SteamAppUninstalled_t__Class* klass;
        MonitorData* monitor;
        struct SteamAppUninstalled_t fields;
    };

    struct DlcInstalled_t {
        struct AppId_t m_nAppID;
    };

    struct DlcInstalled_t__Boxed {
        struct DlcInstalled_t__Class* klass;
        MonitorData* monitor;
        struct DlcInstalled_t fields;
    };

    enum class ERegisterActivationCodeResult__Enum : int32_t {
        k_ERegisterActivationCodeResultOK = 0x00000000,
        k_ERegisterActivationCodeResultFail = 0x00000001,
        k_ERegisterActivationCodeResultAlreadyRegistered = 0x00000002,
        k_ERegisterActivationCodeResultTimeout = 0x00000003,
        k_ERegisterActivationCodeAlreadyOwned = 0x00000004,
    };

    struct ERegisterActivationCodeResult__Enum__Boxed {
        struct ERegisterActivationCodeResult__Enum__Class* klass;
        MonitorData* monitor;
        ERegisterActivationCodeResult__Enum value;
    };

    struct RegisterActivationCodeResponse_t {
        ERegisterActivationCodeResult__Enum m_eResult;

        uint32_t m_unPackageRegistered;
    };

    struct RegisterActivationCodeResponse_t__Boxed {
        struct RegisterActivationCodeResponse_t__Class* klass;
        MonitorData* monitor;
        struct RegisterActivationCodeResponse_t fields;
    };

    struct NewUrlLaunchParameters_t {
    };

    struct NewUrlLaunchParameters_t__Boxed {
        struct NewUrlLaunchParameters_t__Class* klass;
        MonitorData* monitor;
        struct NewUrlLaunchParameters_t fields;
    };

    struct AppProofOfPurchaseKeyResponse_t {
        EResult__Enum m_eResult;

        uint32_t m_nAppID;
        uint32_t m_cchKeyLength;
        struct String* m_rgchKey;
    };

    struct AppProofOfPurchaseKeyResponse_t__Boxed {
        struct AppProofOfPurchaseKeyResponse_t__Class* klass;
        MonitorData* monitor;
        struct AppProofOfPurchaseKeyResponse_t fields;
    };

    struct FileDetailsResult_t {
        EResult__Enum m_eResult;

        uint64_t m_ulFileSize;
        struct Byte__Array* m_FileSHA;
        uint32_t m_unFlags;
    };

    struct FileDetailsResult_t__Boxed {
        struct FileDetailsResult_t__Class* klass;
        MonitorData* monitor;
        struct FileDetailsResult_t fields;
    };

    enum class EPersonaChange__Enum : int32_t {
        k_EPersonaChangeName = 0x00000001,
        k_EPersonaChangeStatus = 0x00000002,
        k_EPersonaChangeComeOnline = 0x00000004,
        k_EPersonaChangeGoneOffline = 0x00000008,
        k_EPersonaChangeGamePlayed = 0x00000010,
        k_EPersonaChangeGameServer = 0x00000020,
        k_EPersonaChangeAvatar = 0x00000040,
        k_EPersonaChangeJoinedSource = 0x00000080,
        k_EPersonaChangeLeftSource = 0x00000100,
        k_EPersonaChangeRelationshipChanged = 0x00000200,
        k_EPersonaChangeNameFirstSet = 0x00000400,
        k_EPersonaChangeBroadcast = 0x00000800,
        k_EPersonaChangeNickname = 0x00001000,
        k_EPersonaChangeSteamLevel = 0x00002000,
        k_EPersonaChangeRichPresence = 0x00004000,
    };

    struct EPersonaChange__Enum__Boxed {
        struct EPersonaChange__Enum__Class* klass;
        MonitorData* monitor;
        EPersonaChange__Enum value;
    };

    struct PersonaStateChange_t {
        uint64_t m_ulSteamID;
        EPersonaChange__Enum m_nChangeFlags;
    };

    struct PersonaStateChange_t__Boxed {
        struct PersonaStateChange_t__Class* klass;
        MonitorData* monitor;
        struct PersonaStateChange_t fields;
    };

    struct GameOverlayActivated_t {
        uint8_t m_bActive;
    };

    struct GameOverlayActivated_t__Boxed {
        struct GameOverlayActivated_t__Class* klass;
        MonitorData* monitor;
        struct GameOverlayActivated_t fields;
    };

    struct GameServerChangeRequested_t {
        struct String* m_rgchServer;
        struct String* m_rgchPassword;
    };

    struct GameServerChangeRequested_t__Boxed {
        struct GameServerChangeRequested_t__Class* klass;
        MonitorData* monitor;
        struct GameServerChangeRequested_t fields;
    };

    struct GameLobbyJoinRequested_t {
        struct CSteamID m_steamIDLobby;
        struct CSteamID m_steamIDFriend;
    };

    struct GameLobbyJoinRequested_t__Boxed {
        struct GameLobbyJoinRequested_t__Class* klass;
        MonitorData* monitor;
        struct GameLobbyJoinRequested_t fields;
    };

    struct AvatarImageLoaded_t {
        struct CSteamID m_steamID;
        int32_t m_iImage;
        int32_t m_iWide;
        int32_t m_iTall;
    };

    struct AvatarImageLoaded_t__Boxed {
        struct AvatarImageLoaded_t__Class* klass;
        MonitorData* monitor;
        struct AvatarImageLoaded_t fields;
    };

    struct ClanOfficerListResponse_t {
        struct CSteamID m_steamIDClan;
        int32_t m_cOfficers;
        uint8_t m_bSuccess;
    };

    struct ClanOfficerListResponse_t__Boxed {
        struct ClanOfficerListResponse_t__Class* klass;
        MonitorData* monitor;
        struct ClanOfficerListResponse_t fields;
    };

    struct FriendRichPresenceUpdate_t {
        struct CSteamID m_steamIDFriend;
        struct AppId_t m_nAppID;
    };

    struct FriendRichPresenceUpdate_t__Boxed {
        struct FriendRichPresenceUpdate_t__Class* klass;
        MonitorData* monitor;
        struct FriendRichPresenceUpdate_t fields;
    };

    struct GameRichPresenceJoinRequested_t {
        struct CSteamID m_steamIDFriend;
        struct String* m_rgchConnect;
    };

    struct GameRichPresenceJoinRequested_t__Boxed {
        struct GameRichPresenceJoinRequested_t__Class* klass;
        MonitorData* monitor;
        struct GameRichPresenceJoinRequested_t fields;
    };

    struct GameConnectedClanChatMsg_t {
        struct CSteamID m_steamIDClanChat;
        struct CSteamID m_steamIDUser;
        int32_t m_iMessageID;
    };

    struct GameConnectedClanChatMsg_t__Boxed {
        struct GameConnectedClanChatMsg_t__Class* klass;
        MonitorData* monitor;
        struct GameConnectedClanChatMsg_t fields;
    };

    struct GameConnectedChatJoin_t {
        struct CSteamID m_steamIDClanChat;
        struct CSteamID m_steamIDUser;
    };

    struct GameConnectedChatJoin_t__Boxed {
        struct GameConnectedChatJoin_t__Class* klass;
        MonitorData* monitor;
        struct GameConnectedChatJoin_t fields;
    };

    struct GameConnectedChatLeave_t {
        struct CSteamID m_steamIDClanChat;
        struct CSteamID m_steamIDUser;
        bool m_bKicked;
        bool m_bDropped;
    };

    struct GameConnectedChatLeave_t__Boxed {
        struct GameConnectedChatLeave_t__Class* klass;
        MonitorData* monitor;
        struct GameConnectedChatLeave_t fields;
    };

    struct DownloadClanActivityCountsResult_t {
        bool m_bSuccess;
    };

    struct DownloadClanActivityCountsResult_t__Boxed {
        struct DownloadClanActivityCountsResult_t__Class* klass;
        MonitorData* monitor;
        struct DownloadClanActivityCountsResult_t fields;
    };

    enum class EChatRoomEnterResponse__Enum : int32_t {
        k_EChatRoomEnterResponseSuccess = 0x00000001,
        k_EChatRoomEnterResponseDoesntExist = 0x00000002,
        k_EChatRoomEnterResponseNotAllowed = 0x00000003,
        k_EChatRoomEnterResponseFull = 0x00000004,
        k_EChatRoomEnterResponseError = 0x00000005,
        k_EChatRoomEnterResponseBanned = 0x00000006,
        k_EChatRoomEnterResponseLimited = 0x00000007,
        k_EChatRoomEnterResponseClanDisabled = 0x00000008,
        k_EChatRoomEnterResponseCommunityBan = 0x00000009,
        k_EChatRoomEnterResponseMemberBlockedYou = 0x0000000a,
        k_EChatRoomEnterResponseYouBlockedMember = 0x0000000b,
        k_EChatRoomEnterResponseRatelimitExceeded = 0x0000000f,
    };

    struct EChatRoomEnterResponse__Enum__Boxed {
        struct EChatRoomEnterResponse__Enum__Class* klass;
        MonitorData* monitor;
        EChatRoomEnterResponse__Enum value;
    };

    struct JoinClanChatRoomCompletionResult_t {
        struct CSteamID m_steamIDClanChat;
        EChatRoomEnterResponse__Enum m_eChatRoomEnterResponse;
    };

    struct JoinClanChatRoomCompletionResult_t__Boxed {
        struct JoinClanChatRoomCompletionResult_t__Class* klass;
        MonitorData* monitor;
        struct JoinClanChatRoomCompletionResult_t fields;
    };

    struct GameConnectedFriendChatMsg_t {
        struct CSteamID m_steamIDUser;
        int32_t m_iMessageID;
    };

    struct GameConnectedFriendChatMsg_t__Boxed {
        struct GameConnectedFriendChatMsg_t__Class* klass;
        MonitorData* monitor;
        struct GameConnectedFriendChatMsg_t fields;
    };

    struct FriendsGetFollowerCount_t {
        EResult__Enum m_eResult;

        struct CSteamID m_steamID;
        int32_t m_nCount;
    };

    struct FriendsGetFollowerCount_t__Boxed {
        struct FriendsGetFollowerCount_t__Class* klass;
        MonitorData* monitor;
        struct FriendsGetFollowerCount_t fields;
    };

    struct FriendsIsFollowing_t {
        EResult__Enum m_eResult;

        struct CSteamID m_steamID;
        bool m_bIsFollowing;
    };

    struct FriendsIsFollowing_t__Boxed {
        struct FriendsIsFollowing_t__Class* klass;
        MonitorData* monitor;
        struct FriendsIsFollowing_t fields;
    };

    struct FriendsEnumerateFollowingList_t {
        EResult__Enum m_eResult;

        struct CSteamID__Array* m_rgSteamID;
        int32_t m_nResultsReturned;
        int32_t m_nTotalResultCount;
    };

    struct FriendsEnumerateFollowingList_t__Boxed {
        struct FriendsEnumerateFollowingList_t__Class* klass;
        MonitorData* monitor;
        struct FriendsEnumerateFollowingList_t fields;
    };

    struct SetPersonaNameResponse_t {
        bool m_bSuccess;
        bool m_bLocalSuccess;
        EResult__Enum m_result;
    };

    struct SetPersonaNameResponse_t__Boxed {
        struct SetPersonaNameResponse_t__Class* klass;
        MonitorData* monitor;
        struct SetPersonaNameResponse_t fields;
    };

    struct UnreadChatMessagesChanged_t {
    };

    struct UnreadChatMessagesChanged_t__Boxed {
        struct UnreadChatMessagesChanged_t__Class* klass;
        MonitorData* monitor;
        struct UnreadChatMessagesChanged_t fields;
    };

    struct GCMessageAvailable_t {
        uint32_t m_nMessageSize;
    };

    struct GCMessageAvailable_t__Boxed {
        struct GCMessageAvailable_t__Class* klass;
        MonitorData* monitor;
        struct GCMessageAvailable_t fields;
    };

    struct GCMessageFailed_t {
    };

    struct GCMessageFailed_t__Boxed {
        struct GCMessageFailed_t__Class* klass;
        MonitorData* monitor;
        struct GCMessageFailed_t fields;
    };

    struct GSClientApprove_t {
        struct CSteamID m_SteamID;
        struct CSteamID m_OwnerSteamID;
    };

    struct GSClientApprove_t__Boxed {
        struct GSClientApprove_t__Class* klass;
        MonitorData* monitor;
        struct GSClientApprove_t fields;
    };

    enum class EDenyReason__Enum : int32_t {
        k_EDenyInvalid = 0x00000000,
        k_EDenyInvalidVersion = 0x00000001,
        k_EDenyGeneric = 0x00000002,
        k_EDenyNotLoggedOn = 0x00000003,
        k_EDenyNoLicense = 0x00000004,
        k_EDenyCheater = 0x00000005,
        k_EDenyLoggedInElseWhere = 0x00000006,
        k_EDenyUnknownText = 0x00000007,
        k_EDenyIncompatibleAnticheat = 0x00000008,
        k_EDenyMemoryCorruption = 0x00000009,
        k_EDenyIncompatibleSoftware = 0x0000000a,
        k_EDenySteamConnectionLost = 0x0000000b,
        k_EDenySteamConnectionError = 0x0000000c,
        k_EDenySteamResponseTimedOut = 0x0000000d,
        k_EDenySteamValidationStalled = 0x0000000e,
        k_EDenySteamOwnerLeftGuestUser = 0x0000000f,
    };

    struct EDenyReason__Enum__Boxed {
        struct EDenyReason__Enum__Class* klass;
        MonitorData* monitor;
        EDenyReason__Enum value;
    };

    struct GSClientDeny_t {
        struct CSteamID m_SteamID;
        EDenyReason__Enum m_eDenyReason;

        struct String* m_rgchOptionalText;
    };

    struct GSClientDeny_t__Boxed {
        struct GSClientDeny_t__Class* klass;
        MonitorData* monitor;
        struct GSClientDeny_t fields;
    };

    struct GSClientKick_t {
        struct CSteamID m_SteamID;
        EDenyReason__Enum m_eDenyReason;
    };

} // namespace app
