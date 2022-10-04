#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/PlayableHandle.h>
#include <Il2CppModLoader/app/types/Playable.h>
#include <Il2CppModLoader/app/types/PlayableGraph.h>
#include <Il2CppModLoader/app/types/PlayableOutputHandle.h>
#include <Il2CppModLoader/app/types/PlayableOutput.h>
#include <Il2CppModLoader/app/types/DefaultValueAttribute_1.h>
#include <Il2CppModLoader/app/types/Logger.h>
#include <Il2CppModLoader/app/types/ILogHandler.h>
#include <Il2CppModLoader/app/types/MessageEventArgs.h>
#include <Il2CppModLoader/app/types/PlayerConnection.h>
#include <Il2CppModLoader/app/types/IPlayerEditorConnectionNative.h>
#include <Il2CppModLoader/app/types/PlayerEditorConnectionEvents.h>
#include <Il2CppModLoader/app/types/PlayerEditorConnectionEvents_MessageTypeSubscribers.h>
#include <Il2CppModLoader/app/types/PlayerEditorConnectionEvents_MessageEvent.h>
#include <Il2CppModLoader/app/types/PlayerEditorConnectionEvents_ConnectionChangeEvent.h>
#include <Il2CppModLoader/app/types/PlayerConnection_Register_c_AnonStorey0.h>
#include <Il2CppModLoader/app/types/PlayerConnection_Unregister_c_AnonStorey1.h>
#include <Il2CppModLoader/app/types/PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2.h>
#include <Il2CppModLoader/app/types/PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0.h>
#include <Il2CppModLoader/app/types/PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1.h>
#include <Il2CppModLoader/app/types/PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2.h>
#include <Il2CppModLoader/app/types/CompareFunction__Enum.h>
#include <Il2CppModLoader/app/types/RenderPipeline.h>
#include <Il2CppModLoader/app/types/IRenderPipelineAsset.h>
#include <Il2CppModLoader/app/types/ColorWriteMask__Enum.h>
#include <Il2CppModLoader/app/types/StencilOp__Enum.h>
#include <Il2CppModLoader/app/types/SupportedRenderingFeatures.h>
#include <Il2CppModLoader/app/types/VisibleLight.h>
#include <Il2CppModLoader/app/types/VisibleReflectionProbe.h>
#include <Il2CppModLoader/app/types/TypeInferenceRules__Enum.h>
#include <Il2CppModLoader/app/types/GenericStack.h>
#include <Il2CppModLoader/app/types/SpeechError__Enum.h>
#include <Il2CppModLoader/app/types/SpeechSystemStatus__Enum.h>
#include <Il2CppModLoader/app/types/ConfidenceLevel__Enum.h>
#include <Il2CppModLoader/app/types/PhraseRecognizedEventArgs.h>
#include <Il2CppModLoader/app/types/SemanticMeaning__Array.h>
#include <Il2CppModLoader/app/types/DictationCompletionCause__Enum.h>
#include <Il2CppModLoader/app/types/JobRanges.h>
#include <Il2CppModLoader/app/types/MetaData.h>
#include <Il2CppModLoader/app/types/Recorder.h>
#include <Il2CppModLoader/app/types/RectTransform.h>
#include <Il2CppModLoader/app/types/RectTransform_ReapplyDrivenProperties.h>
#include <Il2CppModLoader/app/types/Quaternion__Array.h>
#include <Il2CppModLoader/app/types/Transform_Enumerator.h>
#include <Il2CppModLoader/app/types/Font.h>
#include <Il2CppModLoader/app/types/TextGenerator.h>
#include <Il2CppModLoader/app/types/UIVertex.h>
#include <Il2CppModLoader/app/types/UIVertex__Array.h>
#include <Il2CppModLoader/app/types/UICharInfo.h>
#include <Il2CppModLoader/app/types/UILineInfo.h>
#include <Il2CppModLoader/app/types/Event.h>
#include <Il2CppModLoader/app/types/EventType__Enum.h>
#include <Il2CppModLoader/app/types/EventModifiers__Enum.h>
#include <Il2CppModLoader/app/types/GUISkin.h>
#include <Il2CppModLoader/app/types/GUIStyle.h>
#include <Il2CppModLoader/app/types/GUIStyleState.h>
#include <Il2CppModLoader/app/types/GUIStyle__Array.h>
#include <Il2CppModLoader/app/types/GUISettings.h>
#include <Il2CppModLoader/app/types/GUIContent.h>
#include <Il2CppModLoader/app/types/TextEditor.h>
#include <Il2CppModLoader/app/types/TextEditor_TextEditOp__Enum.h>
#include <Il2CppModLoader/app/types/ScrollViewState.h>
#include <Il2CppModLoader/app/types/GUILayoutOption.h>
#include <Il2CppModLoader/app/types/GUILayoutOption__Array.h>
#include <Il2CppModLoader/app/types/GUILayoutUtility_LayoutCache.h>
#include <Il2CppModLoader/app/types/GUILayoutEntry.h>
#include <Il2CppModLoader/app/types/GUILayoutGroup.h>
#include <Il2CppModLoader/app/types/GUIWordWrapSizer.h>
#include <Il2CppModLoader/app/types/GUIScrollGroup.h>
#include <Il2CppModLoader/app/types/SliderState.h>
#include <Il2CppModLoader/app/types/CrossSceneReferenceId.h>
#include <Il2CppModLoader/app/types/CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer.h>
#include <Il2CppModLoader/app/types/CrossSceneReferenceImportData.h>
#include <Il2CppModLoader/app/types/ParticleSystem.h>
#include <Il2CppModLoader/app/types/ParticleSystem_Particle__Array.h>
#include <Il2CppModLoader/app/types/ParticleSystem_Burst__Array.h>
#include <Il2CppModLoader/app/types/ParticleCollisionEvent.h>
#include <Il2CppModLoader/app/types/ParticleSystemRenderer.h>
#include <Il2CppModLoader/app/types/Rigidbody.h>
#include <Il2CppModLoader/app/types/Collider.h>
#include <Il2CppModLoader/app/types/ContactPoint__Array.h>
#include <Il2CppModLoader/app/types/PhysicMaterial.h>
#include <Il2CppModLoader/app/types/RaycastHit.h>
#include <Il2CppModLoader/app/types/RaycastHit__Array.h>
#include <Il2CppModLoader/app/types/Rigidbody__Array.h>
#include <Il2CppModLoader/app/types/MeshCollider.h>
#include <Il2CppModLoader/app/types/CapsuleCollider.h>
#include <Il2CppModLoader/app/types/CapsuleCollider__Array.h>
#include <Il2CppModLoader/app/types/BoxCollider.h>
#include <Il2CppModLoader/app/types/SphereCollider.h>
#include <Il2CppModLoader/app/types/ConfigurableJoint.h>
#include <Il2CppModLoader/app/types/ConfigurableJoint__Array.h>
#include <Il2CppModLoader/app/types/PhysicsScene.h>
#include <Il2CppModLoader/app/types/Collider__Array.h>
#include <Il2CppModLoader/app/types/UnityWebRequest.h>
#include <Il2CppModLoader/app/types/DownloadHandlerBuffer.h>
#include <Il2CppModLoader/app/types/UploadHandlerRaw.h>
#include <Il2CppModLoader/app/types/DelayedLog.h>
#include <Il2CppModLoader/app/types/DynamicDataResolver.h>
#include <Il2CppModLoader/app/types/DynamicDataResolver_SerializedDynamicDataLinkItem.h>

namespace app::classes::types {
    namespace PlayableHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayableHandle__Class** type_info = (::app::PlayableHandle__Class**)(modloader::win::memory::resolve_rva(0x04792F40)); }
    namespace Playable { IL2CPP_MODLOADER_DLLEXPORT ::app::Playable__Class** type_info = (::app::Playable__Class**)(modloader::win::memory::resolve_rva(0x0475E0A8)); }
    namespace PlayableGraph { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayableGraph__Class** type_info = (::app::PlayableGraph__Class**)(modloader::win::memory::resolve_rva(0x04753C78)); }
    namespace PlayableOutputHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayableOutputHandle__Class** type_info = (::app::PlayableOutputHandle__Class**)(modloader::win::memory::resolve_rva(0x04780078)); }
    namespace PlayableOutput { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayableOutput__Class** type_info = (::app::PlayableOutput__Class**)(modloader::win::memory::resolve_rva(0x0477C538)); }
    namespace DefaultValueAttribute_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultValueAttribute_1__Class** type_info = (::app::DefaultValueAttribute_1__Class**)(modloader::win::memory::resolve_rva(0x04754558)); }
    namespace Logger { IL2CPP_MODLOADER_DLLEXPORT ::app::Logger__Class** type_info = (::app::Logger__Class**)(modloader::win::memory::resolve_rva(0x04791180)); }
    namespace ILogHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ILogHandler__Class** type_info = (::app::ILogHandler__Class**)(modloader::win::memory::resolve_rva(0x04799910)); }
    namespace MessageEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageEventArgs__Class** type_info = (::app::MessageEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04741470)); }
    namespace PlayerConnection { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerConnection__Class** type_info = (::app::PlayerConnection__Class**)(modloader::win::memory::resolve_rva(0x0474F698)); }
    namespace IPlayerEditorConnectionNative { IL2CPP_MODLOADER_DLLEXPORT ::app::IPlayerEditorConnectionNative__Class** type_info = (::app::IPlayerEditorConnectionNative__Class**)(modloader::win::memory::resolve_rva(0x0472E9A8)); }
    namespace PlayerEditorConnectionEvents { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerEditorConnectionEvents__Class** type_info = (::app::PlayerEditorConnectionEvents__Class**)(modloader::win::memory::resolve_rva(0x04768E60)); }
    namespace PlayerEditorConnectionEvents_MessageTypeSubscribers { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Class** type_info = (::app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Class**)(modloader::win::memory::resolve_rva(0x0470BE70)); }
    namespace PlayerEditorConnectionEvents_MessageEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerEditorConnectionEvents_MessageEvent__Class** type_info = (::app::PlayerEditorConnectionEvents_MessageEvent__Class**)(modloader::win::memory::resolve_rva(0x047774D0)); }
    namespace PlayerEditorConnectionEvents_ConnectionChangeEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class** type_info = (::app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class**)(modloader::win::memory::resolve_rva(0x047109C0)); }
    namespace PlayerConnection_Register_c_AnonStorey0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerConnection_Register_c_AnonStorey0__Class** type_info = (::app::PlayerConnection_Register_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x0478D5F0)); }
    namespace PlayerConnection_Unregister_c_AnonStorey1 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerConnection_Unregister_c_AnonStorey1__Class** type_info = (::app::PlayerConnection_Unregister_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x0476AFD0)); }
    namespace PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2__Class** type_info = (::app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2__Class**)(modloader::win::memory::resolve_rva(0x047544F8)); }
    namespace PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class** type_info = (::app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x0476D658)); }
    namespace PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1__Class** type_info = (::app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x04726C38)); }
    namespace PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class** type_info = (::app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class**)(modloader::win::memory::resolve_rva(0x04731D40)); }
    namespace CompareFunction__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::CompareFunction__Enum__Class** type_info = (::app::CompareFunction__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475EF98)); }
    namespace RenderPipeline { IL2CPP_MODLOADER_DLLEXPORT ::app::RenderPipeline__Class** type_info = (::app::RenderPipeline__Class**)(modloader::win::memory::resolve_rva(0x0478A420)); }
    namespace IRenderPipelineAsset { IL2CPP_MODLOADER_DLLEXPORT ::app::IRenderPipelineAsset__Class** type_info = (::app::IRenderPipelineAsset__Class**)(modloader::win::memory::resolve_rva(0x0471C2B8)); }
    namespace ColorWriteMask__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ColorWriteMask__Enum__Class** type_info = (::app::ColorWriteMask__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475E428)); }
    namespace StencilOp__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::StencilOp__Enum__Class** type_info = (::app::StencilOp__Enum__Class**)(modloader::win::memory::resolve_rva(0x04710608)); }
    namespace SupportedRenderingFeatures { IL2CPP_MODLOADER_DLLEXPORT ::app::SupportedRenderingFeatures__Class** type_info = (::app::SupportedRenderingFeatures__Class**)(modloader::win::memory::resolve_rva(0x047482E8)); }
    namespace VisibleLight { IL2CPP_MODLOADER_DLLEXPORT ::app::VisibleLight__Class** type_info = (::app::VisibleLight__Class**)(modloader::win::memory::resolve_rva(0x04720668)); }
    namespace VisibleReflectionProbe { IL2CPP_MODLOADER_DLLEXPORT ::app::VisibleReflectionProbe__Class** type_info = (::app::VisibleReflectionProbe__Class**)(modloader::win::memory::resolve_rva(0x0472F028)); }
    namespace TypeInferenceRules__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInferenceRules__Enum__Class** type_info = (::app::TypeInferenceRules__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470B660)); }
    namespace GenericStack { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericStack__Class** type_info = (::app::GenericStack__Class**)(modloader::win::memory::resolve_rva(0x04765120)); }
    namespace SpeechError__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SpeechError__Enum__Class** type_info = (::app::SpeechError__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470C320)); }
    namespace SpeechSystemStatus__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SpeechSystemStatus__Enum__Class** type_info = (::app::SpeechSystemStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x047647B0)); }
    namespace ConfidenceLevel__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ConfidenceLevel__Enum__Class** type_info = (::app::ConfidenceLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04775968)); }
    namespace PhraseRecognizedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::PhraseRecognizedEventArgs__Class** type_info = (::app::PhraseRecognizedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473AE38)); }
    namespace SemanticMeaning__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SemanticMeaning__Array__Class** type_info = (::app::SemanticMeaning__Array__Class**)(modloader::win::memory::resolve_rva(0x04747A10)); }
    namespace DictationCompletionCause__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::DictationCompletionCause__Enum__Class** type_info = (::app::DictationCompletionCause__Enum__Class**)(modloader::win::memory::resolve_rva(0x04771BD0)); }
    namespace JobRanges { IL2CPP_MODLOADER_DLLEXPORT ::app::JobRanges__Class** type_info = (::app::JobRanges__Class**)(modloader::win::memory::resolve_rva(0x04745BA8)); }
    namespace MetaData { IL2CPP_MODLOADER_DLLEXPORT ::app::MetaData__Class** type_info = (::app::MetaData__Class**)(modloader::win::memory::resolve_rva(0x0472A310)); }
    namespace Recorder { IL2CPP_MODLOADER_DLLEXPORT ::app::Recorder__Class** type_info = (::app::Recorder__Class**)(modloader::win::memory::resolve_rva(0x04741808)); }
    namespace RectTransform { IL2CPP_MODLOADER_DLLEXPORT ::app::RectTransform__Class** type_info = (::app::RectTransform__Class**)(modloader::win::memory::resolve_rva(0x047725C8)); }
    namespace RectTransform_ReapplyDrivenProperties { IL2CPP_MODLOADER_DLLEXPORT ::app::RectTransform_ReapplyDrivenProperties__Class** type_info = (::app::RectTransform_ReapplyDrivenProperties__Class**)(modloader::win::memory::resolve_rva(0x047283C8)); }
    namespace Quaternion__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Quaternion__Array__Class** type_info = (::app::Quaternion__Array__Class**)(modloader::win::memory::resolve_rva(0x04735AC0)); }
    namespace Transform_Enumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::Transform_Enumerator__Class** type_info = (::app::Transform_Enumerator__Class**)(modloader::win::memory::resolve_rva(0x04794208)); }
    namespace Font { IL2CPP_MODLOADER_DLLEXPORT ::app::Font__Class** type_info = (::app::Font__Class**)(modloader::win::memory::resolve_rva(0x0471EB38)); }
    namespace TextGenerator { IL2CPP_MODLOADER_DLLEXPORT ::app::TextGenerator__Class** type_info = (::app::TextGenerator__Class**)(modloader::win::memory::resolve_rva(0x04753120)); }
    namespace UIVertex { IL2CPP_MODLOADER_DLLEXPORT ::app::UIVertex__Class** type_info = (::app::UIVertex__Class**)(modloader::win::memory::resolve_rva(0x04798870)); }
    namespace UIVertex__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::UIVertex__Array__Class** type_info = (::app::UIVertex__Array__Class**)(modloader::win::memory::resolve_rva(0x04713A10)); }
    namespace UICharInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::UICharInfo__Class** type_info = (::app::UICharInfo__Class**)(modloader::win::memory::resolve_rva(0x0473FA50)); }
    namespace UILineInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::UILineInfo__Class** type_info = (::app::UILineInfo__Class**)(modloader::win::memory::resolve_rva(0x04710B20)); }
    namespace Event { IL2CPP_MODLOADER_DLLEXPORT ::app::Event__Class** type_info = (::app::Event__Class**)(modloader::win::memory::resolve_rva(0x04747B50)); }
    namespace EventType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EventType__Enum__Class** type_info = (::app::EventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470E068)); }
    namespace EventModifiers__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EventModifiers__Enum__Class** type_info = (::app::EventModifiers__Enum__Class**)(modloader::win::memory::resolve_rva(0x04791AB8)); }
    namespace GUISkin { IL2CPP_MODLOADER_DLLEXPORT ::app::GUISkin__Class** type_info = (::app::GUISkin__Class**)(modloader::win::memory::resolve_rva(0x04760078)); }
    namespace GUIStyle { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIStyle__Class** type_info = (::app::GUIStyle__Class**)(modloader::win::memory::resolve_rva(0x047437D0)); }
    namespace GUIStyleState { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIStyleState__Class** type_info = (::app::GUIStyleState__Class**)(modloader::win::memory::resolve_rva(0x0478D5E0)); }
    namespace GUIStyle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIStyle__Array__Class** type_info = (::app::GUIStyle__Array__Class**)(modloader::win::memory::resolve_rva(0x0473A560)); }
    namespace GUISettings { IL2CPP_MODLOADER_DLLEXPORT ::app::GUISettings__Class** type_info = (::app::GUISettings__Class**)(modloader::win::memory::resolve_rva(0x0470EB00)); }
    namespace GUIContent { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIContent__Class** type_info = (::app::GUIContent__Class**)(modloader::win::memory::resolve_rva(0x0478C400)); }
    namespace TextEditor { IL2CPP_MODLOADER_DLLEXPORT ::app::TextEditor__Class** type_info = (::app::TextEditor__Class**)(modloader::win::memory::resolve_rva(0x047293D0)); }
    namespace TextEditor_TextEditOp__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::TextEditor_TextEditOp__Enum__Class** type_info = (::app::TextEditor_TextEditOp__Enum__Class**)(modloader::win::memory::resolve_rva(0x047675D0)); }
    namespace ScrollViewState { IL2CPP_MODLOADER_DLLEXPORT ::app::ScrollViewState__Class** type_info = (::app::ScrollViewState__Class**)(modloader::win::memory::resolve_rva(0x04734868)); }
    namespace GUILayoutOption { IL2CPP_MODLOADER_DLLEXPORT ::app::GUILayoutOption__Class** type_info = (::app::GUILayoutOption__Class**)(modloader::win::memory::resolve_rva(0x04768BB0)); }
    namespace GUILayoutOption__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::GUILayoutOption__Array__Class** type_info = (::app::GUILayoutOption__Array__Class**)(modloader::win::memory::resolve_rva(0x04770280)); }
    namespace GUILayoutUtility_LayoutCache { IL2CPP_MODLOADER_DLLEXPORT ::app::GUILayoutUtility_LayoutCache__Class** type_info = (::app::GUILayoutUtility_LayoutCache__Class**)(modloader::win::memory::resolve_rva(0x0470AD58)); }
    namespace GUILayoutEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::GUILayoutEntry__Class** type_info = (::app::GUILayoutEntry__Class**)(modloader::win::memory::resolve_rva(0x0471D840)); }
    namespace GUILayoutGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::GUILayoutGroup__Class** type_info = (::app::GUILayoutGroup__Class**)(modloader::win::memory::resolve_rva(0x04768D30)); }
    namespace GUIWordWrapSizer { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIWordWrapSizer__Class** type_info = (::app::GUIWordWrapSizer__Class**)(modloader::win::memory::resolve_rva(0x047751D8)); }
    namespace GUIScrollGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIScrollGroup__Class** type_info = (::app::GUIScrollGroup__Class**)(modloader::win::memory::resolve_rva(0x04705CC8)); }
    namespace SliderState { IL2CPP_MODLOADER_DLLEXPORT ::app::SliderState__Class** type_info = (::app::SliderState__Class**)(modloader::win::memory::resolve_rva(0x047694D0)); }
    namespace CrossSceneReferenceId { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossSceneReferenceId__Class** type_info = (::app::CrossSceneReferenceId__Class**)(modloader::win::memory::resolve_rva(0x0477DA88)); }
    namespace CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class** type_info = (::app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04731540)); }
    namespace CrossSceneReferenceImportData { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossSceneReferenceImportData__Class** type_info = (::app::CrossSceneReferenceImportData__Class**)(modloader::win::memory::resolve_rva(0x04719D70)); }
    namespace ParticleSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::ParticleSystem__Class** type_info = (::app::ParticleSystem__Class**)(modloader::win::memory::resolve_rva(0x0478E630)); }
    namespace ParticleSystem_Particle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ParticleSystem_Particle__Array__Class** type_info = (::app::ParticleSystem_Particle__Array__Class**)(modloader::win::memory::resolve_rva(0x04753BE8)); }
    namespace ParticleSystem_Burst__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ParticleSystem_Burst__Array__Class** type_info = (::app::ParticleSystem_Burst__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D778)); }
    namespace ParticleCollisionEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::ParticleCollisionEvent__Class** type_info = (::app::ParticleCollisionEvent__Class**)(modloader::win::memory::resolve_rva(0x04754D60)); }
    namespace ParticleSystemRenderer { IL2CPP_MODLOADER_DLLEXPORT ::app::ParticleSystemRenderer__Class** type_info = (::app::ParticleSystemRenderer__Class**)(modloader::win::memory::resolve_rva(0x04794718)); }
    namespace Rigidbody { IL2CPP_MODLOADER_DLLEXPORT ::app::Rigidbody__Class** type_info = (::app::Rigidbody__Class**)(modloader::win::memory::resolve_rva(0x0476DC60)); }
    namespace Collider { IL2CPP_MODLOADER_DLLEXPORT ::app::Collider__Class** type_info = (::app::Collider__Class**)(modloader::win::memory::resolve_rva(0x0470DB00)); }
    namespace ContactPoint__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ContactPoint__Array__Class** type_info = (::app::ContactPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04715B40)); }
    namespace PhysicMaterial { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicMaterial__Class** type_info = (::app::PhysicMaterial__Class**)(modloader::win::memory::resolve_rva(0x04734FB0)); }
    namespace RaycastHit { IL2CPP_MODLOADER_DLLEXPORT ::app::RaycastHit__Class** type_info = (::app::RaycastHit__Class**)(modloader::win::memory::resolve_rva(0x047020A8)); }
    namespace RaycastHit__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RaycastHit__Array__Class** type_info = (::app::RaycastHit__Array__Class**)(modloader::win::memory::resolve_rva(0x04727068)); }
    namespace Rigidbody__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Rigidbody__Array__Class** type_info = (::app::Rigidbody__Array__Class**)(modloader::win::memory::resolve_rva(0x047878F0)); }
    namespace MeshCollider { IL2CPP_MODLOADER_DLLEXPORT ::app::MeshCollider__Class** type_info = (::app::MeshCollider__Class**)(modloader::win::memory::resolve_rva(0x0478E830)); }
    namespace CapsuleCollider { IL2CPP_MODLOADER_DLLEXPORT ::app::CapsuleCollider__Class** type_info = (::app::CapsuleCollider__Class**)(modloader::win::memory::resolve_rva(0x047237B8)); }
    namespace CapsuleCollider__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CapsuleCollider__Array__Class** type_info = (::app::CapsuleCollider__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B118)); }
    namespace BoxCollider { IL2CPP_MODLOADER_DLLEXPORT ::app::BoxCollider__Class** type_info = (::app::BoxCollider__Class**)(modloader::win::memory::resolve_rva(0x04784060)); }
    namespace SphereCollider { IL2CPP_MODLOADER_DLLEXPORT ::app::SphereCollider__Class** type_info = (::app::SphereCollider__Class**)(modloader::win::memory::resolve_rva(0x0477F318)); }
    namespace ConfigurableJoint { IL2CPP_MODLOADER_DLLEXPORT ::app::ConfigurableJoint__Class** type_info = (::app::ConfigurableJoint__Class**)(modloader::win::memory::resolve_rva(0x04752560)); }
    namespace ConfigurableJoint__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ConfigurableJoint__Array__Class** type_info = (::app::ConfigurableJoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04759980)); }
    namespace PhysicsScene { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsScene__Class** type_info = (::app::PhysicsScene__Class**)(modloader::win::memory::resolve_rva(0x04708698)); }
    namespace Collider__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Collider__Array__Class** type_info = (::app::Collider__Array__Class**)(modloader::win::memory::resolve_rva(0x0477B1C0)); }
    namespace UnityWebRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::UnityWebRequest__Class** type_info = (::app::UnityWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04716A88)); }
    namespace DownloadHandlerBuffer { IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadHandlerBuffer__Class** type_info = (::app::DownloadHandlerBuffer__Class**)(modloader::win::memory::resolve_rva(0x0472C198)); }
    namespace UploadHandlerRaw { IL2CPP_MODLOADER_DLLEXPORT ::app::UploadHandlerRaw__Class** type_info = (::app::UploadHandlerRaw__Class**)(modloader::win::memory::resolve_rva(0x0472BFA8)); }
    namespace DelayedLog { IL2CPP_MODLOADER_DLLEXPORT ::app::DelayedLog__Class** type_info = (::app::DelayedLog__Class**)(modloader::win::memory::resolve_rva(0x0470FB68)); }
    namespace DynamicDataResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataResolver__Class** type_info = (::app::DynamicDataResolver__Class**)(modloader::win::memory::resolve_rva(0x04752C90)); }
    namespace DynamicDataResolver_SerializedDynamicDataLinkItem { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataResolver_SerializedDynamicDataLinkItem__Class** type_info = (::app::DynamicDataResolver_SerializedDynamicDataLinkItem__Class**)(modloader::win::memory::resolve_rva(0x04706458)); }
}
