#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/ConfigHandler.h>
#include <Il2CppModLoader/app/types/FormatterData.h>
#include <Il2CppModLoader/app/types/RemotingException.h>
#include <Il2CppModLoader/app/types/IMethodReturnMessage.h>
#include <Il2CppModLoader/app/types/IMethodCallMessage.h>
#include <Il2CppModLoader/app/types/RemotingProxy.h>
#include <Il2CppModLoader/app/types/MethodCall.h>
#include <Il2CppModLoader/app/types/ConstructionCall.h>
#include <Il2CppModLoader/app/types/IActivator.h>
#include <Il2CppModLoader/app/types/IMethodMessage.h>
#include <Il2CppModLoader/app/types/RemotingServices_CACD.h>
#include <Il2CppModLoader/app/types/SingletonIdentity.h>
#include <Il2CppModLoader/app/types/SingleCallIdentity.h>
#include <Il2CppModLoader/app/types/DisposerReplySink.h>
#include <Il2CppModLoader/app/types/IDisposable.h>
#include <Il2CppModLoader/app/types/SoapServices_TypeInfo.h>
#include <Il2CppModLoader/app/types/TypeInfo_1.h>
#include <Il2CppModLoader/app/types/ProxyAttribute.h>
#include <Il2CppModLoader/app/types/IConstructionCallMessage.h>
#include <Il2CppModLoader/app/types/TransparentProxy.h>
#include <Il2CppModLoader/app/types/MonoMethodMessage.h>
#include <Il2CppModLoader/app/types/AsyncResult.h>
#include <Il2CppModLoader/app/types/MessageDictionary.h>
#include <Il2CppModLoader/app/types/MCMDictionary.h>
#include <Il2CppModLoader/app/types/LeaseManager.h>
#include <Il2CppModLoader/app/types/LeaseSink.h>
#include <Il2CppModLoader/app/types/IDynamicProperty.h>
#include <Il2CppModLoader/app/types/DynamicPropertyCollection_DynamicPropertyReg.h>
#include <Il2CppModLoader/app/types/IDynamicMessageSink.h>
#include <Il2CppModLoader/app/types/CrossContextChannel.h>
#include <Il2CppModLoader/app/types/CrossContextChannel_ContextRestoreSink.h>
#include <Il2CppModLoader/app/types/IChannelSender.h>
#include <Il2CppModLoader/app/types/IChannel.h>
#include <Il2CppModLoader/app/types/ReturnMessage.h>
#include <Il2CppModLoader/app/types/MethodReturnDictionary.h>
#include <Il2CppModLoader/app/types/ArgInfo.h>
#include <Il2CppModLoader/app/types/CrossAppDomainData.h>
#include <Il2CppModLoader/app/types/CrossAppDomainChannel.h>
#include <Il2CppModLoader/app/types/CrossAppDomainSink.h>
#include <Il2CppModLoader/app/types/CrossAppDomainSink_ProcessMessageRes.h>
#include <Il2CppModLoader/app/types/AsyncRequest.h>
#include <Il2CppModLoader/app/types/SinkProviderData.h>
#include <Il2CppModLoader/app/types/AppDomainLevelActivator.h>
#include <Il2CppModLoader/app/types/IConstructionReturnMessage.h>
#include <Il2CppModLoader/app/types/ConstructionLevelActivator.h>
#include <Il2CppModLoader/app/types/ContextLevelActivator.h>
#include <Il2CppModLoader/app/types/RemoteActivationAttribute.h>
#include <Il2CppModLoader/app/types/SoapFieldAttribute.h>
#include <Il2CppModLoader/app/types/SoapMethodAttribute.h>
#include <Il2CppModLoader/app/types/SoapParameterAttribute.h>
#include <Il2CppModLoader/app/types/SoapTypeAttribute.h>
#include <Il2CppModLoader/app/types/CADObjRef.h>
#include <Il2CppModLoader/app/types/CADMethodRef.h>
#include <Il2CppModLoader/app/types/ClientContextTerminatorSink.h>
#include <Il2CppModLoader/app/types/ClientContextReplySink.h>
#include <Il2CppModLoader/app/types/ConstructionCallDictionary.h>
#include <Il2CppModLoader/app/types/MethodResponse.h>
#include <Il2CppModLoader/app/types/ConstructionResponse.h>
#include <Il2CppModLoader/app/types/EnvoyTerminatorSink.h>
#include <Il2CppModLoader/app/types/ErrorMessage.h>
#include <Il2CppModLoader/app/types/MessageDictionary_DictionaryEnumerator.h>
#include <Il2CppModLoader/app/types/RemotingSurrogate.h>
#include <Il2CppModLoader/app/types/ObjRefSurrogate.h>
#include <Il2CppModLoader/app/types/RemotingSurrogateSelector.h>
#include <Il2CppModLoader/app/types/ServerContextTerminatorSink.h>
#include <Il2CppModLoader/app/types/ServerObjectTerminatorSink.h>
#include <Il2CppModLoader/app/types/ServerObjectReplySink.h>
#include <Il2CppModLoader/app/types/StackBuilderSink.h>
#include <Il2CppModLoader/app/types/Task_1_System_Int32___Array.h>
#include <Il2CppModLoader/app/types/AsyncMethodBuilderCore_MoveNextRunner.h>
#include <Il2CppModLoader/app/types/AsyncMethodBuilderCore_ContinuationWrapper.h>
#include <Il2CppModLoader/app/types/AsyncMethodBuilderCore_c_DisplayClass4_0.h>
#include <Il2CppModLoader/app/types/AsyncMethodBuilderCore_c.h>
#include <Il2CppModLoader/app/types/RuntimeWrappedException.h>
#include <Il2CppModLoader/app/types/TypeForwardedFromAttribute.h>
#include <Il2CppModLoader/app/types/YieldAwaitable_YieldAwaiter.h>
#include <Il2CppModLoader/app/types/ComImportAttribute.h>
#include <Il2CppModLoader/app/types/PreserveSigAttribute.h>
#include <Il2CppModLoader/app/types/InAttribute.h>
#include <Il2CppModLoader/app/types/OutAttribute.h>
#include <Il2CppModLoader/app/types/OptionalAttribute.h>
#include <Il2CppModLoader/app/types/DllImportAttribute.h>
#include <Il2CppModLoader/app/types/FieldOffsetAttribute.h>
#include <Il2CppModLoader/app/types/COMException.h>
#include <Il2CppModLoader/app/types/LowLevelComparer.h>
#include <Il2CppModLoader/app/types/ArrayList_IListWrapper.h>
#include <Il2CppModLoader/app/types/ArrayList_ReadOnlyList.h>
#include <Il2CppModLoader/app/types/ArrayList_ReadOnlyArrayList.h>
#include <Il2CppModLoader/app/types/ArrayList_ArrayListEnumeratorSimple.h>
#include <Il2CppModLoader/app/types/BitArray.h>
#include <Il2CppModLoader/app/types/BitArray_BitArrayEnumeratorSimple.h>
#include <Il2CppModLoader/app/types/CaseInsensitiveComparer.h>
#include <Il2CppModLoader/app/types/CaseInsensitiveHashCodeProvider.h>
#include <Il2CppModLoader/app/types/Comparer.h>
#include <Il2CppModLoader/app/types/CompatibleComparer.h>
#include <Il2CppModLoader/app/types/IHashCodeProvider.h>
#include <Il2CppModLoader/app/types/EmptyReadOnlyDictionaryInternal.h>
#include <Il2CppModLoader/app/types/EmptyReadOnlyDictionaryInternal_NodeEnumerator.h>
#include <Il2CppModLoader/app/types/Hashtable_KeyCollection.h>
#include <Il2CppModLoader/app/types/Hashtable_ValueCollection.h>

namespace app::classes::types {
    namespace ConfigHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ConfigHandler__Class** type_info = (::app::ConfigHandler__Class**)(modloader::win::memory::resolve_rva(0x04758408)); }
    namespace FormatterData { IL2CPP_MODLOADER_DLLEXPORT ::app::FormatterData__Class** type_info = (::app::FormatterData__Class**)(modloader::win::memory::resolve_rva(0x04745260)); }
    namespace RemotingException { IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingException__Class** type_info = (::app::RemotingException__Class**)(modloader::win::memory::resolve_rva(0x0472A148)); }
    namespace IMethodReturnMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::IMethodReturnMessage__Class** type_info = (::app::IMethodReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x047247D0)); }
    namespace IMethodCallMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::IMethodCallMessage__Class** type_info = (::app::IMethodCallMessage__Class**)(modloader::win::memory::resolve_rva(0x04755720)); }
    namespace RemotingProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingProxy__Class** type_info = (::app::RemotingProxy__Class**)(modloader::win::memory::resolve_rva(0x04781FD0)); }
    namespace MethodCall { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCall__Class** type_info = (::app::MethodCall__Class**)(modloader::win::memory::resolve_rva(0x04773EB0)); }
    namespace ConstructionCall { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstructionCall__Class** type_info = (::app::ConstructionCall__Class**)(modloader::win::memory::resolve_rva(0x04780F30)); }
    namespace IActivator { IL2CPP_MODLOADER_DLLEXPORT ::app::IActivator__Class** type_info = (::app::IActivator__Class**)(modloader::win::memory::resolve_rva(0x0470E670)); }
    namespace IMethodMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::IMethodMessage__Class** type_info = (::app::IMethodMessage__Class**)(modloader::win::memory::resolve_rva(0x0477D2B8)); }
    namespace RemotingServices_CACD { IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingServices_CACD__Class** type_info = (::app::RemotingServices_CACD__Class**)(modloader::win::memory::resolve_rva(0x04701998)); }
    namespace SingletonIdentity { IL2CPP_MODLOADER_DLLEXPORT ::app::SingletonIdentity__Class** type_info = (::app::SingletonIdentity__Class**)(modloader::win::memory::resolve_rva(0x047695A8)); }
    namespace SingleCallIdentity { IL2CPP_MODLOADER_DLLEXPORT ::app::SingleCallIdentity__Class** type_info = (::app::SingleCallIdentity__Class**)(modloader::win::memory::resolve_rva(0x04735E30)); }
    namespace DisposerReplySink { IL2CPP_MODLOADER_DLLEXPORT ::app::DisposerReplySink__Class** type_info = (::app::DisposerReplySink__Class**)(modloader::win::memory::resolve_rva(0x047344D8)); }
    namespace IDisposable { IL2CPP_MODLOADER_DLLEXPORT ::app::IDisposable__Class** type_info = (::app::IDisposable__Class**)(modloader::win::memory::resolve_rva(0x04768480)); }
    namespace SoapServices_TypeInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::SoapServices_TypeInfo__Class** type_info = (::app::SoapServices_TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04778058)); }
    namespace TypeInfo_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInfo_1__Class** type_info = (::app::TypeInfo_1__Class**)(modloader::win::memory::resolve_rva(0x04734BD0)); }
    namespace ProxyAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::ProxyAttribute__Class** type_info = (::app::ProxyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04741390)); }
    namespace IConstructionCallMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::IConstructionCallMessage__Class** type_info = (::app::IConstructionCallMessage__Class**)(modloader::win::memory::resolve_rva(0x04768B18)); }
    namespace TransparentProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::TransparentProxy__Class** type_info = (::app::TransparentProxy__Class**)(modloader::win::memory::resolve_rva(0x0474E800)); }
    namespace MonoMethodMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::MonoMethodMessage__Class** type_info = (::app::MonoMethodMessage__Class**)(modloader::win::memory::resolve_rva(0x0470F938)); }
    namespace AsyncResult { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncResult__Class** type_info = (::app::AsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04710B68)); }
    namespace MessageDictionary { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageDictionary__Class** type_info = (::app::MessageDictionary__Class**)(modloader::win::memory::resolve_rva(0x04797770)); }
    namespace MCMDictionary { IL2CPP_MODLOADER_DLLEXPORT ::app::MCMDictionary__Class** type_info = (::app::MCMDictionary__Class**)(modloader::win::memory::resolve_rva(0x047646E8)); }
    namespace LeaseManager { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaseManager__Class** type_info = (::app::LeaseManager__Class**)(modloader::win::memory::resolve_rva(0x047463C0)); }
    namespace LeaseSink { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaseSink__Class** type_info = (::app::LeaseSink__Class**)(modloader::win::memory::resolve_rva(0x04728A08)); }
    namespace IDynamicProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::IDynamicProperty__Class** type_info = (::app::IDynamicProperty__Class**)(modloader::win::memory::resolve_rva(0x047741C0)); }
    namespace DynamicPropertyCollection_DynamicPropertyReg { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicPropertyCollection_DynamicPropertyReg__Class** type_info = (::app::DynamicPropertyCollection_DynamicPropertyReg__Class**)(modloader::win::memory::resolve_rva(0x0472D9C0)); }
    namespace IDynamicMessageSink { IL2CPP_MODLOADER_DLLEXPORT ::app::IDynamicMessageSink__Class** type_info = (::app::IDynamicMessageSink__Class**)(modloader::win::memory::resolve_rva(0x047099E8)); }
    namespace CrossContextChannel { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossContextChannel__Class** type_info = (::app::CrossContextChannel__Class**)(modloader::win::memory::resolve_rva(0x047116A0)); }
    namespace CrossContextChannel_ContextRestoreSink { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossContextChannel_ContextRestoreSink__Class** type_info = (::app::CrossContextChannel_ContextRestoreSink__Class**)(modloader::win::memory::resolve_rva(0x04781A10)); }
    namespace IChannelSender { IL2CPP_MODLOADER_DLLEXPORT ::app::IChannelSender__Class** type_info = (::app::IChannelSender__Class**)(modloader::win::memory::resolve_rva(0x047655D0)); }
    namespace IChannel { IL2CPP_MODLOADER_DLLEXPORT ::app::IChannel__Class** type_info = (::app::IChannel__Class**)(modloader::win::memory::resolve_rva(0x0474EE58)); }
    namespace ReturnMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::ReturnMessage__Class** type_info = (::app::ReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x0477A710)); }
    namespace MethodReturnDictionary { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodReturnDictionary__Class** type_info = (::app::MethodReturnDictionary__Class**)(modloader::win::memory::resolve_rva(0x04717D60)); }
    namespace ArgInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::ArgInfo__Class** type_info = (::app::ArgInfo__Class**)(modloader::win::memory::resolve_rva(0x047080B0)); }
    namespace CrossAppDomainData { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainData__Class** type_info = (::app::CrossAppDomainData__Class**)(modloader::win::memory::resolve_rva(0x0476A510)); }
    namespace CrossAppDomainChannel { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainChannel__Class** type_info = (::app::CrossAppDomainChannel__Class**)(modloader::win::memory::resolve_rva(0x0471DF08)); }
    namespace CrossAppDomainSink { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainSink__Class** type_info = (::app::CrossAppDomainSink__Class**)(modloader::win::memory::resolve_rva(0x0471C368)); }
    namespace CrossAppDomainSink_ProcessMessageRes { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainSink_ProcessMessageRes__Class** type_info = (::app::CrossAppDomainSink_ProcessMessageRes__Class**)(modloader::win::memory::resolve_rva(0x0473A4C8)); }
    namespace AsyncRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncRequest__Class** type_info = (::app::AsyncRequest__Class**)(modloader::win::memory::resolve_rva(0x04704FD8)); }
    namespace SinkProviderData { IL2CPP_MODLOADER_DLLEXPORT ::app::SinkProviderData__Class** type_info = (::app::SinkProviderData__Class**)(modloader::win::memory::resolve_rva(0x04767C80)); }
    namespace AppDomainLevelActivator { IL2CPP_MODLOADER_DLLEXPORT ::app::AppDomainLevelActivator__Class** type_info = (::app::AppDomainLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0474E7B8)); }
    namespace IConstructionReturnMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::IConstructionReturnMessage__Class** type_info = (::app::IConstructionReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x0477A2B8)); }
    namespace ConstructionLevelActivator { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstructionLevelActivator__Class** type_info = (::app::ConstructionLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x04777D30)); }
    namespace ContextLevelActivator { IL2CPP_MODLOADER_DLLEXPORT ::app::ContextLevelActivator__Class** type_info = (::app::ContextLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0478BF58)); }
    namespace RemoteActivationAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::RemoteActivationAttribute__Class** type_info = (::app::RemoteActivationAttribute__Class**)(modloader::win::memory::resolve_rva(0x04743CF8)); }
    namespace SoapFieldAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::SoapFieldAttribute__Class** type_info = (::app::SoapFieldAttribute__Class**)(modloader::win::memory::resolve_rva(0x047522D0)); }
    namespace SoapMethodAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::SoapMethodAttribute__Class** type_info = (::app::SoapMethodAttribute__Class**)(modloader::win::memory::resolve_rva(0x047050C0)); }
    namespace SoapParameterAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::SoapParameterAttribute__Class** type_info = (::app::SoapParameterAttribute__Class**)(modloader::win::memory::resolve_rva(0x04799680)); }
    namespace SoapTypeAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::SoapTypeAttribute__Class** type_info = (::app::SoapTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x04738588)); }
    namespace CADObjRef { IL2CPP_MODLOADER_DLLEXPORT ::app::CADObjRef__Class** type_info = (::app::CADObjRef__Class**)(modloader::win::memory::resolve_rva(0x0471CF58)); }
    namespace CADMethodRef { IL2CPP_MODLOADER_DLLEXPORT ::app::CADMethodRef__Class** type_info = (::app::CADMethodRef__Class**)(modloader::win::memory::resolve_rva(0x0475E580)); }
    namespace ClientContextTerminatorSink { IL2CPP_MODLOADER_DLLEXPORT ::app::ClientContextTerminatorSink__Class** type_info = (::app::ClientContextTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x047313F0)); }
    namespace ClientContextReplySink { IL2CPP_MODLOADER_DLLEXPORT ::app::ClientContextReplySink__Class** type_info = (::app::ClientContextReplySink__Class**)(modloader::win::memory::resolve_rva(0x0472C518)); }
    namespace ConstructionCallDictionary { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstructionCallDictionary__Class** type_info = (::app::ConstructionCallDictionary__Class**)(modloader::win::memory::resolve_rva(0x047512B0)); }
    namespace MethodResponse { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodResponse__Class** type_info = (::app::MethodResponse__Class**)(modloader::win::memory::resolve_rva(0x047507B8)); }
    namespace ConstructionResponse { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstructionResponse__Class** type_info = (::app::ConstructionResponse__Class**)(modloader::win::memory::resolve_rva(0x04769E00)); }
    namespace EnvoyTerminatorSink { IL2CPP_MODLOADER_DLLEXPORT ::app::EnvoyTerminatorSink__Class** type_info = (::app::EnvoyTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x04750088)); }
    namespace ErrorMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::ErrorMessage__Class** type_info = (::app::ErrorMessage__Class**)(modloader::win::memory::resolve_rva(0x0476D548)); }
    namespace MessageDictionary_DictionaryEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageDictionary_DictionaryEnumerator__Class** type_info = (::app::MessageDictionary_DictionaryEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04794A70)); }
    namespace RemotingSurrogate { IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingSurrogate__Class** type_info = (::app::RemotingSurrogate__Class**)(modloader::win::memory::resolve_rva(0x047338D0)); }
    namespace ObjRefSurrogate { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjRefSurrogate__Class** type_info = (::app::ObjRefSurrogate__Class**)(modloader::win::memory::resolve_rva(0x04713E80)); }
    namespace RemotingSurrogateSelector { IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingSurrogateSelector__Class** type_info = (::app::RemotingSurrogateSelector__Class**)(modloader::win::memory::resolve_rva(0x0475B840)); }
    namespace ServerContextTerminatorSink { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerContextTerminatorSink__Class** type_info = (::app::ServerContextTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x04710B50)); }
    namespace ServerObjectTerminatorSink { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerObjectTerminatorSink__Class** type_info = (::app::ServerObjectTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x04755268)); }
    namespace ServerObjectReplySink { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerObjectReplySink__Class** type_info = (::app::ServerObjectReplySink__Class**)(modloader::win::memory::resolve_rva(0x04704E28)); }
    namespace StackBuilderSink { IL2CPP_MODLOADER_DLLEXPORT ::app::StackBuilderSink__Class** type_info = (::app::StackBuilderSink__Class**)(modloader::win::memory::resolve_rva(0x04722C10)); }
    namespace Task_1_System_Int32___Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Task_1_System_Int32___Array__Class** type_info = (::app::Task_1_System_Int32___Array__Class**)(modloader::win::memory::resolve_rva(0x04740420)); }
    namespace AsyncMethodBuilderCore_MoveNextRunner { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncMethodBuilderCore_MoveNextRunner__Class** type_info = (::app::AsyncMethodBuilderCore_MoveNextRunner__Class**)(modloader::win::memory::resolve_rva(0x0473EA08)); }
    namespace AsyncMethodBuilderCore_ContinuationWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncMethodBuilderCore_ContinuationWrapper__Class** type_info = (::app::AsyncMethodBuilderCore_ContinuationWrapper__Class**)(modloader::win::memory::resolve_rva(0x0477E488)); }
    namespace AsyncMethodBuilderCore_c_DisplayClass4_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncMethodBuilderCore_c_DisplayClass4_0__Class** type_info = (::app::AsyncMethodBuilderCore_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04774BF8)); }
    namespace AsyncMethodBuilderCore_c { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncMethodBuilderCore_c__Class** type_info = (::app::AsyncMethodBuilderCore_c__Class**)(modloader::win::memory::resolve_rva(0x047494D0)); }
    namespace RuntimeWrappedException { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeWrappedException__Class** type_info = (::app::RuntimeWrappedException__Class**)(modloader::win::memory::resolve_rva(0x04778E50)); }
    namespace TypeForwardedFromAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeForwardedFromAttribute__Class** type_info = (::app::TypeForwardedFromAttribute__Class**)(modloader::win::memory::resolve_rva(0x04775E80)); }
    namespace YieldAwaitable_YieldAwaiter { IL2CPP_MODLOADER_DLLEXPORT ::app::YieldAwaitable_YieldAwaiter__Class** type_info = (::app::YieldAwaitable_YieldAwaiter__Class**)(modloader::win::memory::resolve_rva(0x04718160)); }
    namespace ComImportAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::ComImportAttribute__Class** type_info = (::app::ComImportAttribute__Class**)(modloader::win::memory::resolve_rva(0x047203C0)); }
    namespace PreserveSigAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::PreserveSigAttribute__Class** type_info = (::app::PreserveSigAttribute__Class**)(modloader::win::memory::resolve_rva(0x04763D40)); }
    namespace InAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::InAttribute__Class** type_info = (::app::InAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472F280)); }
    namespace OutAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::OutAttribute__Class** type_info = (::app::OutAttribute__Class**)(modloader::win::memory::resolve_rva(0x04795CC8)); }
    namespace OptionalAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::OptionalAttribute__Class** type_info = (::app::OptionalAttribute__Class**)(modloader::win::memory::resolve_rva(0x04731170)); }
    namespace DllImportAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::DllImportAttribute__Class** type_info = (::app::DllImportAttribute__Class**)(modloader::win::memory::resolve_rva(0x04757528)); }
    namespace FieldOffsetAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::FieldOffsetAttribute__Class** type_info = (::app::FieldOffsetAttribute__Class**)(modloader::win::memory::resolve_rva(0x04709DD8)); }
    namespace COMException { IL2CPP_MODLOADER_DLLEXPORT ::app::COMException__Class** type_info = (::app::COMException__Class**)(modloader::win::memory::resolve_rva(0x04769FA0)); }
    namespace LowLevelComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::LowLevelComparer__Class** type_info = (::app::LowLevelComparer__Class**)(modloader::win::memory::resolve_rva(0x047087B0)); }
    namespace ArrayList_IListWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayList_IListWrapper__Class** type_info = (::app::ArrayList_IListWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472C7F0)); }
    namespace ArrayList_ReadOnlyList { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayList_ReadOnlyList__Class** type_info = (::app::ArrayList_ReadOnlyList__Class**)(modloader::win::memory::resolve_rva(0x04731F38)); }
    namespace ArrayList_ReadOnlyArrayList { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayList_ReadOnlyArrayList__Class** type_info = (::app::ArrayList_ReadOnlyArrayList__Class**)(modloader::win::memory::resolve_rva(0x0477C768)); }
    namespace ArrayList_ArrayListEnumeratorSimple { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayList_ArrayListEnumeratorSimple__Class** type_info = (::app::ArrayList_ArrayListEnumeratorSimple__Class**)(modloader::win::memory::resolve_rva(0x04720340)); }
    namespace BitArray { IL2CPP_MODLOADER_DLLEXPORT ::app::BitArray__Class** type_info = (::app::BitArray__Class**)(modloader::win::memory::resolve_rva(0x0470C4C0)); }
    namespace BitArray_BitArrayEnumeratorSimple { IL2CPP_MODLOADER_DLLEXPORT ::app::BitArray_BitArrayEnumeratorSimple__Class** type_info = (::app::BitArray_BitArrayEnumeratorSimple__Class**)(modloader::win::memory::resolve_rva(0x047020B8)); }
    namespace CaseInsensitiveComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::CaseInsensitiveComparer__Class** type_info = (::app::CaseInsensitiveComparer__Class**)(modloader::win::memory::resolve_rva(0x04767D98)); }
    namespace CaseInsensitiveHashCodeProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::CaseInsensitiveHashCodeProvider__Class** type_info = (::app::CaseInsensitiveHashCodeProvider__Class**)(modloader::win::memory::resolve_rva(0x047541F0)); }
    namespace Comparer { IL2CPP_MODLOADER_DLLEXPORT ::app::Comparer__Class** type_info = (::app::Comparer__Class**)(modloader::win::memory::resolve_rva(0x04744C38)); }
    namespace CompatibleComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::CompatibleComparer__Class** type_info = (::app::CompatibleComparer__Class**)(modloader::win::memory::resolve_rva(0x047875F0)); }
    namespace IHashCodeProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IHashCodeProvider__Class** type_info = (::app::IHashCodeProvider__Class**)(modloader::win::memory::resolve_rva(0x04709EE0)); }
    namespace EmptyReadOnlyDictionaryInternal { IL2CPP_MODLOADER_DLLEXPORT ::app::EmptyReadOnlyDictionaryInternal__Class** type_info = (::app::EmptyReadOnlyDictionaryInternal__Class**)(modloader::win::memory::resolve_rva(0x04792508)); }
    namespace EmptyReadOnlyDictionaryInternal_NodeEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class** type_info = (::app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475B4A8)); }
    namespace Hashtable_KeyCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::Hashtable_KeyCollection__Class** type_info = (::app::Hashtable_KeyCollection__Class**)(modloader::win::memory::resolve_rva(0x0477E928)); }
    namespace Hashtable_ValueCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::Hashtable_ValueCollection__Class** type_info = (::app::Hashtable_ValueCollection__Class**)(modloader::win::memory::resolve_rva(0x04714D20)); }
}
