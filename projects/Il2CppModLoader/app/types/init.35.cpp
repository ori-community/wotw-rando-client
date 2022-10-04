#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/IKSolver_IterationDelegate.h>
#include <Il2CppModLoader/app/types/IKSolverTrigonometric_TrigonometricBone.h>
#include <Il2CppModLoader/app/types/IKSolverLimb_AxisDirection__Array.h>
#include <Il2CppModLoader/app/types/IKSolverFABRIK.h>
#include <Il2CppModLoader/app/types/IKSolverLookAt.h>
#include <Il2CppModLoader/app/types/IKSolverLookAt_LookAtBone.h>
#include <Il2CppModLoader/app/types/IKSolverLookAt_LookAtBone__Array.h>
#include <Il2CppModLoader/app/types/Constraints.h>
#include <Il2CppModLoader/app/types/IKSolverLimb__Array.h>
#include <Il2CppModLoader/app/types/IKSolver__Array.h>
#include <Il2CppModLoader/app/types/Finger.h>
#include <Il2CppModLoader/app/types/Finger__Array.h>
#include <Il2CppModLoader/app/types/Grounding.h>
#include <Il2CppModLoader/app/types/Grounding_Leg.h>
#include <Il2CppModLoader/app/types/Grounding_Leg__Array.h>
#include <Il2CppModLoader/app/types/Grounding_Pelvis.h>
#include <Il2CppModLoader/app/types/FullBodyBipedIK.h>
#include <Il2CppModLoader/app/types/AimIK.h>
#include <Il2CppModLoader/app/types/IKSolverFullBodyBiped.h>
#include <Il2CppModLoader/app/types/FBIKChain.h>
#include <Il2CppModLoader/app/types/IKSolver_Node.h>
#include <Il2CppModLoader/app/types/IKSolver_Node__Array.h>
#include <Il2CppModLoader/app/types/FBIKChain_ChildConstraint.h>
#include <Il2CppModLoader/app/types/FBIKChain_ChildConstraint__Array.h>
#include <Il2CppModLoader/app/types/IKConstraintBend.h>
#include <Il2CppModLoader/app/types/FBIKChain__Array.h>
#include <Il2CppModLoader/app/types/IKEffector.h>
#include <Il2CppModLoader/app/types/IKEffector__Array.h>
#include <Il2CppModLoader/app/types/IKMappingSpine.h>
#include <Il2CppModLoader/app/types/IKMapping_BoneMap.h>
#include <Il2CppModLoader/app/types/IKMapping_BoneMap__Array.h>
#include <Il2CppModLoader/app/types/IKMappingBone.h>
#include <Il2CppModLoader/app/types/IKMappingBone__Array.h>
#include <Il2CppModLoader/app/types/IKMappingLimb.h>
#include <Il2CppModLoader/app/types/IKMappingLimb__Array.h>
#include <Il2CppModLoader/app/types/FullBodyBipedEffector__Enum.h>
#include <Il2CppModLoader/app/types/GrounderFBBIK_SpineEffector__Array.h>
#include <Il2CppModLoader/app/types/IK__Array.h>
#include <Il2CppModLoader/app/types/GrounderQuadruped_Foot__Array.h>
#include <Il2CppModLoader/app/types/CCDIK.h>
#include <Il2CppModLoader/app/types/IKSolverCCD.h>
#include <Il2CppModLoader/app/types/FABRIKRoot.h>
#include <Il2CppModLoader/app/types/IKSolverFABRIKRoot.h>
#include <Il2CppModLoader/app/types/FABRIKChain__Array.h>
#include <Il2CppModLoader/app/types/FBBIKHeadEffector_BendBone__Array.h>
#include <Il2CppModLoader/app/types/InteractionEffector.h>
#include <Il2CppModLoader/app/types/InteractionObject_WeightCurve_Type__Enum.h>
#include <Il2CppModLoader/app/types/InteractionTrigger_Range__Array.h>
#include <Il2CppModLoader/app/types/InteractionSystem_InteractionDelegate.h>
#include <Il2CppModLoader/app/types/InteractionLookAt.h>
#include <Il2CppModLoader/app/types/InteractionEffector__Array.h>
#include <Il2CppModLoader/app/types/InteractionTarget__Array.h>
#include <Il2CppModLoader/app/types/GenericPoser_Map.h>
#include <Il2CppModLoader/app/types/GenericPoser_Map__Array.h>
#include <Il2CppModLoader/app/types/InteractionObject__Array.h>
#include <Il2CppModLoader/app/types/RagdollUtility_Rigidbone.h>
#include <Il2CppModLoader/app/types/RagdollUtility_Rigidbone__Array.h>
#include <Il2CppModLoader/app/types/RagdollUtility_Child.h>
#include <Il2CppModLoader/app/types/RagdollUtility_Child__Array.h>
#include <Il2CppModLoader/app/types/RagdollUtility_DisableRagdollSmooth_d_21.h>
#include <Il2CppModLoader/app/types/RotationLimitHinge.h>
#include <Il2CppModLoader/app/types/RotationLimitPolygonal_LimitPoint.h>
#include <Il2CppModLoader/app/types/RotationLimitPolygonal_LimitPoint__Array.h>
#include <Il2CppModLoader/app/types/RotationLimitPolygonal_ReachCone.h>
#include <Il2CppModLoader/app/types/RotationLimitPolygonal_ReachCone__Array.h>
#include <Il2CppModLoader/app/types/AimPoser_Pose__Array.h>
#include <Il2CppModLoader/app/types/OffsetPose_EffectorLink__Array.h>
#include <Il2CppModLoader/app/types/OffsetModifier_Initiate_d_8.h>
#include <Il2CppModLoader/app/types/MechSpiderLeg_Step_d_24.h>
#include <Il2CppModLoader/app/types/MotionAbsorb_AbsorbMotion_d_8.h>
#include <Il2CppModLoader/app/types/ResetInteractionObject_ResetObject_d_7.h>
#include <Il2CppModLoader/app/types/SoccerDemo_ResetDelayed_d_4.h>
#include <Il2CppModLoader/app/types/PlatformRotator_SwitchRotation_d_14.h>
#include <Il2CppModLoader/app/types/Phone_EnableDisplay_d_5.h>
#include <Il2CppModLoader/app/types/KeyCode__Enum__Array.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationDescriptor.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationDescriptor_ReflectionInfo.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationDescriptor_CountGetter.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_EvaluationCtx.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_VisitorCtx.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationDescriptor_c_DisplayClass28_0.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_EvaluationCtx_c.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_DynamicInstantiationProviderVisitor.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_ArrayOrListVisitor.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_GameObjectVisitor.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_ScriptableObjectVisitor.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_TypeVisitor.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_TypeVisitor_c.h>
#include <Il2CppModLoader/app/types/DynamicInstantiationScanner_c.h>
#include <Il2CppModLoader/app/types/SceneComponentTracker.h>
#include <Il2CppModLoader/app/types/SceneComponentTracker_c.h>
#include <Il2CppModLoader/app/types/CameraPositionTracker.h>
#include <Il2CppModLoader/app/types/CameraPositionTracker_CameraPosition.h>
#include <Il2CppModLoader/app/types/MoonFlagsSystem.h>
#include <Il2CppModLoader/app/types/MoonFlagsSystem_HiddenFlagModification.h>
#include <Il2CppModLoader/app/types/MoonFlagsSystem_ObjectState.h>
#include <Il2CppModLoader/app/types/ActivateAnimatorSystem.h>
#include <Il2CppModLoader/app/types/TransformAnimatorSystem.h>

namespace app::classes::types {
    namespace IKSolver_IterationDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver_IterationDelegate__Class** type_info = (::app::IKSolver_IterationDelegate__Class**)(modloader::win::memory::resolve_rva(0x04710B58)); }
    namespace IKSolverTrigonometric_TrigonometricBone { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverTrigonometric_TrigonometricBone__Class** type_info = (::app::IKSolverTrigonometric_TrigonometricBone__Class**)(modloader::win::memory::resolve_rva(0x04738DC0)); }
    namespace IKSolverLimb_AxisDirection__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverLimb_AxisDirection__Array__Class** type_info = (::app::IKSolverLimb_AxisDirection__Array__Class**)(modloader::win::memory::resolve_rva(0x0473C088)); }
    namespace IKSolverFABRIK { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverFABRIK__Class** type_info = (::app::IKSolverFABRIK__Class**)(modloader::win::memory::resolve_rva(0x047780B0)); }
    namespace IKSolverLookAt { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverLookAt__Class** type_info = (::app::IKSolverLookAt__Class**)(modloader::win::memory::resolve_rva(0x047729B8)); }
    namespace IKSolverLookAt_LookAtBone { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverLookAt_LookAtBone__Class** type_info = (::app::IKSolverLookAt_LookAtBone__Class**)(modloader::win::memory::resolve_rva(0x0478F150)); }
    namespace IKSolverLookAt_LookAtBone__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverLookAt_LookAtBone__Array__Class** type_info = (::app::IKSolverLookAt_LookAtBone__Array__Class**)(modloader::win::memory::resolve_rva(0x0473ADD0)); }
    namespace Constraints { IL2CPP_MODLOADER_DLLEXPORT ::app::Constraints__Class** type_info = (::app::Constraints__Class**)(modloader::win::memory::resolve_rva(0x04729C48)); }
    namespace IKSolverLimb__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverLimb__Array__Class** type_info = (::app::IKSolverLimb__Array__Class**)(modloader::win::memory::resolve_rva(0x04753880)); }
    namespace IKSolver__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver__Array__Class** type_info = (::app::IKSolver__Array__Class**)(modloader::win::memory::resolve_rva(0x04795B20)); }
    namespace Finger { IL2CPP_MODLOADER_DLLEXPORT ::app::Finger__Class** type_info = (::app::Finger__Class**)(modloader::win::memory::resolve_rva(0x04769F90)); }
    namespace Finger__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Finger__Array__Class** type_info = (::app::Finger__Array__Class**)(modloader::win::memory::resolve_rva(0x04717A20)); }
    namespace Grounding { IL2CPP_MODLOADER_DLLEXPORT ::app::Grounding__Class** type_info = (::app::Grounding__Class**)(modloader::win::memory::resolve_rva(0x04713220)); }
    namespace Grounding_Leg { IL2CPP_MODLOADER_DLLEXPORT ::app::Grounding_Leg__Class** type_info = (::app::Grounding_Leg__Class**)(modloader::win::memory::resolve_rva(0x04726058)); }
    namespace Grounding_Leg__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Grounding_Leg__Array__Class** type_info = (::app::Grounding_Leg__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E6D0)); }
    namespace Grounding_Pelvis { IL2CPP_MODLOADER_DLLEXPORT ::app::Grounding_Pelvis__Class** type_info = (::app::Grounding_Pelvis__Class**)(modloader::win::memory::resolve_rva(0x0472E0C8)); }
    namespace FullBodyBipedIK { IL2CPP_MODLOADER_DLLEXPORT ::app::FullBodyBipedIK__Class** type_info = (::app::FullBodyBipedIK__Class**)(modloader::win::memory::resolve_rva(0x0476FA80)); }
    namespace AimIK { IL2CPP_MODLOADER_DLLEXPORT ::app::AimIK__Class** type_info = (::app::AimIK__Class**)(modloader::win::memory::resolve_rva(0x04785A48)); }
    namespace IKSolverFullBodyBiped { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverFullBodyBiped__Class** type_info = (::app::IKSolverFullBodyBiped__Class**)(modloader::win::memory::resolve_rva(0x0475E1F8)); }
    namespace FBIKChain { IL2CPP_MODLOADER_DLLEXPORT ::app::FBIKChain__Class** type_info = (::app::FBIKChain__Class**)(modloader::win::memory::resolve_rva(0x047701F0)); }
    namespace IKSolver_Node { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver_Node__Class** type_info = (::app::IKSolver_Node__Class**)(modloader::win::memory::resolve_rva(0x04749B30)); }
    namespace IKSolver_Node__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver_Node__Array__Class** type_info = (::app::IKSolver_Node__Array__Class**)(modloader::win::memory::resolve_rva(0x0478B108)); }
    namespace FBIKChain_ChildConstraint { IL2CPP_MODLOADER_DLLEXPORT ::app::FBIKChain_ChildConstraint__Class** type_info = (::app::FBIKChain_ChildConstraint__Class**)(modloader::win::memory::resolve_rva(0x04732FB8)); }
    namespace FBIKChain_ChildConstraint__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FBIKChain_ChildConstraint__Array__Class** type_info = (::app::FBIKChain_ChildConstraint__Array__Class**)(modloader::win::memory::resolve_rva(0x04799AE8)); }
    namespace IKConstraintBend { IL2CPP_MODLOADER_DLLEXPORT ::app::IKConstraintBend__Class** type_info = (::app::IKConstraintBend__Class**)(modloader::win::memory::resolve_rva(0x047654C8)); }
    namespace FBIKChain__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FBIKChain__Array__Class** type_info = (::app::FBIKChain__Array__Class**)(modloader::win::memory::resolve_rva(0x0472CFF0)); }
    namespace IKEffector { IL2CPP_MODLOADER_DLLEXPORT ::app::IKEffector__Class** type_info = (::app::IKEffector__Class**)(modloader::win::memory::resolve_rva(0x04740878)); }
    namespace IKEffector__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKEffector__Array__Class** type_info = (::app::IKEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x04789020)); }
    namespace IKMappingSpine { IL2CPP_MODLOADER_DLLEXPORT ::app::IKMappingSpine__Class** type_info = (::app::IKMappingSpine__Class**)(modloader::win::memory::resolve_rva(0x04713C00)); }
    namespace IKMapping_BoneMap { IL2CPP_MODLOADER_DLLEXPORT ::app::IKMapping_BoneMap__Class** type_info = (::app::IKMapping_BoneMap__Class**)(modloader::win::memory::resolve_rva(0x04782B00)); }
    namespace IKMapping_BoneMap__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKMapping_BoneMap__Array__Class** type_info = (::app::IKMapping_BoneMap__Array__Class**)(modloader::win::memory::resolve_rva(0x0473E360)); }
    namespace IKMappingBone { IL2CPP_MODLOADER_DLLEXPORT ::app::IKMappingBone__Class** type_info = (::app::IKMappingBone__Class**)(modloader::win::memory::resolve_rva(0x04784C20)); }
    namespace IKMappingBone__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKMappingBone__Array__Class** type_info = (::app::IKMappingBone__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C010)); }
    namespace IKMappingLimb { IL2CPP_MODLOADER_DLLEXPORT ::app::IKMappingLimb__Class** type_info = (::app::IKMappingLimb__Class**)(modloader::win::memory::resolve_rva(0x0472F378)); }
    namespace IKMappingLimb__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IKMappingLimb__Array__Class** type_info = (::app::IKMappingLimb__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E6F8)); }
    namespace FullBodyBipedEffector__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::FullBodyBipedEffector__Enum__Class** type_info = (::app::FullBodyBipedEffector__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789588)); }
    namespace GrounderFBBIK_SpineEffector__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::GrounderFBBIK_SpineEffector__Array__Class** type_info = (::app::GrounderFBBIK_SpineEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x04773B20)); }
    namespace IK__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IK__Array__Class** type_info = (::app::IK__Array__Class**)(modloader::win::memory::resolve_rva(0x0470BF20)); }
    namespace GrounderQuadruped_Foot__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::GrounderQuadruped_Foot__Array__Class** type_info = (::app::GrounderQuadruped_Foot__Array__Class**)(modloader::win::memory::resolve_rva(0x0476EFD0)); }
    namespace CCDIK { IL2CPP_MODLOADER_DLLEXPORT ::app::CCDIK__Class** type_info = (::app::CCDIK__Class**)(modloader::win::memory::resolve_rva(0x047332E8)); }
    namespace IKSolverCCD { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverCCD__Class** type_info = (::app::IKSolverCCD__Class**)(modloader::win::memory::resolve_rva(0x0471DE40)); }
    namespace FABRIKRoot { IL2CPP_MODLOADER_DLLEXPORT ::app::FABRIKRoot__Class** type_info = (::app::FABRIKRoot__Class**)(modloader::win::memory::resolve_rva(0x04727000)); }
    namespace IKSolverFABRIKRoot { IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverFABRIKRoot__Class** type_info = (::app::IKSolverFABRIKRoot__Class**)(modloader::win::memory::resolve_rva(0x047237C0)); }
    namespace FABRIKChain__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FABRIKChain__Array__Class** type_info = (::app::FABRIKChain__Array__Class**)(modloader::win::memory::resolve_rva(0x04729BC8)); }
    namespace FBBIKHeadEffector_BendBone__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FBBIKHeadEffector_BendBone__Array__Class** type_info = (::app::FBBIKHeadEffector_BendBone__Array__Class**)(modloader::win::memory::resolve_rva(0x04796FC0)); }
    namespace InteractionEffector { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionEffector__Class** type_info = (::app::InteractionEffector__Class**)(modloader::win::memory::resolve_rva(0x04769478)); }
    namespace InteractionObject_WeightCurve_Type__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionObject_WeightCurve_Type__Enum__Class** type_info = (::app::InteractionObject_WeightCurve_Type__Enum__Class**)(modloader::win::memory::resolve_rva(0x04797BE0)); }
    namespace InteractionTrigger_Range__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionTrigger_Range__Array__Class** type_info = (::app::InteractionTrigger_Range__Array__Class**)(modloader::win::memory::resolve_rva(0x04769B48)); }
    namespace InteractionSystem_InteractionDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionSystem_InteractionDelegate__Class** type_info = (::app::InteractionSystem_InteractionDelegate__Class**)(modloader::win::memory::resolve_rva(0x04796630)); }
    namespace InteractionLookAt { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionLookAt__Class** type_info = (::app::InteractionLookAt__Class**)(modloader::win::memory::resolve_rva(0x04795960)); }
    namespace InteractionEffector__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionEffector__Array__Class** type_info = (::app::InteractionEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x047474A0)); }
    namespace InteractionTarget__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionTarget__Array__Class** type_info = (::app::InteractionTarget__Array__Class**)(modloader::win::memory::resolve_rva(0x0473D8F8)); }
    namespace GenericPoser_Map { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericPoser_Map__Class** type_info = (::app::GenericPoser_Map__Class**)(modloader::win::memory::resolve_rva(0x0478E818)); }
    namespace GenericPoser_Map__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericPoser_Map__Array__Class** type_info = (::app::GenericPoser_Map__Array__Class**)(modloader::win::memory::resolve_rva(0x0474DD20)); }
    namespace InteractionObject__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionObject__Array__Class** type_info = (::app::InteractionObject__Array__Class**)(modloader::win::memory::resolve_rva(0x04733198)); }
    namespace RagdollUtility_Rigidbone { IL2CPP_MODLOADER_DLLEXPORT ::app::RagdollUtility_Rigidbone__Class** type_info = (::app::RagdollUtility_Rigidbone__Class**)(modloader::win::memory::resolve_rva(0x04707790)); }
    namespace RagdollUtility_Rigidbone__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RagdollUtility_Rigidbone__Array__Class** type_info = (::app::RagdollUtility_Rigidbone__Array__Class**)(modloader::win::memory::resolve_rva(0x04780588)); }
    namespace RagdollUtility_Child { IL2CPP_MODLOADER_DLLEXPORT ::app::RagdollUtility_Child__Class** type_info = (::app::RagdollUtility_Child__Class**)(modloader::win::memory::resolve_rva(0x04795C48)); }
    namespace RagdollUtility_Child__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RagdollUtility_Child__Array__Class** type_info = (::app::RagdollUtility_Child__Array__Class**)(modloader::win::memory::resolve_rva(0x0472FE98)); }
    namespace RagdollUtility_DisableRagdollSmooth_d_21 { IL2CPP_MODLOADER_DLLEXPORT ::app::RagdollUtility_DisableRagdollSmooth_d_21__Class** type_info = (::app::RagdollUtility_DisableRagdollSmooth_d_21__Class**)(modloader::win::memory::resolve_rva(0x04773078)); }
    namespace RotationLimitHinge { IL2CPP_MODLOADER_DLLEXPORT ::app::RotationLimitHinge__Class** type_info = (::app::RotationLimitHinge__Class**)(modloader::win::memory::resolve_rva(0x04747D70)); }
    namespace RotationLimitPolygonal_LimitPoint { IL2CPP_MODLOADER_DLLEXPORT ::app::RotationLimitPolygonal_LimitPoint__Class** type_info = (::app::RotationLimitPolygonal_LimitPoint__Class**)(modloader::win::memory::resolve_rva(0x047409B0)); }
    namespace RotationLimitPolygonal_LimitPoint__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RotationLimitPolygonal_LimitPoint__Array__Class** type_info = (::app::RotationLimitPolygonal_LimitPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x0470DFB8)); }
    namespace RotationLimitPolygonal_ReachCone { IL2CPP_MODLOADER_DLLEXPORT ::app::RotationLimitPolygonal_ReachCone__Class** type_info = (::app::RotationLimitPolygonal_ReachCone__Class**)(modloader::win::memory::resolve_rva(0x04712228)); }
    namespace RotationLimitPolygonal_ReachCone__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RotationLimitPolygonal_ReachCone__Array__Class** type_info = (::app::RotationLimitPolygonal_ReachCone__Array__Class**)(modloader::win::memory::resolve_rva(0x0477C940)); }
    namespace AimPoser_Pose__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AimPoser_Pose__Array__Class** type_info = (::app::AimPoser_Pose__Array__Class**)(modloader::win::memory::resolve_rva(0x0477AAA8)); }
    namespace OffsetPose_EffectorLink__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::OffsetPose_EffectorLink__Array__Class** type_info = (::app::OffsetPose_EffectorLink__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A628)); }
    namespace OffsetModifier_Initiate_d_8 { IL2CPP_MODLOADER_DLLEXPORT ::app::OffsetModifier_Initiate_d_8__Class** type_info = (::app::OffsetModifier_Initiate_d_8__Class**)(modloader::win::memory::resolve_rva(0x04772B90)); }
    namespace MechSpiderLeg_Step_d_24 { IL2CPP_MODLOADER_DLLEXPORT ::app::MechSpiderLeg_Step_d_24__Class** type_info = (::app::MechSpiderLeg_Step_d_24__Class**)(modloader::win::memory::resolve_rva(0x0478F0B0)); }
    namespace MotionAbsorb_AbsorbMotion_d_8 { IL2CPP_MODLOADER_DLLEXPORT ::app::MotionAbsorb_AbsorbMotion_d_8__Class** type_info = (::app::MotionAbsorb_AbsorbMotion_d_8__Class**)(modloader::win::memory::resolve_rva(0x047494C8)); }
    namespace ResetInteractionObject_ResetObject_d_7 { IL2CPP_MODLOADER_DLLEXPORT ::app::ResetInteractionObject_ResetObject_d_7__Class** type_info = (::app::ResetInteractionObject_ResetObject_d_7__Class**)(modloader::win::memory::resolve_rva(0x0476B830)); }
    namespace SoccerDemo_ResetDelayed_d_4 { IL2CPP_MODLOADER_DLLEXPORT ::app::SoccerDemo_ResetDelayed_d_4__Class** type_info = (::app::SoccerDemo_ResetDelayed_d_4__Class**)(modloader::win::memory::resolve_rva(0x04775CC8)); }
    namespace PlatformRotator_SwitchRotation_d_14 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformRotator_SwitchRotation_d_14__Class** type_info = (::app::PlatformRotator_SwitchRotation_d_14__Class**)(modloader::win::memory::resolve_rva(0x04709028)); }
    namespace Phone_EnableDisplay_d_5 { IL2CPP_MODLOADER_DLLEXPORT ::app::Phone_EnableDisplay_d_5__Class** type_info = (::app::Phone_EnableDisplay_d_5__Class**)(modloader::win::memory::resolve_rva(0x04779940)); }
    namespace KeyCode__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::KeyCode__Enum__Array__Class** type_info = (::app::KeyCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04766760)); }
    namespace DynamicInstantiationDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationDescriptor__Class** type_info = (::app::DynamicInstantiationDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04722930)); }
    namespace DynamicInstantiationDescriptor_ReflectionInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationDescriptor_ReflectionInfo__Class** type_info = (::app::DynamicInstantiationDescriptor_ReflectionInfo__Class**)(modloader::win::memory::resolve_rva(0x04781B08)); }
    namespace DynamicInstantiationDescriptor_CountGetter { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationDescriptor_CountGetter__Class** type_info = (::app::DynamicInstantiationDescriptor_CountGetter__Class**)(modloader::win::memory::resolve_rva(0x04723560)); }
    namespace DynamicInstantiationScanner { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner__Class** type_info = (::app::DynamicInstantiationScanner__Class**)(modloader::win::memory::resolve_rva(0x04767C78)); }
    namespace DynamicInstantiationScanner_EvaluationCtx { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_EvaluationCtx__Class** type_info = (::app::DynamicInstantiationScanner_EvaluationCtx__Class**)(modloader::win::memory::resolve_rva(0x04791400)); }
    namespace DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class** type_info = (::app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class**)(modloader::win::memory::resolve_rva(0x047759C0)); }
    namespace DynamicInstantiationScanner_VisitorCtx { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_VisitorCtx__Class** type_info = (::app::DynamicInstantiationScanner_VisitorCtx__Class**)(modloader::win::memory::resolve_rva(0x04748018)); }
    namespace DynamicInstantiationDescriptor_c_DisplayClass28_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class** type_info = (::app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x047207A8)); }
    namespace DynamicInstantiationScanner_EvaluationCtx_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_EvaluationCtx_c__Class** type_info = (::app::DynamicInstantiationScanner_EvaluationCtx_c__Class**)(modloader::win::memory::resolve_rva(0x047685B0)); }
    namespace DynamicInstantiationScanner_DynamicInstantiationProviderVisitor { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class** type_info = (::app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class**)(modloader::win::memory::resolve_rva(0x04780D80)); }
    namespace DynamicInstantiationScanner_ArrayOrListVisitor { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_ArrayOrListVisitor__Class** type_info = (::app::DynamicInstantiationScanner_ArrayOrListVisitor__Class**)(modloader::win::memory::resolve_rva(0x0475CB88)); }
    namespace DynamicInstantiationScanner_GameObjectVisitor { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_GameObjectVisitor__Class** type_info = (::app::DynamicInstantiationScanner_GameObjectVisitor__Class**)(modloader::win::memory::resolve_rva(0x0476B748)); }
    namespace DynamicInstantiationScanner_ScriptableObjectVisitor { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class** type_info = (::app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class**)(modloader::win::memory::resolve_rva(0x04710028)); }
    namespace DynamicInstantiationScanner_TypeVisitor { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_TypeVisitor__Class** type_info = (::app::DynamicInstantiationScanner_TypeVisitor__Class**)(modloader::win::memory::resolve_rva(0x0474A918)); }
    namespace DynamicInstantiationScanner_TypeVisitor_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_TypeVisitor_c__Class** type_info = (::app::DynamicInstantiationScanner_TypeVisitor_c__Class**)(modloader::win::memory::resolve_rva(0x04793178)); }
    namespace DynamicInstantiationScanner_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicInstantiationScanner_c__Class** type_info = (::app::DynamicInstantiationScanner_c__Class**)(modloader::win::memory::resolve_rva(0x0476DDA0)); }
    namespace SceneComponentTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneComponentTracker__Class** type_info = (::app::SceneComponentTracker__Class**)(modloader::win::memory::resolve_rva(0x04701D30)); }
    namespace SceneComponentTracker_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneComponentTracker_c__Class** type_info = (::app::SceneComponentTracker_c__Class**)(modloader::win::memory::resolve_rva(0x04791148)); }
    namespace CameraPositionTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraPositionTracker__Class** type_info = (::app::CameraPositionTracker__Class**)(modloader::win::memory::resolve_rva(0x04706CB0)); }
    namespace CameraPositionTracker_CameraPosition { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraPositionTracker_CameraPosition__Class** type_info = (::app::CameraPositionTracker_CameraPosition__Class**)(modloader::win::memory::resolve_rva(0x0471F390)); }
    namespace MoonFlagsSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonFlagsSystem__Class** type_info = (::app::MoonFlagsSystem__Class**)(modloader::win::memory::resolve_rva(0x04749F00)); }
    namespace MoonFlagsSystem_HiddenFlagModification { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonFlagsSystem_HiddenFlagModification__Class** type_info = (::app::MoonFlagsSystem_HiddenFlagModification__Class**)(modloader::win::memory::resolve_rva(0x047146E0)); }
    namespace MoonFlagsSystem_ObjectState { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonFlagsSystem_ObjectState__Class** type_info = (::app::MoonFlagsSystem_ObjectState__Class**)(modloader::win::memory::resolve_rva(0x047477C8)); }
    namespace ActivateAnimatorSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::ActivateAnimatorSystem__Class** type_info = (::app::ActivateAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04796D70)); }
    namespace TransformAnimatorSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::TransformAnimatorSystem__Class** type_info = (::app::TransformAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x0472C620)); }
}
