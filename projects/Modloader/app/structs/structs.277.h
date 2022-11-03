namespace app {
    struct HitReactionTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HitReactionTrigger__StaticFields {
    };

    struct HitReactionTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReactionTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReactionTrigger__VTable vtable;
    };

    struct HoldingHands__Fields {
        struct MonoBehaviour__Fields _;
        struct FullBodyBipedIK* rightHandChar;
        struct FullBodyBipedIK* leftHandChar;
        struct Transform* rightHandTarget;
        struct Transform* leftHandTarget;
        float crossFade;
        float speed;
        struct Quaternion rightHandRotation;
        struct Quaternion leftHandRotation;
    };

    struct HoldingHands {
        struct HoldingHands__Class* klass;
        MonitorData* monitor;
        struct HoldingHands__Fields fields;
    };

    struct HoldingHands__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HoldingHands__StaticFields {
    };

    struct HoldingHands__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HoldingHands__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HoldingHands__VTable vtable;
    };

    struct InteractionC2CDemo__Fields {
        struct MonoBehaviour__Fields _;
        struct InteractionSystem* character1;
        struct InteractionSystem* character2;
        struct InteractionObject* handShake;
    };

    struct InteractionC2CDemo {
        struct InteractionC2CDemo__Class* klass;
        MonitorData* monitor;
        struct InteractionC2CDemo__Fields fields;
    };

    struct InteractionC2CDemo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InteractionC2CDemo__StaticFields {
    };

    struct InteractionC2CDemo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InteractionC2CDemo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InteractionC2CDemo__VTable vtable;
    };

    struct InteractionDemo__Fields {
        struct MonoBehaviour__Fields _;
        struct InteractionSystem* interactionSystem;
        bool interrupt;
        struct InteractionObject* ball;
        struct InteractionObject* benchMain;
        struct InteractionObject* benchHands;
        struct InteractionObject* button;
        struct InteractionObject* cigarette;
        struct InteractionObject* door;
        bool isSitting;
    };

    struct InteractionDemo {
        struct InteractionDemo__Class* klass;
        MonitorData* monitor;
        struct InteractionDemo__Fields fields;
    };

    struct InteractionDemo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InteractionDemo__StaticFields {
    };

    struct InteractionDemo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InteractionDemo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InteractionDemo__VTable vtable;
    };

    struct InteractionSystemTestGUI__Fields {
        struct MonoBehaviour__Fields _;
        struct InteractionObject* interactionObject;
        struct FullBodyBipedEffector__Enum__Array* effectors;
        struct InteractionSystem* interactionSystem;
    };

    struct InteractionSystemTestGUI {
        struct InteractionSystemTestGUI__Class* klass;
        MonitorData* monitor;
        struct InteractionSystemTestGUI__Fields fields;
    };

    struct InteractionSystemTestGUI__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InteractionSystemTestGUI__StaticFields {
    };

    struct InteractionSystemTestGUI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InteractionSystemTestGUI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InteractionSystemTestGUI__VTable vtable;
    };

    struct KissingRig__Fields {
        struct MonoBehaviour__Fields _;
        struct KissingRig_Partner* partner1;
        struct KissingRig_Partner* partner2;
        float weight;
        int32_t iterations;
    };

    struct KissingRig {
        struct KissingRig__Class* klass;
        MonitorData* monitor;
        struct KissingRig__Fields fields;
    };

    struct __declspec(align(8)) KissingRig_Partner__Fields {
        struct FullBodyBipedIK* ik;
        struct Transform* mouth;
        struct Transform* mouthTarget;
        struct Transform* touchTargetLeftHand;
        struct Transform* touchTargetRightHand;
        float bodyWeightHorizontal;
        float bodyWeightVertical;
        float neckRotationWeight;
        float headTiltAngle;
        struct Vector3 headTiltAxis;
        struct Quaternion neckRotation;
    };

    struct KissingRig_Partner {
        struct KissingRig_Partner__Class* klass;
        MonitorData* monitor;
        struct KissingRig_Partner__Fields fields;
    };

    struct KissingRig_Partner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KissingRig_Partner__StaticFields {
    };

    struct KissingRig_Partner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KissingRig_Partner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KissingRig_Partner__VTable vtable;
    };

    struct KissingRig__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KissingRig__StaticFields {
    };

    struct KissingRig__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KissingRig__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KissingRig__VTable vtable;
    };

    struct MotionAbsorb__Fields {
        struct MonoBehaviour__Fields _;
        struct FullBodyBipedIK* ik;
        struct MotionAbsorb_Absorber__Array* absorbers;
        float weight;
        struct AnimationCurve* falloff;
        float falloffSpeed;
        float timer;
    };

    struct MotionAbsorb {
        struct MotionAbsorb__Class* klass;
        MonitorData* monitor;
        struct MotionAbsorb__Fields fields;
    };

    struct __declspec(align(8)) MotionAbsorb_Absorber__Fields {
        FullBodyBipedEffector__Enum effector;

        float weight;
    };

    struct MotionAbsorb_Absorber {
        struct MotionAbsorb_Absorber__Class* klass;
        MonitorData* monitor;
        struct MotionAbsorb_Absorber__Fields fields;
    };

    struct MotionAbsorb_Absorber__Array {
        struct MotionAbsorb_Absorber__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MotionAbsorb_Absorber* vector[32];
    };

    struct MotionAbsorb_Absorber__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MotionAbsorb_Absorber__StaticFields {
    };

    struct MotionAbsorb_Absorber__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MotionAbsorb_Absorber__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MotionAbsorb_Absorber__VTable vtable;
    };

    struct MotionAbsorb_Absorber__Array__VTable {
    };

    struct MotionAbsorb_Absorber__Array__StaticFields {
    };

    struct MotionAbsorb_Absorber__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MotionAbsorb_Absorber__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MotionAbsorb_Absorber__Array__VTable vtable;
    };

    struct MotionAbsorb__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MotionAbsorb__StaticFields {
    };

    struct MotionAbsorb__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MotionAbsorb__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MotionAbsorb__VTable vtable;
    };

    struct __declspec(align(8)) MotionAbsorb_AbsorbMotion_d_8__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct MotionAbsorb* __4__this;
    };

    struct MotionAbsorb_AbsorbMotion_d_8 {
        struct MotionAbsorb_AbsorbMotion_d_8__Class* klass;
        MonitorData* monitor;
        struct MotionAbsorb_AbsorbMotion_d_8__Fields fields;
    };

    struct MotionAbsorb_AbsorbMotion_d_8__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct MotionAbsorb_AbsorbMotion_d_8__StaticFields {
    };

    struct MotionAbsorb_AbsorbMotion_d_8__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MotionAbsorb_AbsorbMotion_d_8__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MotionAbsorb_AbsorbMotion_d_8__VTable vtable;
    };

    struct MotionAbsorbCharacter__Fields {
        struct MonoBehaviour__Fields _;
        struct Animator* animator;
        struct MotionAbsorb* motionAbsorb;
        struct Transform* cube;
        float cubeRandomPosition;
        struct AnimationCurve* motionAbsorbWeight;
        struct Vector3 cubeDefaultPosition;
        struct AnimatorStateInfo info;
        struct Rigidbody* cubeRigidbody;
    };

    struct MotionAbsorbCharacter {
        struct MotionAbsorbCharacter__Class* klass;
        MonitorData* monitor;
        struct MotionAbsorbCharacter__Fields fields;
    };

    struct MotionAbsorbCharacter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MotionAbsorbCharacter__StaticFields {
    };

    struct MotionAbsorbCharacter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MotionAbsorbCharacter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MotionAbsorbCharacter__VTable vtable;
    };

    struct OffsetEffector__Fields {
        struct OffsetModifier__Fields _;
        struct OffsetEffector_EffectorLink__Array* effectorLinks;
    };

    struct OffsetEffector {
        struct OffsetEffector__Class* klass;
        MonitorData* monitor;
        struct OffsetEffector__Fields fields;
    };

    struct __declspec(align(8)) OffsetEffector_EffectorLink__Fields {
        FullBodyBipedEffector__Enum effectorType;

        float weightMultiplier;
        struct Vector3 localPosition;
    };

    struct OffsetEffector_EffectorLink {
        struct OffsetEffector_EffectorLink__Class* klass;
        MonitorData* monitor;
        struct OffsetEffector_EffectorLink__Fields fields;
    };

    struct OffsetEffector_EffectorLink__Array {
        struct OffsetEffector_EffectorLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct OffsetEffector_EffectorLink* vector[32];
    };

    struct OffsetEffector_EffectorLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OffsetEffector_EffectorLink__StaticFields {
    };

    struct OffsetEffector_EffectorLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetEffector_EffectorLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetEffector_EffectorLink__VTable vtable;
    };

    struct OffsetEffector_EffectorLink__Array__VTable {
    };

    struct OffsetEffector_EffectorLink__Array__StaticFields {
    };

    struct OffsetEffector_EffectorLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetEffector_EffectorLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetEffector_EffectorLink__Array__VTable vtable;
    };

    struct OffsetEffector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnModifyOffset;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
    };

    struct OffsetEffector__StaticFields {
    };

    struct OffsetEffector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetEffector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetEffector__VTable vtable;
    };

    struct PendulumExample__Fields {
        struct MonoBehaviour__Fields _;
        float weight;
        float hangingDistanceMlp;
        struct Vector3 rootTargetPosition;
        struct Quaternion rootTargetRotation;
        struct Transform* target;
        struct Transform* leftHandTarget;
        struct Transform* rightHandTarget;
        struct Transform* leftFootTarget;
        struct Transform* rightFootTarget;
        struct Transform* pelvisTarget;
        struct Transform* bodyTarget;
        struct Transform* headTarget;
        struct Vector3 pelvisDownAxis;
        struct FullBodyBipedIK* ik;
        struct Quaternion rootRelativeToPelvis;
        struct Vector3 pelvisToRoot;
        float lastWeight;
    };

    struct PendulumExample {
        struct PendulumExample__Class* klass;
        MonitorData* monitor;
        struct PendulumExample__Fields fields;
    };

    struct PendulumExample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PendulumExample__StaticFields {
    };

    struct PendulumExample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PendulumExample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PendulumExample__VTable vtable;
    };

    struct PickUp2Handed__Fields {
        struct MonoBehaviour__Fields _;
        int32_t GUIspace;
        struct InteractionSystem* interactionSystem;
        struct InteractionObject* obj;
        struct Transform* pivot;
        struct Transform* holdPoint;
        float pickUpTime;
        float holdWeight;
        float holdWeightVel;
        struct Vector3 pickUpPosition;
        struct Quaternion pickUpRotation;
    };

    struct PickUp2Handed {
        struct PickUp2Handed__Class* klass;
        MonitorData* monitor;
        struct PickUp2Handed__Fields fields;
    };

    struct PickUpBox__Fields {
        struct PickUp2Handed__Fields _;
    };

    struct PickUpBox {
        struct PickUpBox__Class* klass;
        MonitorData* monitor;
        struct PickUpBox__Fields fields;
    };

    struct PickUpBox__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData RotatePivot;
    };

    struct PickUpBox__StaticFields {
    };

    struct PickUpBox__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PickUpBox__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PickUpBox__VTable vtable;
    };

    struct PickUp2Handed__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
    };

    struct PickUp2Handed__StaticFields {
    };

    struct PickUp2Handed__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PickUp2Handed__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PickUp2Handed__VTable vtable;
    };

    struct PickUpSphere__Fields {
        struct PickUp2Handed__Fields _;
    };

    struct PickUpSphere {
        struct PickUpSphere__Class* klass;
        MonitorData* monitor;
        struct PickUpSphere__Fields fields;
    };

    struct PickUpSphere__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData RotatePivot;
    };

    struct PickUpSphere__StaticFields {
    };

    struct PickUpSphere__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PickUpSphere__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PickUpSphere__VTable vtable;
    };

    struct RagdollUtilityDemo__Fields {
        struct MonoBehaviour__Fields _;
        struct RagdollUtility* ragdollUtility;
        struct Transform* root;
        struct Rigidbody* pelvis;
    };

    struct RagdollUtilityDemo {
        struct RagdollUtilityDemo__Class* klass;
        MonitorData* monitor;
        struct RagdollUtilityDemo__Fields fields;
    };

    struct RagdollUtilityDemo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RagdollUtilityDemo__StaticFields {
    };

    struct RagdollUtilityDemo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RagdollUtilityDemo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RagdollUtilityDemo__VTable vtable;
    };

    struct RecoilTest__Fields {
        struct MonoBehaviour__Fields _;
        float magnitude;
        struct Recoil* recoil;
    };

    struct RecoilTest {
        struct RecoilTest__Class* klass;
        MonitorData* monitor;
        struct RecoilTest__Fields fields;
    };

    struct RecoilTest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RecoilTest__StaticFields {
    };

    struct RecoilTest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RecoilTest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RecoilTest__VTable vtable;
    };

    struct ResetInteractionObject__Fields {
        struct MonoBehaviour__Fields _;
        float resetDelay;
        struct Vector3 defaultPosition;
        struct Quaternion defaultRotation;
        struct Transform* defaultParent;
        struct Rigidbody* r;
    };

    struct ResetInteractionObject {
        struct ResetInteractionObject__Class* klass;
        MonitorData* monitor;
        struct ResetInteractionObject__Fields fields;
    };

    struct ResetInteractionObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ResetInteractionObject__StaticFields {
    };

    struct ResetInteractionObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ResetInteractionObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ResetInteractionObject__VTable vtable;
    };

    struct __declspec(align(8)) ResetInteractionObject_ResetObject_d_7__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        float resetTime;
        struct ResetInteractionObject* __4__this;
    };

    struct ResetInteractionObject_ResetObject_d_7 {
        struct ResetInteractionObject_ResetObject_d_7__Class* klass;
        MonitorData* monitor;
        struct ResetInteractionObject_ResetObject_d_7__Fields fields;
    };

    struct ResetInteractionObject_ResetObject_d_7__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct ResetInteractionObject_ResetObject_d_7__StaticFields {
    };

    struct ResetInteractionObject_ResetObject_d_7__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ResetInteractionObject_ResetObject_d_7__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ResetInteractionObject_ResetObject_d_7__VTable vtable;
    };

    struct SoccerDemo__Fields {
        struct MonoBehaviour__Fields _;
        struct Animator* animator;
        struct Vector3 defaultPosition;
        struct Quaternion defaultRotation;
    };

    struct SoccerDemo {
        struct SoccerDemo__Class* klass;
        MonitorData* monitor;
        struct SoccerDemo__Fields fields;
    };

    struct SoccerDemo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SoccerDemo__StaticFields {
    };

    struct SoccerDemo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoccerDemo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoccerDemo__VTable vtable;
    };

    struct __declspec(align(8)) SoccerDemo_ResetDelayed_d_4__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct SoccerDemo* __4__this;
    };

    struct SoccerDemo_ResetDelayed_d_4 {
        struct SoccerDemo_ResetDelayed_d_4__Class* klass;
        MonitorData* monitor;
        struct SoccerDemo_ResetDelayed_d_4__Fields fields;
    };

    struct SoccerDemo_ResetDelayed_d_4__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct SoccerDemo_ResetDelayed_d_4__StaticFields {
    };

    struct SoccerDemo_ResetDelayed_d_4__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoccerDemo_ResetDelayed_d_4__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoccerDemo_ResetDelayed_d_4__VTable vtable;
    };

    struct TouchWalls__Fields {
        struct MonoBehaviour__Fields _;
        struct InteractionSystem* interactionSystem;
        struct TouchWalls_EffectorLink__Array* effectorLinks;
    };

    struct TouchWalls {
        struct TouchWalls__Class* klass;
        MonitorData* monitor;
        struct TouchWalls__Fields fields;
    };

    struct __declspec(align(8)) TouchWalls_EffectorLink__Fields {
        bool enabled;
        FullBodyBipedEffector__Enum effectorType;

        struct InteractionObject* interactionObject;
        struct Transform* spherecastFrom;
        float spherecastRadius;
        float minDistance;
        struct LayerMask touchLayers;
        float lerpSpeed;
        float minSwitchTime;
        float releaseDistance;
        bool sliding;
        struct Vector3 raycastDirectionLocal;
        float raycastDistance;
        bool inTouch;
        struct RaycastHit hit;
        struct Vector3 targetPosition;
        struct Quaternion targetRotation;
        bool initiated;
        float nextSwitchTime;
        float speedF;
    };

    struct TouchWalls_EffectorLink {
        struct TouchWalls_EffectorLink__Class* klass;
        MonitorData* monitor;
        struct TouchWalls_EffectorLink__Fields fields;
    };

    struct TouchWalls_EffectorLink__Array {
        struct TouchWalls_EffectorLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TouchWalls_EffectorLink* vector[32];
    };

    struct TouchWalls_EffectorLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TouchWalls_EffectorLink__StaticFields {
    };

    struct TouchWalls_EffectorLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TouchWalls_EffectorLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TouchWalls_EffectorLink__VTable vtable;
    };

    struct TouchWalls_EffectorLink__Array__VTable {
    };

    struct TouchWalls_EffectorLink__Array__StaticFields {
    };

    struct TouchWalls_EffectorLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TouchWalls_EffectorLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TouchWalls_EffectorLink__Array__VTable vtable;
    };

    struct TouchWalls__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TouchWalls__StaticFields {
    };

    struct TouchWalls__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TouchWalls__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TouchWalls__VTable vtable;
    };

    struct TransferMotion__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* to;
        float transferMotion;
        struct Vector3 lastPosition;
    };

    struct TransferMotion {
        struct TransferMotion__Class* klass;
        MonitorData* monitor;
        struct TransferMotion__Fields fields;
    };

    struct TransferMotion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TransferMotion__StaticFields {
    };

    struct TransferMotion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransferMotion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransferMotion__VTable vtable;
    };

    struct UserControlInteractions__Fields {
        struct UserControlThirdPerson__Fields _;
        struct CharacterThirdPerson* character;
        struct InteractionSystem* interactionSystem;
        bool disableInputInInteraction;
        float enableInputAtProgress;
    };

    struct UserControlInteractions {
        struct UserControlInteractions__Class* klass;
        MonitorData* monitor;
        struct UserControlInteractions__Fields fields;
    };

    struct UserControlInteractions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Update;
    };

    struct UserControlInteractions__StaticFields {
    };

    struct UserControlInteractions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserControlInteractions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserControlInteractions__VTable vtable;
    };

    struct GrounderDemo__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject__Array* characters;
    };

} // namespace app
