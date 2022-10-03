#include <Il2CppModLoader/app/types/ActivatedClientTypeEntry.h>
#include <Il2CppModLoader/app/types/ActivatedServiceTypeEntry.h>
#include <Il2CppModLoader/app/types/AppDomainLevelActivator.h>
#include <Il2CppModLoader/app/types/ArgInfo.h>
#include <Il2CppModLoader/app/types/AsyncRequest.h>
#include <Il2CppModLoader/app/types/AsyncResult.h>
#include <Il2CppModLoader/app/types/BinaryArray.h>
#include <Il2CppModLoader/app/types/BinaryArrayTypeEnum__Enum.h>
#include <Il2CppModLoader/app/types/BinaryAssembly.h>
#include <Il2CppModLoader/app/types/BinaryAssemblyInfo.h>
#include <Il2CppModLoader/app/types/BinaryCrossAppDomainAssembly.h>
#include <Il2CppModLoader/app/types/BinaryCrossAppDomainMap.h>
#include <Il2CppModLoader/app/types/BinaryCrossAppDomainString.h>
#include <Il2CppModLoader/app/types/BinaryMethodCall.h>
#include <Il2CppModLoader/app/types/BinaryMethodReturn.h>
#include <Il2CppModLoader/app/types/BinaryObject.h>
#include <Il2CppModLoader/app/types/BinaryObjectString.h>
#include <Il2CppModLoader/app/types/BinaryObjectWithMap.h>
#include <Il2CppModLoader/app/types/BinaryObjectWithMapTyped.h>
#include <Il2CppModLoader/app/types/BinaryTypeEnum__Enum__Array.h>
#include <Il2CppModLoader/app/types/CADObjRef.h>
#include <Il2CppModLoader/app/types/ChannelData.h>
#include <Il2CppModLoader/app/types/ChannelInfo.h>
#include <Il2CppModLoader/app/types/ConfigHandler.h>
#include <Il2CppModLoader/app/types/ConstructionCall.h>
#include <Il2CppModLoader/app/types/ConstructionLevelActivator.h>
#include <Il2CppModLoader/app/types/ContextLevelActivator.h>
#include <Il2CppModLoader/app/types/CrossAppDomainChannel.h>
#include <Il2CppModLoader/app/types/CrossAppDomainData.h>
#include <Il2CppModLoader/app/types/CrossAppDomainSink.h>
#include <Il2CppModLoader/app/types/CrossAppDomainSink_ProcessMessageRes.h>
#include <Il2CppModLoader/app/types/CrossContextChannel.h>
#include <Il2CppModLoader/app/types/CrossContextChannel_ContextRestoreSink.h>
#include <Il2CppModLoader/app/types/DisposerReplySink.h>
#include <Il2CppModLoader/app/types/Double__Array.h>
#include <Il2CppModLoader/app/types/DynamicPropertyCollection_DynamicPropertyReg.h>
#include <Il2CppModLoader/app/types/EnvoyInfo.h>
#include <Il2CppModLoader/app/types/FormatterData.h>
#include <Il2CppModLoader/app/types/IntSizedArray.h>
#include <Il2CppModLoader/app/types/InternalArrayTypeE__Enum.h>
#include <Il2CppModLoader/app/types/InternalFE.h>
#include <Il2CppModLoader/app/types/InternalObjectTypeE__Enum.h>
#include <Il2CppModLoader/app/types/InternalParseTypeE__Enum.h>
#include <Il2CppModLoader/app/types/InternalPrimitiveTypeE__Enum.h>
#include <Il2CppModLoader/app/types/LeaseManager.h>
#include <Il2CppModLoader/app/types/LeaseSink.h>
#include <Il2CppModLoader/app/types/MCMDictionary.h>
#include <Il2CppModLoader/app/types/MemberPrimitiveTyped.h>
#include <Il2CppModLoader/app/types/MemberPrimitiveUnTyped.h>
#include <Il2CppModLoader/app/types/MemberReference.h>
#include <Il2CppModLoader/app/types/MessageDictionary.h>
#include <Il2CppModLoader/app/types/MessageEnd.h>
#include <Il2CppModLoader/app/types/MethodCall.h>
#include <Il2CppModLoader/app/types/MethodReturnDictionary.h>
#include <Il2CppModLoader/app/types/MonoMethodMessage.h>
#include <Il2CppModLoader/app/types/NameCache.h>
#include <Il2CppModLoader/app/types/NameInfo.h>
#include <Il2CppModLoader/app/types/ObjectMap.h>
#include <Il2CppModLoader/app/types/ObjectMapInfo.h>
#include <Il2CppModLoader/app/types/ObjectNull.h>
#include <Il2CppModLoader/app/types/ObjectProgress.h>
#include <Il2CppModLoader/app/types/ObjectReader.h>
#include <Il2CppModLoader/app/types/ObjectReader_TopLevelAssemblyTypeResolver.h>
#include <Il2CppModLoader/app/types/ObjectReader_TypeNAssembly.h>
#include <Il2CppModLoader/app/types/ObjectWriter.h>
#include <Il2CppModLoader/app/types/ParseRecord.h>
#include <Il2CppModLoader/app/types/PrimitiveArray.h>
#include <Il2CppModLoader/app/types/ProviderData.h>
#include <Il2CppModLoader/app/types/ProxyAttribute.h>
#include <Il2CppModLoader/app/types/ReadObjectInfo.h>
#include <Il2CppModLoader/app/types/RemoteActivationAttribute.h>
#include <Il2CppModLoader/app/types/RemotingException.h>
#include <Il2CppModLoader/app/types/RemotingProxy.h>
#include <Il2CppModLoader/app/types/RemotingServices_CACD.h>
#include <Il2CppModLoader/app/types/ReturnMessage.h>
#include <Il2CppModLoader/app/types/SerObjectInfoCache.h>
#include <Il2CppModLoader/app/types/SerObjectInfoInit.h>
#include <Il2CppModLoader/app/types/SerStack.h>
#include <Il2CppModLoader/app/types/SerializationHeaderRecord.h>
#include <Il2CppModLoader/app/types/SingleCallIdentity.h>
#include <Il2CppModLoader/app/types/Single__Array.h>
#include <Il2CppModLoader/app/types/SingletonIdentity.h>
#include <Il2CppModLoader/app/types/SinkProviderData.h>
#include <Il2CppModLoader/app/types/SizedArray.h>
#include <Il2CppModLoader/app/types/SoapAttribute.h>
#include <Il2CppModLoader/app/types/SoapFieldAttribute.h>
#include <Il2CppModLoader/app/types/SoapMethodAttribute.h>
#include <Il2CppModLoader/app/types/SoapParameterAttribute.h>
#include <Il2CppModLoader/app/types/SoapServices_TypeInfo.h>
#include <Il2CppModLoader/app/types/SoapTypeAttribute.h>
#include <Il2CppModLoader/app/types/TransparentProxy.h>
#include <Il2CppModLoader/app/types/TypeEntry.h>
#include <Il2CppModLoader/app/types/TypeInfo_1.h>
#include <Il2CppModLoader/app/types/ValueFixup.h>
#include <Il2CppModLoader/app/types/WellKnownClientTypeEntry.h>
#include <Il2CppModLoader/app/types/WellKnownServiceTypeEntry.h>
#include <Il2CppModLoader/app/types/WriteObjectInfo.h>
#include <Il2CppModLoader/app/types/WriteObjectInfo__Array.h>
#include <Il2CppModLoader/app/types/_BinaryParser.h>
#include <Il2CppModLoader/app/types/_BinaryWriter.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteObjectInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WriteObjectInfo__Class** type_info = (::app::WriteObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04794C60));
    }
    namespace SerObjectInfoCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerObjectInfoCache__Class** type_info = (::app::SerObjectInfoCache__Class**)(modloader::win::memory::resolve_rva(0x04736940));
    }
    namespace SerObjectInfoInit {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerObjectInfoInit__Class** type_info = (::app::SerObjectInfoInit__Class**)(modloader::win::memory::resolve_rva(0x0472F288));
    }
    namespace SerStack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerStack__Class** type_info = (::app::SerStack__Class**)(modloader::win::memory::resolve_rva(0x0477BB10));
    }
    namespace InternalPrimitiveTypeE__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalPrimitiveTypeE__Enum__Class** type_info = (::app::InternalPrimitiveTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475C608));
    }
    namespace ObjectWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectWriter__Class** type_info = (::app::ObjectWriter__Class**)(modloader::win::memory::resolve_rva(0x04720FC8));
    }
    namespace _BinaryWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::_BinaryWriter__Class** type_info = (::app::_BinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x04760868));
    }
    namespace BinaryMethodCall {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryMethodCall__Class** type_info = (::app::BinaryMethodCall__Class**)(modloader::win::memory::resolve_rva(0x04787058));
    }
    namespace BinaryMethodReturn {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryMethodReturn__Class** type_info = (::app::BinaryMethodReturn__Class**)(modloader::win::memory::resolve_rva(0x047282C0));
    }
    namespace BinaryObject {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObject__Class** type_info = (::app::BinaryObject__Class**)(modloader::win::memory::resolve_rva(0x0475CB90));
    }
    namespace _BinaryParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::_BinaryParser__Class** type_info = (::app::_BinaryParser__Class**)(modloader::win::memory::resolve_rva(0x0475B9A0));
    }
    namespace ObjectReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectReader__Class** type_info = (::app::ObjectReader__Class**)(modloader::win::memory::resolve_rva(0x04705740));
    }
    namespace InternalFE {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalFE__Class** type_info = (::app::InternalFE__Class**)(modloader::win::memory::resolve_rva(0x04712558));
    }
    namespace IntSizedArray {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IntSizedArray__Class** type_info = (::app::IntSizedArray__Class**)(modloader::win::memory::resolve_rva(0x0476EB68));
    }
    namespace NameCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NameCache__Class** type_info = (::app::NameCache__Class**)(modloader::win::memory::resolve_rva(0x04776730));
    }
    namespace SizedArray {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SizedArray__Class** type_info = (::app::SizedArray__Class**)(modloader::win::memory::resolve_rva(0x0472E2A8));
    }
    namespace InternalParseTypeE__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalParseTypeE__Enum__Class** type_info = (::app::InternalParseTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474C778));
    }
    namespace InternalObjectTypeE__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalObjectTypeE__Enum__Class** type_info = (::app::InternalObjectTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702FB0));
    }
    namespace InternalArrayTypeE__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalArrayTypeE__Enum__Class** type_info = (::app::InternalArrayTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x04745CF8));
    }
    namespace ParseRecord {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParseRecord__Class** type_info = (::app::ParseRecord__Class**)(modloader::win::memory::resolve_rva(0x0477BFF8));
    }
    namespace ReadObjectInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReadObjectInfo__Class** type_info = (::app::ReadObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04725D60));
    }
    namespace PrimitiveArray {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrimitiveArray__Class** type_info = (::app::PrimitiveArray__Class**)(modloader::win::memory::resolve_rva(0x047099F8));
    }
    namespace Double__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Double__Array__Class** type_info = (::app::Double__Array__Class**)(modloader::win::memory::resolve_rva(0x04732178));
    }
    namespace Single__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Single__Array__Class** type_info = (::app::Single__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BAB0));
    }
    namespace BinaryAssemblyInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryAssemblyInfo__Class** type_info = (::app::BinaryAssemblyInfo__Class**)(modloader::win::memory::resolve_rva(0x04759960));
    }
    namespace BinaryObjectWithMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObjectWithMap__Class** type_info = (::app::BinaryObjectWithMap__Class**)(modloader::win::memory::resolve_rva(0x0476D540));
    }
    namespace BinaryObjectWithMapTyped {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObjectWithMapTyped__Class** type_info = (::app::BinaryObjectWithMapTyped__Class**)(modloader::win::memory::resolve_rva(0x04786430));
    }
    namespace BinaryTypeEnum__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryTypeEnum__Enum__Array__Class** type_info = (::app::BinaryTypeEnum__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04701DD8));
    }
    namespace BinaryObjectString {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObjectString__Class** type_info = (::app::BinaryObjectString__Class**)(modloader::win::memory::resolve_rva(0x047601E8));
    }
    namespace BinaryCrossAppDomainString {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCrossAppDomainString__Class** type_info = (::app::BinaryCrossAppDomainString__Class**)(modloader::win::memory::resolve_rva(0x04757F20));
    }
    namespace MemberPrimitiveTyped {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MemberPrimitiveTyped__Class** type_info = (::app::MemberPrimitiveTyped__Class**)(modloader::win::memory::resolve_rva(0x04732180));
    }
    namespace MemberPrimitiveUnTyped {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MemberPrimitiveUnTyped__Class** type_info = (::app::MemberPrimitiveUnTyped__Class**)(modloader::win::memory::resolve_rva(0x0475CF68));
    }
    namespace MemberReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MemberReference__Class** type_info = (::app::MemberReference__Class**)(modloader::win::memory::resolve_rva(0x0470A618));
    }
    namespace ObjectNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectNull__Class** type_info = (::app::ObjectNull__Class**)(modloader::win::memory::resolve_rva(0x04714450));
    }
    namespace MessageEnd {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MessageEnd__Class** type_info = (::app::MessageEnd__Class**)(modloader::win::memory::resolve_rva(0x04725490));
    }
    namespace BinaryArrayTypeEnum__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryArrayTypeEnum__Enum__Class** type_info = (::app::BinaryArrayTypeEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x04740F78));
    }
    namespace BinaryArray {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryArray__Class** type_info = (::app::BinaryArray__Class**)(modloader::win::memory::resolve_rva(0x0473E0B0));
    }
    namespace BinaryAssembly {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryAssembly__Class** type_info = (::app::BinaryAssembly__Class**)(modloader::win::memory::resolve_rva(0x04724E98));
    }
    namespace SerializationHeaderRecord {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationHeaderRecord__Class** type_info = (::app::SerializationHeaderRecord__Class**)(modloader::win::memory::resolve_rva(0x0477C3A0));
    }
    namespace BinaryCrossAppDomainAssembly {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCrossAppDomainAssembly__Class** type_info = (::app::BinaryCrossAppDomainAssembly__Class**)(modloader::win::memory::resolve_rva(0x04783058));
    }
    namespace BinaryCrossAppDomainMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCrossAppDomainMap__Class** type_info = (::app::BinaryCrossAppDomainMap__Class**)(modloader::win::memory::resolve_rva(0x0476F098));
    }
    namespace ObjectMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectMap__Class** type_info = (::app::ObjectMap__Class**)(modloader::win::memory::resolve_rva(0x04705968));
    }
    namespace ObjectProgress {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectProgress__Class** type_info = (::app::ObjectProgress__Class**)(modloader::win::memory::resolve_rva(0x04741C20));
    }
    namespace NameInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NameInfo__Class** type_info = (::app::NameInfo__Class**)(modloader::win::memory::resolve_rva(0x04735F50));
    }
    namespace WriteObjectInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WriteObjectInfo__Array__Class** type_info = (::app::WriteObjectInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04745440));
    }
    namespace ObjectMapInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectMapInfo__Class** type_info = (::app::ObjectMapInfo__Class**)(modloader::win::memory::resolve_rva(0x0477C5F8));
    }
    namespace ObjectReader_TypeNAssembly {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectReader_TypeNAssembly__Class** type_info = (::app::ObjectReader_TypeNAssembly__Class**)(modloader::win::memory::resolve_rva(0x047751C8));
    }
    namespace ObjectReader_TopLevelAssemblyTypeResolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectReader_TopLevelAssemblyTypeResolver__Class** type_info = (::app::ObjectReader_TopLevelAssemblyTypeResolver__Class**)(modloader::win::memory::resolve_rva(0x0477AFB0));
    }
    namespace ValueFixup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ValueFixup__Class** type_info = (::app::ValueFixup__Class**)(modloader::win::memory::resolve_rva(0x047886D8));
    }
    namespace ChannelInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChannelInfo__Class** type_info = (::app::ChannelInfo__Class**)(modloader::win::memory::resolve_rva(0x04764090));
    }
    namespace TypeEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeEntry__Class** type_info = (::app::TypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047211A8));
    }
    namespace ActivatedClientTypeEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ActivatedClientTypeEntry__Class** type_info = (::app::ActivatedClientTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x04714100));
    }
    namespace ActivatedServiceTypeEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ActivatedServiceTypeEntry__Class** type_info = (::app::ActivatedServiceTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047740F0));
    }
    namespace EnvoyInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnvoyInfo__Class** type_info = (::app::EnvoyInfo__Class**)(modloader::win::memory::resolve_rva(0x04715DB0));
    }
    namespace SoapAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoapAttribute__Class** type_info = (::app::SoapAttribute__Class**)(modloader::win::memory::resolve_rva(0x04704160));
    }
    namespace WellKnownClientTypeEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WellKnownClientTypeEntry__Class** type_info = (::app::WellKnownClientTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x04733CD0));
    }
    namespace WellKnownServiceTypeEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WellKnownServiceTypeEntry__Class** type_info = (::app::WellKnownServiceTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047066D0));
    }
    namespace ChannelData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChannelData__Class** type_info = (::app::ChannelData__Class**)(modloader::win::memory::resolve_rva(0x0476DD90));
    }
    namespace ProviderData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ProviderData__Class** type_info = (::app::ProviderData__Class**)(modloader::win::memory::resolve_rva(0x0478F0A0));
    }
    namespace ConfigHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConfigHandler__Class** type_info = (::app::ConfigHandler__Class**)(modloader::win::memory::resolve_rva(0x04758408));
    }
    namespace FormatterData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FormatterData__Class** type_info = (::app::FormatterData__Class**)(modloader::win::memory::resolve_rva(0x04745260));
    }
    namespace RemotingException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingException__Class** type_info = (::app::RemotingException__Class**)(modloader::win::memory::resolve_rva(0x0472A148));
    }
    namespace RemotingProxy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingProxy__Class** type_info = (::app::RemotingProxy__Class**)(modloader::win::memory::resolve_rva(0x04781FD0));
    }
    namespace MethodCall {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCall__Class** type_info = (::app::MethodCall__Class**)(modloader::win::memory::resolve_rva(0x04773EB0));
    }
    namespace ConstructionCall {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConstructionCall__Class** type_info = (::app::ConstructionCall__Class**)(modloader::win::memory::resolve_rva(0x04780F30));
    }
    namespace RemotingServices_CACD {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingServices_CACD__Class** type_info = (::app::RemotingServices_CACD__Class**)(modloader::win::memory::resolve_rva(0x04701998));
    }
    namespace SingletonIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SingletonIdentity__Class** type_info = (::app::SingletonIdentity__Class**)(modloader::win::memory::resolve_rva(0x047695A8));
    }
    namespace SingleCallIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SingleCallIdentity__Class** type_info = (::app::SingleCallIdentity__Class**)(modloader::win::memory::resolve_rva(0x04735E30));
    }
    namespace DisposerReplySink {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DisposerReplySink__Class** type_info = (::app::DisposerReplySink__Class**)(modloader::win::memory::resolve_rva(0x047344D8));
    }
    namespace SoapServices_TypeInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoapServices_TypeInfo__Class** type_info = (::app::SoapServices_TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04778058));
    }
    namespace TypeInfo_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInfo_1__Class** type_info = (::app::TypeInfo_1__Class**)(modloader::win::memory::resolve_rva(0x04734BD0));
    }
    namespace ProxyAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ProxyAttribute__Class** type_info = (::app::ProxyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04741390));
    }
    namespace TransparentProxy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransparentProxy__Class** type_info = (::app::TransparentProxy__Class**)(modloader::win::memory::resolve_rva(0x0474E800));
    }
    namespace MonoMethodMessage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoMethodMessage__Class** type_info = (::app::MonoMethodMessage__Class**)(modloader::win::memory::resolve_rva(0x0470F938));
    }
    namespace AsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncResult__Class** type_info = (::app::AsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04710B68));
    }
    namespace MessageDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MessageDictionary__Class** type_info = (::app::MessageDictionary__Class**)(modloader::win::memory::resolve_rva(0x04797770));
    }
    namespace MCMDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MCMDictionary__Class** type_info = (::app::MCMDictionary__Class**)(modloader::win::memory::resolve_rva(0x047646E8));
    }
    namespace LeaseManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaseManager__Class** type_info = (::app::LeaseManager__Class**)(modloader::win::memory::resolve_rva(0x047463C0));
    }
    namespace LeaseSink {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaseSink__Class** type_info = (::app::LeaseSink__Class**)(modloader::win::memory::resolve_rva(0x04728A08));
    }
    namespace DynamicPropertyCollection_DynamicPropertyReg {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicPropertyCollection_DynamicPropertyReg__Class** type_info = (::app::DynamicPropertyCollection_DynamicPropertyReg__Class**)(modloader::win::memory::resolve_rva(0x0472D9C0));
    }
    namespace CrossContextChannel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrossContextChannel__Class** type_info = (::app::CrossContextChannel__Class**)(modloader::win::memory::resolve_rva(0x047116A0));
    }
    namespace CrossContextChannel_ContextRestoreSink {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrossContextChannel_ContextRestoreSink__Class** type_info = (::app::CrossContextChannel_ContextRestoreSink__Class**)(modloader::win::memory::resolve_rva(0x04781A10));
    }
    namespace ReturnMessage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReturnMessage__Class** type_info = (::app::ReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x0477A710));
    }
    namespace MethodReturnDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MethodReturnDictionary__Class** type_info = (::app::MethodReturnDictionary__Class**)(modloader::win::memory::resolve_rva(0x04717D60));
    }
    namespace ArgInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArgInfo__Class** type_info = (::app::ArgInfo__Class**)(modloader::win::memory::resolve_rva(0x047080B0));
    }
    namespace CrossAppDomainData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainData__Class** type_info = (::app::CrossAppDomainData__Class**)(modloader::win::memory::resolve_rva(0x0476A510));
    }
    namespace CrossAppDomainChannel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainChannel__Class** type_info = (::app::CrossAppDomainChannel__Class**)(modloader::win::memory::resolve_rva(0x0471DF08));
    }
    namespace CrossAppDomainSink {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainSink__Class** type_info = (::app::CrossAppDomainSink__Class**)(modloader::win::memory::resolve_rva(0x0471C368));
    }
    namespace CrossAppDomainSink_ProcessMessageRes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrossAppDomainSink_ProcessMessageRes__Class** type_info = (::app::CrossAppDomainSink_ProcessMessageRes__Class**)(modloader::win::memory::resolve_rva(0x0473A4C8));
    }
    namespace AsyncRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncRequest__Class** type_info = (::app::AsyncRequest__Class**)(modloader::win::memory::resolve_rva(0x04704FD8));
    }
    namespace SinkProviderData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SinkProviderData__Class** type_info = (::app::SinkProviderData__Class**)(modloader::win::memory::resolve_rva(0x04767C80));
    }
    namespace AppDomainLevelActivator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AppDomainLevelActivator__Class** type_info = (::app::AppDomainLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0474E7B8));
    }
    namespace ConstructionLevelActivator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConstructionLevelActivator__Class** type_info = (::app::ConstructionLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x04777D30));
    }
    namespace ContextLevelActivator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ContextLevelActivator__Class** type_info = (::app::ContextLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0478BF58));
    }
    namespace RemoteActivationAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoteActivationAttribute__Class** type_info = (::app::RemoteActivationAttribute__Class**)(modloader::win::memory::resolve_rva(0x04743CF8));
    }
    namespace SoapFieldAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoapFieldAttribute__Class** type_info = (::app::SoapFieldAttribute__Class**)(modloader::win::memory::resolve_rva(0x047522D0));
    }
    namespace SoapMethodAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoapMethodAttribute__Class** type_info = (::app::SoapMethodAttribute__Class**)(modloader::win::memory::resolve_rva(0x047050C0));
    }
    namespace SoapParameterAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoapParameterAttribute__Class** type_info = (::app::SoapParameterAttribute__Class**)(modloader::win::memory::resolve_rva(0x04799680));
    }
    namespace SoapTypeAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoapTypeAttribute__Class** type_info = (::app::SoapTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x04738588));
    }
    namespace CADObjRef {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CADObjRef__Class** type_info = (::app::CADObjRef__Class**)(modloader::win::memory::resolve_rva(0x0471CF58));
    }
} // namespace app::classes::types
