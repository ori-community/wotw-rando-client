#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/TransformAnimatorSystem_PositionModification.h>
#include <Il2CppModLoader/app/types/TransformAnimatorSystem_RotationModification.h>
#include <Il2CppModLoader/app/types/TransformAnimatorSystem_ScaleModification.h>
#include <Il2CppModLoader/app/types/TransformAnimatorSystem_ObjectState.h>
#include <Il2CppModLoader/app/types/BigInteger_2.h>
#include <Il2CppModLoader/app/types/AnimationTester_AnimationTestEntry.h>
#include <Il2CppModLoader/app/types/AnimationTester_Group.h>
#include <Il2CppModLoader/app/types/AnimationTester_IToogleGroup.h>
#include <Il2CppModLoader/app/types/AnimationTester_IToogleGroup__Array.h>
#include <Il2CppModLoader/app/types/AnimationTester_IHierarchyUiElement.h>
#include <Il2CppModLoader/app/types/AnimationTester_IIntUiElement.h>
#include <Il2CppModLoader/app/types/AnimationTester_ToggleElementButton.h>
#include <Il2CppModLoader/app/types/AnimationTester_IntElement.h>
#include <Il2CppModLoader/app/types/MoonAnimationAssociation_c.h>
#include <Il2CppModLoader/app/types/PlayLoopAnimation_c.h>
#include <Il2CppModLoader/app/types/IkChainSolver.h>
#include <Il2CppModLoader/app/types/IkChainSolver_JointData__Array.h>
#include <Il2CppModLoader/app/types/MoonAnimator_CrossfadeAnimation.h>
#include <Il2CppModLoader/app/types/MoonAnimator_c_DisplayClass54_0.h>
#include <Il2CppModLoader/app/types/MoonAnimator_c.h>
#include <Il2CppModLoader/app/types/MoonAnimatorSystem.h>
#include <Il2CppModLoader/app/types/MoonAnimatorSystem_AnimatorPriorityComparer.h>
#include <Il2CppModLoader/app/types/MoonAnimatorSystem_c_DisplayClass27_0.h>
#include <Il2CppModLoader/app/types/InverseKinematicsPostprocess.h>
#include <Il2CppModLoader/app/types/InverseKinematicsSolver_AngleRestriction.h>
#include <Il2CppModLoader/app/types/MoonAnimatorParallelUpdater.h>
#include <Il2CppModLoader/app/types/MoonAnimatorParallelUpdater_AnimatorState__Array.h>
#include <Il2CppModLoader/app/types/SimpleSwayAnimPostprocess.h>
#include <Il2CppModLoader/app/types/VerletPhysicsAnimationPostprocess.h>
#include <Il2CppModLoader/app/types/VerletPhysicsAnimationPostprocess_VerletChain.h>
#include <Il2CppModLoader/app/types/VerletBodyIndexed.h>
#include <Il2CppModLoader/app/types/VerletBodyIndexed_Point__Array.h>
#include <Il2CppModLoader/app/types/VerletBodyIndexed_Link__Array.h>
#include <Il2CppModLoader/app/types/VerletBodyIndexed_AngularConstraint__Array.h>
#include <Il2CppModLoader/app/types/VerletPhysicsAnimationPostprocess_JointMetadata.h>
#include <Il2CppModLoader/app/types/SimpleSwayAnimPostprocess_Job.h>
#include <Il2CppModLoader/app/types/SimpleSwayAnimPostprocess_SwayChain.h>
#include <Il2CppModLoader/app/types/SimpleSwayAnimPostprocess_SwayChain__Array.h>
#include <Il2CppModLoader/app/types/SimpleSwayBossAnimPostprocess_Job.h>
#include <Il2CppModLoader/app/types/SimpleSwayBossAnimPostprocess.h>
#include <Il2CppModLoader/app/types/VectorAnimationParameter_Instance.h>
#include <Il2CppModLoader/app/types/VerletBody.h>
#include <Il2CppModLoader/app/types/VerletBody_Point.h>
#include <Il2CppModLoader/app/types/VerletBody_Link.h>
#include <Il2CppModLoader/app/types/VerletPhysicsAnimationPostprocess_Job.h>
#include <Il2CppModLoader/app/types/IAnimatorPostprocessPlayerCompatible.h>
#include <Il2CppModLoader/app/types/DelayJointPostprocessJob.h>
#include <Il2CppModLoader/app/types/JobBasedAnimatorPostprocessGroupData__Array.h>
#include <Il2CppModLoader/app/types/DelayJointPostprocess_JointData__Array.h>
#include <Il2CppModLoader/app/types/MatchJointsJob.h>
#include <Il2CppModLoader/app/types/NativeVerletAnimationPostprocess.h>
#include <Il2CppModLoader/app/types/NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig.h>
#include <Il2CppModLoader/app/types/NativeVerletAnimationPostprocess_Structure__Array.h>
#include <Il2CppModLoader/app/types/AnimationCurve__Array.h>
#include <Il2CppModLoader/app/types/UberStateConditionHelper_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/UberStateConditionHelper_c.h>
#include <Il2CppModLoader/app/types/SerializedBooleanUberState.h>
#include <Il2CppModLoader/app/types/UberID.h>
#include <Il2CppModLoader/app/types/UberStateArchive.h>
#include <Il2CppModLoader/app/types/IUberStateGroup.h>
#include <Il2CppModLoader/app/types/IUberState.h>
#include <Il2CppModLoader/app/types/DesiredUberStateBool.h>
#include <Il2CppModLoader/app/types/DesiredUberStateByte.h>
#include <Il2CppModLoader/app/types/IByteUberState.h>
#include <Il2CppModLoader/app/types/DesiredUberStateComposite.h>
#include <Il2CppModLoader/app/types/DesiredUberStateFloat.h>
#include <Il2CppModLoader/app/types/SerializedFloatUberState.h>
#include <Il2CppModLoader/app/types/DesiredUberStateInt.h>
#include <Il2CppModLoader/app/types/SerializedIntUberState.h>
#include <Il2CppModLoader/app/types/IUberState__Array.h>
#include <Il2CppModLoader/app/types/IDesiredUberState.h>
#include <Il2CppModLoader/app/types/IDesiredUberState__Array.h>
#include <Il2CppModLoader/app/types/UberStateCollection.h>
#include <Il2CppModLoader/app/types/INonSerializedUberState.h>
#include <Il2CppModLoader/app/types/IExternallyModifiableUberState.h>
#include <Il2CppModLoader/app/types/UberStateCollectionGroup.h>
#include <Il2CppModLoader/app/types/UberStateCollectionReference.h>
#include <Il2CppModLoader/app/types/SetupStateModifierData.h>
#include <Il2CppModLoader/app/types/GenericMappingEntry.h>
#include <Il2CppModLoader/app/types/BoolStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/ByteStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/FloatStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/GenericDataContainer.h>
#include <Il2CppModLoader/app/types/IntStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/SetupStateModifier.h>
#include <Il2CppModLoader/app/types/SetupState.h>
#include <Il2CppModLoader/app/types/NewSetupStateControllerResolver.h>
#include <Il2CppModLoader/app/types/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem.h>
#include <Il2CppModLoader/app/types/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink.h>
#include <Il2CppModLoader/app/types/NewSetupStateController_ChangeModel.h>
#include <Il2CppModLoader/app/types/IPassiveStateDescriptor.h>
#include <Il2CppModLoader/app/types/IGenericUberState.h>
#include <Il2CppModLoader/app/types/IndexedState.h>
#include <Il2CppModLoader/app/types/UberTypeTracker_IDerivedTypeTracker.h>
#include <Il2CppModLoader/app/types/UberStateMatcher.h>
#include <Il2CppModLoader/app/types/FloatRangeUberStatePair.h>
#include <Il2CppModLoader/app/types/IntUberStateMatcher_IntRangeUberStatePair.h>
#include <Il2CppModLoader/app/types/StateOverrideSystem.h>
#include <Il2CppModLoader/app/types/StateOverrideSystem_IStateOverrideEntry.h>
#include <Il2CppModLoader/app/types/StateOverrideSystem_UberStateOverride.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_PositionModification { IL2CPP_MODLOADER_DLLEXPORT ::app::TransformAnimatorSystem_PositionModification__Class** type_info = (::app::TransformAnimatorSystem_PositionModification__Class**)(modloader::win::memory::resolve_rva(0x047340C8)); }
    namespace TransformAnimatorSystem_RotationModification { IL2CPP_MODLOADER_DLLEXPORT ::app::TransformAnimatorSystem_RotationModification__Class** type_info = (::app::TransformAnimatorSystem_RotationModification__Class**)(modloader::win::memory::resolve_rva(0x04717D50)); }
    namespace TransformAnimatorSystem_ScaleModification { IL2CPP_MODLOADER_DLLEXPORT ::app::TransformAnimatorSystem_ScaleModification__Class** type_info = (::app::TransformAnimatorSystem_ScaleModification__Class**)(modloader::win::memory::resolve_rva(0x04760030)); }
    namespace TransformAnimatorSystem_ObjectState { IL2CPP_MODLOADER_DLLEXPORT ::app::TransformAnimatorSystem_ObjectState__Class** type_info = (::app::TransformAnimatorSystem_ObjectState__Class**)(modloader::win::memory::resolve_rva(0x04752DC8)); }
    namespace BigInteger_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::BigInteger_2__Class** type_info = (::app::BigInteger_2__Class**)(modloader::win::memory::resolve_rva(0x04779B90)); }
    namespace AnimationTester_AnimationTestEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_AnimationTestEntry__Class** type_info = (::app::AnimationTester_AnimationTestEntry__Class**)(modloader::win::memory::resolve_rva(0x0474DEB8)); }
    namespace AnimationTester_Group { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_Group__Class** type_info = (::app::AnimationTester_Group__Class**)(modloader::win::memory::resolve_rva(0x047719F8)); }
    namespace AnimationTester_IToogleGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_IToogleGroup__Class** type_info = (::app::AnimationTester_IToogleGroup__Class**)(modloader::win::memory::resolve_rva(0x047694C8)); }
    namespace AnimationTester_IToogleGroup__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_IToogleGroup__Array__Class** type_info = (::app::AnimationTester_IToogleGroup__Array__Class**)(modloader::win::memory::resolve_rva(0x04799B20)); }
    namespace AnimationTester_IHierarchyUiElement { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_IHierarchyUiElement__Class** type_info = (::app::AnimationTester_IHierarchyUiElement__Class**)(modloader::win::memory::resolve_rva(0x04772EB8)); }
    namespace AnimationTester_IIntUiElement { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_IIntUiElement__Class** type_info = (::app::AnimationTester_IIntUiElement__Class**)(modloader::win::memory::resolve_rva(0x04786C00)); }
    namespace AnimationTester_ToggleElementButton { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_ToggleElementButton__Class** type_info = (::app::AnimationTester_ToggleElementButton__Class**)(modloader::win::memory::resolve_rva(0x04792B28)); }
    namespace AnimationTester_IntElement { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTester_IntElement__Class** type_info = (::app::AnimationTester_IntElement__Class**)(modloader::win::memory::resolve_rva(0x04731550)); }
    namespace MoonAnimationAssociation_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimationAssociation_c__Class** type_info = (::app::MoonAnimationAssociation_c__Class**)(modloader::win::memory::resolve_rva(0x0477E840)); }
    namespace PlayLoopAnimation_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayLoopAnimation_c__Class** type_info = (::app::PlayLoopAnimation_c__Class**)(modloader::win::memory::resolve_rva(0x04787B10)); }
    namespace IkChainSolver { IL2CPP_MODLOADER_DLLEXPORT ::app::IkChainSolver__Class** type_info = (::app::IkChainSolver__Class**)(modloader::win::memory::resolve_rva(0x04747410)); }
    namespace IkChainSolver_JointData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IkChainSolver_JointData__Array__Class** type_info = (::app::IkChainSolver_JointData__Array__Class**)(modloader::win::memory::resolve_rva(0x04734810)); }
    namespace MoonAnimator_CrossfadeAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_CrossfadeAnimation__Class** type_info = (::app::MoonAnimator_CrossfadeAnimation__Class**)(modloader::win::memory::resolve_rva(0x04722780)); }
    namespace MoonAnimator_c_DisplayClass54_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_c_DisplayClass54_0__Class** type_info = (::app::MoonAnimator_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x04728F60)); }
    namespace MoonAnimator_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_c__Class** type_info = (::app::MoonAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04709928)); }
    namespace MoonAnimatorSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimatorSystem__Class** type_info = (::app::MoonAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04707580)); }
    namespace MoonAnimatorSystem_AnimatorPriorityComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimatorSystem_AnimatorPriorityComparer__Class** type_info = (::app::MoonAnimatorSystem_AnimatorPriorityComparer__Class**)(modloader::win::memory::resolve_rva(0x0478FD68)); }
    namespace MoonAnimatorSystem_c_DisplayClass27_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimatorSystem_c_DisplayClass27_0__Class** type_info = (::app::MoonAnimatorSystem_c_DisplayClass27_0__Class**)(modloader::win::memory::resolve_rva(0x04703A08)); }
    namespace InverseKinematicsPostprocess { IL2CPP_MODLOADER_DLLEXPORT ::app::InverseKinematicsPostprocess__Class** type_info = (::app::InverseKinematicsPostprocess__Class**)(modloader::win::memory::resolve_rva(0x0472BD40)); }
    namespace InverseKinematicsSolver_AngleRestriction { IL2CPP_MODLOADER_DLLEXPORT ::app::InverseKinematicsSolver_AngleRestriction__Class** type_info = (::app::InverseKinematicsSolver_AngleRestriction__Class**)(modloader::win::memory::resolve_rva(0x047436C0)); }
    namespace MoonAnimatorParallelUpdater { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimatorParallelUpdater__Class** type_info = (::app::MoonAnimatorParallelUpdater__Class**)(modloader::win::memory::resolve_rva(0x04771120)); }
    namespace MoonAnimatorParallelUpdater_AnimatorState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class** type_info = (::app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class**)(modloader::win::memory::resolve_rva(0x04788CD8)); }
    namespace SimpleSwayAnimPostprocess { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleSwayAnimPostprocess__Class** type_info = (::app::SimpleSwayAnimPostprocess__Class**)(modloader::win::memory::resolve_rva(0x0472ED18)); }
    namespace VerletPhysicsAnimationPostprocess { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletPhysicsAnimationPostprocess__Class** type_info = (::app::VerletPhysicsAnimationPostprocess__Class**)(modloader::win::memory::resolve_rva(0x0470A068)); }
    namespace VerletPhysicsAnimationPostprocess_VerletChain { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletPhysicsAnimationPostprocess_VerletChain__Class** type_info = (::app::VerletPhysicsAnimationPostprocess_VerletChain__Class**)(modloader::win::memory::resolve_rva(0x047050E0)); }
    namespace VerletBodyIndexed { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletBodyIndexed__Class** type_info = (::app::VerletBodyIndexed__Class**)(modloader::win::memory::resolve_rva(0x0474D430)); }
    namespace VerletBodyIndexed_Point__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletBodyIndexed_Point__Array__Class** type_info = (::app::VerletBodyIndexed_Point__Array__Class**)(modloader::win::memory::resolve_rva(0x04725B20)); }
    namespace VerletBodyIndexed_Link__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletBodyIndexed_Link__Array__Class** type_info = (::app::VerletBodyIndexed_Link__Array__Class**)(modloader::win::memory::resolve_rva(0x0476DFC0)); }
    namespace VerletBodyIndexed_AngularConstraint__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletBodyIndexed_AngularConstraint__Array__Class** type_info = (::app::VerletBodyIndexed_AngularConstraint__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E978)); }
    namespace VerletPhysicsAnimationPostprocess_JointMetadata { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletPhysicsAnimationPostprocess_JointMetadata__Class** type_info = (::app::VerletPhysicsAnimationPostprocess_JointMetadata__Class**)(modloader::win::memory::resolve_rva(0x0472CE28)); }
    namespace SimpleSwayAnimPostprocess_Job { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleSwayAnimPostprocess_Job__Class** type_info = (::app::SimpleSwayAnimPostprocess_Job__Class**)(modloader::win::memory::resolve_rva(0x04726390)); }
    namespace SimpleSwayAnimPostprocess_SwayChain { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleSwayAnimPostprocess_SwayChain__Class** type_info = (::app::SimpleSwayAnimPostprocess_SwayChain__Class**)(modloader::win::memory::resolve_rva(0x0472D788)); }
    namespace SimpleSwayAnimPostprocess_SwayChain__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleSwayAnimPostprocess_SwayChain__Array__Class** type_info = (::app::SimpleSwayAnimPostprocess_SwayChain__Array__Class**)(modloader::win::memory::resolve_rva(0x04765840)); }
    namespace SimpleSwayBossAnimPostprocess_Job { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleSwayBossAnimPostprocess_Job__Class** type_info = (::app::SimpleSwayBossAnimPostprocess_Job__Class**)(modloader::win::memory::resolve_rva(0x0473E998)); }
    namespace SimpleSwayBossAnimPostprocess { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleSwayBossAnimPostprocess__Class** type_info = (::app::SimpleSwayBossAnimPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04744F38)); }
    namespace VectorAnimationParameter_Instance { IL2CPP_MODLOADER_DLLEXPORT ::app::VectorAnimationParameter_Instance__Class** type_info = (::app::VectorAnimationParameter_Instance__Class**)(modloader::win::memory::resolve_rva(0x04776870)); }
    namespace VerletBody { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletBody__Class** type_info = (::app::VerletBody__Class**)(modloader::win::memory::resolve_rva(0x047383F0)); }
    namespace VerletBody_Point { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletBody_Point__Class** type_info = (::app::VerletBody_Point__Class**)(modloader::win::memory::resolve_rva(0x0474FBE8)); }
    namespace VerletBody_Link { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletBody_Link__Class** type_info = (::app::VerletBody_Link__Class**)(modloader::win::memory::resolve_rva(0x0477D7F0)); }
    namespace VerletPhysicsAnimationPostprocess_Job { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletPhysicsAnimationPostprocess_Job__Class** type_info = (::app::VerletPhysicsAnimationPostprocess_Job__Class**)(modloader::win::memory::resolve_rva(0x0477B690)); }
    namespace IAnimatorPostprocessPlayerCompatible { IL2CPP_MODLOADER_DLLEXPORT ::app::IAnimatorPostprocessPlayerCompatible__Class** type_info = (::app::IAnimatorPostprocessPlayerCompatible__Class**)(modloader::win::memory::resolve_rva(0x04744390)); }
    namespace DelayJointPostprocessJob { IL2CPP_MODLOADER_DLLEXPORT ::app::DelayJointPostprocessJob__Class** type_info = (::app::DelayJointPostprocessJob__Class**)(modloader::win::memory::resolve_rva(0x0471EB28)); }
    namespace JobBasedAnimatorPostprocessGroupData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::JobBasedAnimatorPostprocessGroupData__Array__Class** type_info = (::app::JobBasedAnimatorPostprocessGroupData__Array__Class**)(modloader::win::memory::resolve_rva(0x04730E10)); }
    namespace DelayJointPostprocess_JointData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DelayJointPostprocess_JointData__Array__Class** type_info = (::app::DelayJointPostprocess_JointData__Array__Class**)(modloader::win::memory::resolve_rva(0x047420C0)); }
    namespace MatchJointsJob { IL2CPP_MODLOADER_DLLEXPORT ::app::MatchJointsJob__Class** type_info = (::app::MatchJointsJob__Class**)(modloader::win::memory::resolve_rva(0x04776E40)); }
    namespace NativeVerletAnimationPostprocess { IL2CPP_MODLOADER_DLLEXPORT ::app::NativeVerletAnimationPostprocess__Class** type_info = (::app::NativeVerletAnimationPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04795710)); }
    namespace NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig { IL2CPP_MODLOADER_DLLEXPORT ::app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class** type_info = (::app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class**)(modloader::win::memory::resolve_rva(0x04752378)); }
    namespace NativeVerletAnimationPostprocess_Structure__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::NativeVerletAnimationPostprocess_Structure__Array__Class** type_info = (::app::NativeVerletAnimationPostprocess_Structure__Array__Class**)(modloader::win::memory::resolve_rva(0x04753B40)); }
    namespace AnimationCurve__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationCurve__Array__Class** type_info = (::app::AnimationCurve__Array__Class**)(modloader::win::memory::resolve_rva(0x047601D0)); }
    namespace UberStateConditionHelper_c_DisplayClass3_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateConditionHelper_c_DisplayClass3_0__Class** type_info = (::app::UberStateConditionHelper_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04737DD8)); }
    namespace UberStateConditionHelper_c { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateConditionHelper_c__Class** type_info = (::app::UberStateConditionHelper_c__Class**)(modloader::win::memory::resolve_rva(0x04729C18)); }
    namespace SerializedBooleanUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedBooleanUberState__Class** type_info = (::app::SerializedBooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0471D768)); }
    namespace UberID { IL2CPP_MODLOADER_DLLEXPORT ::app::UberID__Class** type_info = (::app::UberID__Class**)(modloader::win::memory::resolve_rva(0x04766D98)); }
    namespace UberStateArchive { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateArchive__Class** type_info = (::app::UberStateArchive__Class**)(modloader::win::memory::resolve_rva(0x04733250)); }
    namespace IUberStateGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberStateGroup__Class** type_info = (::app::IUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x0471FA68)); }
    namespace IUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberState__Class** type_info = (::app::IUberState__Class**)(modloader::win::memory::resolve_rva(0x04725708)); }
    namespace DesiredUberStateBool { IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateBool__Class** type_info = (::app::DesiredUberStateBool__Class**)(modloader::win::memory::resolve_rva(0x04741A60)); }
    namespace DesiredUberStateByte { IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateByte__Class** type_info = (::app::DesiredUberStateByte__Class**)(modloader::win::memory::resolve_rva(0x04704228)); }
    namespace IByteUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::IByteUberState__Class** type_info = (::app::IByteUberState__Class**)(modloader::win::memory::resolve_rva(0x04734950)); }
    namespace DesiredUberStateComposite { IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateComposite__Class** type_info = (::app::DesiredUberStateComposite__Class**)(modloader::win::memory::resolve_rva(0x04750288)); }
    namespace DesiredUberStateFloat { IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateFloat__Class** type_info = (::app::DesiredUberStateFloat__Class**)(modloader::win::memory::resolve_rva(0x04777670)); }
    namespace SerializedFloatUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedFloatUberState__Class** type_info = (::app::SerializedFloatUberState__Class**)(modloader::win::memory::resolve_rva(0x047249F0)); }
    namespace DesiredUberStateInt { IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateInt__Class** type_info = (::app::DesiredUberStateInt__Class**)(modloader::win::memory::resolve_rva(0x04749AF0)); }
    namespace SerializedIntUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedIntUberState__Class** type_info = (::app::SerializedIntUberState__Class**)(modloader::win::memory::resolve_rva(0x0471C838)); }
    namespace IUberState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberState__Array__Class** type_info = (::app::IUberState__Array__Class**)(modloader::win::memory::resolve_rva(0x047331A0)); }
    namespace IDesiredUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::IDesiredUberState__Class** type_info = (::app::IDesiredUberState__Class**)(modloader::win::memory::resolve_rva(0x0472B058)); }
    namespace IDesiredUberState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IDesiredUberState__Array__Class** type_info = (::app::IDesiredUberState__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B538)); }
    namespace UberStateCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateCollection__Class** type_info = (::app::UberStateCollection__Class**)(modloader::win::memory::resolve_rva(0x04706B28)); }
    namespace INonSerializedUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::INonSerializedUberState__Class** type_info = (::app::INonSerializedUberState__Class**)(modloader::win::memory::resolve_rva(0x04770010)); }
    namespace IExternallyModifiableUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::IExternallyModifiableUberState__Class** type_info = (::app::IExternallyModifiableUberState__Class**)(modloader::win::memory::resolve_rva(0x04730698)); }
    namespace UberStateCollectionGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateCollectionGroup__Class** type_info = (::app::UberStateCollectionGroup__Class**)(modloader::win::memory::resolve_rva(0x0477BC58)); }
    namespace UberStateCollectionReference { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateCollectionReference__Class** type_info = (::app::UberStateCollectionReference__Class**)(modloader::win::memory::resolve_rva(0x04784130)); }
    namespace SetupStateModifierData { IL2CPP_MODLOADER_DLLEXPORT ::app::SetupStateModifierData__Class** type_info = (::app::SetupStateModifierData__Class**)(modloader::win::memory::resolve_rva(0x04720E38)); }
    namespace GenericMappingEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericMappingEntry__Class** type_info = (::app::GenericMappingEntry__Class**)(modloader::win::memory::resolve_rva(0x04768190)); }
    namespace BoolStateMap_Mapping { IL2CPP_MODLOADER_DLLEXPORT ::app::BoolStateMap_Mapping__Class** type_info = (::app::BoolStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x04732F58)); }
    namespace ByteStateMap_Mapping { IL2CPP_MODLOADER_DLLEXPORT ::app::ByteStateMap_Mapping__Class** type_info = (::app::ByteStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x0470A458)); }
    namespace FloatStateMap_Mapping { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatStateMap_Mapping__Class** type_info = (::app::FloatStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x047726F0)); }
    namespace GenericDataContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericDataContainer__Class** type_info = (::app::GenericDataContainer__Class**)(modloader::win::memory::resolve_rva(0x047317D0)); }
    namespace IntStateMap_Mapping { IL2CPP_MODLOADER_DLLEXPORT ::app::IntStateMap_Mapping__Class** type_info = (::app::IntStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x047596D0)); }
    namespace SetupStateModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::SetupStateModifier__Class** type_info = (::app::SetupStateModifier__Class**)(modloader::win::memory::resolve_rva(0x04785A50)); }
    namespace SetupState { IL2CPP_MODLOADER_DLLEXPORT ::app::SetupState__Class** type_info = (::app::SetupState__Class**)(modloader::win::memory::resolve_rva(0x04725E08)); }
    namespace NewSetupStateControllerResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateControllerResolver__Class** type_info = (::app::NewSetupStateControllerResolver__Class**)(modloader::win::memory::resolve_rva(0x0478FCC8)); }
    namespace NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem { IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class** type_info = (::app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class**)(modloader::win::memory::resolve_rva(0x04773638)); }
    namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink { IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class** type_info = (::app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class**)(modloader::win::memory::resolve_rva(0x0477C600)); }
    namespace NewSetupStateController_ChangeModel { IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateController_ChangeModel__Class** type_info = (::app::NewSetupStateController_ChangeModel__Class**)(modloader::win::memory::resolve_rva(0x0472BCD8)); }
    namespace IPassiveStateDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::IPassiveStateDescriptor__Class** type_info = (::app::IPassiveStateDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04786258)); }
    namespace IGenericUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::IGenericUberState__Class** type_info = (::app::IGenericUberState__Class**)(modloader::win::memory::resolve_rva(0x04799938)); }
    namespace IndexedState { IL2CPP_MODLOADER_DLLEXPORT ::app::IndexedState__Class** type_info = (::app::IndexedState__Class**)(modloader::win::memory::resolve_rva(0x0471FA60)); }
    namespace UberTypeTracker_IDerivedTypeTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::UberTypeTracker_IDerivedTypeTracker__Class** type_info = (::app::UberTypeTracker_IDerivedTypeTracker__Class**)(modloader::win::memory::resolve_rva(0x0470A5D0)); }
    namespace UberStateMatcher { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateMatcher__Class** type_info = (::app::UberStateMatcher__Class**)(modloader::win::memory::resolve_rva(0x0477DBE0)); }
    namespace FloatRangeUberStatePair { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatRangeUberStatePair__Class** type_info = (::app::FloatRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x047018C8)); }
    namespace IntUberStateMatcher_IntRangeUberStatePair { IL2CPP_MODLOADER_DLLEXPORT ::app::IntUberStateMatcher_IntRangeUberStatePair__Class** type_info = (::app::IntUberStateMatcher_IntRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x0472E400)); }
    namespace StateOverrideSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::StateOverrideSystem__Class** type_info = (::app::StateOverrideSystem__Class**)(modloader::win::memory::resolve_rva(0x0475A428)); }
    namespace StateOverrideSystem_IStateOverrideEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::StateOverrideSystem_IStateOverrideEntry__Class** type_info = (::app::StateOverrideSystem_IStateOverrideEntry__Class**)(modloader::win::memory::resolve_rva(0x04786E40)); }
    namespace StateOverrideSystem_UberStateOverride { IL2CPP_MODLOADER_DLLEXPORT ::app::StateOverrideSystem_UberStateOverride__Class** type_info = (::app::StateOverrideSystem_UberStateOverride__Class**)(modloader::win::memory::resolve_rva(0x0476AED8)); }
}
