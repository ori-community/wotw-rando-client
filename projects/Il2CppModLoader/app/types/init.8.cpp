#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/RSAPKCS1SHA384SignatureDescription.h>
#include <Il2CppModLoader/app/types/RSAPKCS1SHA512SignatureDescription.h>
#include <Il2CppModLoader/app/types/DSASignatureDescription.h>
#include <Il2CppModLoader/app/types/DSACryptoServiceProvider.h>
#include <Il2CppModLoader/app/types/RC2Transform.h>
#include <Il2CppModLoader/app/types/UInt16__Array.h>
#include <Il2CppModLoader/app/types/RSAPKCS1SignatureDeformatter.h>
#include <Il2CppModLoader/app/types/RSAPKCS1SignatureFormatter.h>
#include <Il2CppModLoader/app/types/SHA1Internal.h>
#include <Il2CppModLoader/app/types/SHA1CryptoServiceProvider.h>
#include <Il2CppModLoader/app/types/TripleDESTransform.h>
#include <Il2CppModLoader/app/types/X509Certificate_1.h>
#include <Il2CppModLoader/app/types/X509CertificateImpl.h>
#include <Il2CppModLoader/app/types/X509CertificateImplMono.h>
#include <Il2CppModLoader/app/types/INativeCertificateHelper.h>
#include <Il2CppModLoader/app/types/DeserializationEventHandler.h>
#include <Il2CppModLoader/app/types/SerializationEventHandler.h>
#include <Il2CppModLoader/app/types/FormatterConverter.h>
#include <Il2CppModLoader/app/types/FormatterServices_c_DisplayClass9_0.h>
#include <Il2CppModLoader/app/types/MemberHolder.h>
#include <Il2CppModLoader/app/types/ISerializationSurrogate.h>
#include <Il2CppModLoader/app/types/ObjectIDGenerator.h>
#include <Il2CppModLoader/app/types/ObjectManager.h>
#include <Il2CppModLoader/app/types/ObjectHolder.h>
#include <Il2CppModLoader/app/types/FixupHolderList.h>
#include <Il2CppModLoader/app/types/FixupHolder.h>
#include <Il2CppModLoader/app/types/FixupHolder__Array.h>
#include <Il2CppModLoader/app/types/LongList.h>
#include <Il2CppModLoader/app/types/ValueTypeFixupInfo.h>
#include <Il2CppModLoader/app/types/TypeLoadExceptionHolder.h>
#include <Il2CppModLoader/app/types/ObjectHolder__Array.h>
#include <Il2CppModLoader/app/types/ObjectHolderList.h>
#include <Il2CppModLoader/app/types/ObjectHolderListEnumerator.h>
#include <Il2CppModLoader/app/types/SerializationEvents.h>
#include <Il2CppModLoader/app/types/SerializationException.h>
#include <Il2CppModLoader/app/types/SerializationFieldInfo.h>
#include <Il2CppModLoader/app/types/SerializationInfoEnumerator.h>
#include <Il2CppModLoader/app/types/SerializationEntry.h>
#include <Il2CppModLoader/app/types/SerializationObjectManager.h>
#include <Il2CppModLoader/app/types/BinaryTypeEnum__Enum.h>
#include <Il2CppModLoader/app/types/WriteObjectInfo.h>
#include <Il2CppModLoader/app/types/SerObjectInfoCache.h>
#include <Il2CppModLoader/app/types/SerObjectInfoInit.h>
#include <Il2CppModLoader/app/types/SerStack.h>
#include <Il2CppModLoader/app/types/InternalPrimitiveTypeE__Enum.h>
#include <Il2CppModLoader/app/types/ObjectWriter.h>
#include <Il2CppModLoader/app/types/_BinaryWriter.h>
#include <Il2CppModLoader/app/types/BinaryMethodCall.h>
#include <Il2CppModLoader/app/types/BinaryMethodReturn.h>
#include <Il2CppModLoader/app/types/BinaryObject.h>
#include <Il2CppModLoader/app/types/_BinaryParser.h>
#include <Il2CppModLoader/app/types/ObjectReader.h>
#include <Il2CppModLoader/app/types/InternalFE.h>
#include <Il2CppModLoader/app/types/IntSizedArray.h>
#include <Il2CppModLoader/app/types/NameCache.h>
#include <Il2CppModLoader/app/types/SizedArray.h>
#include <Il2CppModLoader/app/types/InternalParseTypeE__Enum.h>
#include <Il2CppModLoader/app/types/InternalObjectTypeE__Enum.h>
#include <Il2CppModLoader/app/types/InternalArrayTypeE__Enum.h>
#include <Il2CppModLoader/app/types/ParseRecord.h>
#include <Il2CppModLoader/app/types/ReadObjectInfo.h>
#include <Il2CppModLoader/app/types/PrimitiveArray.h>
#include <Il2CppModLoader/app/types/Double__Array.h>
#include <Il2CppModLoader/app/types/Single__Array.h>
#include <Il2CppModLoader/app/types/BinaryAssemblyInfo.h>
#include <Il2CppModLoader/app/types/BinaryObjectWithMap.h>
#include <Il2CppModLoader/app/types/BinaryObjectWithMapTyped.h>
#include <Il2CppModLoader/app/types/BinaryTypeEnum__Enum__Array.h>
#include <Il2CppModLoader/app/types/BinaryObjectString.h>
#include <Il2CppModLoader/app/types/BinaryCrossAppDomainString.h>
#include <Il2CppModLoader/app/types/MemberPrimitiveTyped.h>
#include <Il2CppModLoader/app/types/MemberPrimitiveUnTyped.h>
#include <Il2CppModLoader/app/types/MemberReference.h>
#include <Il2CppModLoader/app/types/ObjectNull.h>
#include <Il2CppModLoader/app/types/MessageEnd.h>
#include <Il2CppModLoader/app/types/BinaryArrayTypeEnum__Enum.h>
#include <Il2CppModLoader/app/types/BinaryArray.h>
#include <Il2CppModLoader/app/types/BinaryAssembly.h>
#include <Il2CppModLoader/app/types/SerializationHeaderRecord.h>
#include <Il2CppModLoader/app/types/BinaryCrossAppDomainAssembly.h>
#include <Il2CppModLoader/app/types/BinaryCrossAppDomainMap.h>
#include <Il2CppModLoader/app/types/ObjectMap.h>
#include <Il2CppModLoader/app/types/ObjectProgress.h>
#include <Il2CppModLoader/app/types/NameInfo.h>
#include <Il2CppModLoader/app/types/WriteObjectInfo__Array.h>
#include <Il2CppModLoader/app/types/ObjectMapInfo.h>
#include <Il2CppModLoader/app/types/ObjectReader_TypeNAssembly.h>
#include <Il2CppModLoader/app/types/ObjectReader_TopLevelAssemblyTypeResolver.h>
#include <Il2CppModLoader/app/types/ValueFixup.h>
#include <Il2CppModLoader/app/types/ChannelInfo.h>
#include <Il2CppModLoader/app/types/TypeEntry.h>
#include <Il2CppModLoader/app/types/ActivatedClientTypeEntry.h>
#include <Il2CppModLoader/app/types/IContextAttribute.h>
#include <Il2CppModLoader/app/types/ActivatedServiceTypeEntry.h>
#include <Il2CppModLoader/app/types/EnvoyInfo.h>
#include <Il2CppModLoader/app/types/SoapAttribute.h>
#include <Il2CppModLoader/app/types/WellKnownClientTypeEntry.h>
#include <Il2CppModLoader/app/types/WellKnownServiceTypeEntry.h>
#include <Il2CppModLoader/app/types/ChannelData.h>
#include <Il2CppModLoader/app/types/ProviderData.h>

namespace app::classes::types {
    namespace RSAPKCS1SHA384SignatureDescription { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1SHA384SignatureDescription__Class** type_info = (::app::RSAPKCS1SHA384SignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x04767318)); }
    namespace RSAPKCS1SHA512SignatureDescription { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1SHA512SignatureDescription__Class** type_info = (::app::RSAPKCS1SHA512SignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x04715718)); }
    namespace DSASignatureDescription { IL2CPP_MODLOADER_DLLEXPORT ::app::DSASignatureDescription__Class** type_info = (::app::DSASignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x047818E0)); }
    namespace DSACryptoServiceProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::DSACryptoServiceProvider__Class** type_info = (::app::DSACryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x047117D0)); }
    namespace RC2Transform { IL2CPP_MODLOADER_DLLEXPORT ::app::RC2Transform__Class** type_info = (::app::RC2Transform__Class**)(modloader::win::memory::resolve_rva(0x047821D8)); }
    namespace UInt16__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::UInt16__Array__Class** type_info = (::app::UInt16__Array__Class**)(modloader::win::memory::resolve_rva(0x0478D768)); }
    namespace RSAPKCS1SignatureDeformatter { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1SignatureDeformatter__Class** type_info = (::app::RSAPKCS1SignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04795938)); }
    namespace RSAPKCS1SignatureFormatter { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1SignatureFormatter__Class** type_info = (::app::RSAPKCS1SignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04727490)); }
    namespace SHA1Internal { IL2CPP_MODLOADER_DLLEXPORT ::app::SHA1Internal__Class** type_info = (::app::SHA1Internal__Class**)(modloader::win::memory::resolve_rva(0x0474EE70)); }
    namespace SHA1CryptoServiceProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::SHA1CryptoServiceProvider__Class** type_info = (::app::SHA1CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0470A918)); }
    namespace TripleDESTransform { IL2CPP_MODLOADER_DLLEXPORT ::app::TripleDESTransform__Class** type_info = (::app::TripleDESTransform__Class**)(modloader::win::memory::resolve_rva(0x047969E8)); }
    namespace X509Certificate_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::X509Certificate_1__Class** type_info = (::app::X509Certificate_1__Class**)(modloader::win::memory::resolve_rva(0x0472CCD0)); }
    namespace X509CertificateImpl { IL2CPP_MODLOADER_DLLEXPORT ::app::X509CertificateImpl__Class** type_info = (::app::X509CertificateImpl__Class**)(modloader::win::memory::resolve_rva(0x0478E458)); }
    namespace X509CertificateImplMono { IL2CPP_MODLOADER_DLLEXPORT ::app::X509CertificateImplMono__Class** type_info = (::app::X509CertificateImplMono__Class**)(modloader::win::memory::resolve_rva(0x04749760)); }
    namespace INativeCertificateHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::INativeCertificateHelper__Class** type_info = (::app::INativeCertificateHelper__Class**)(modloader::win::memory::resolve_rva(0x0475DE48)); }
    namespace DeserializationEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::DeserializationEventHandler__Class** type_info = (::app::DeserializationEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047172E0)); }
    namespace SerializationEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationEventHandler__Class** type_info = (::app::SerializationEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0476D258)); }
    namespace FormatterConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::FormatterConverter__Class** type_info = (::app::FormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x0477C3A8)); }
    namespace FormatterServices_c_DisplayClass9_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::FormatterServices_c_DisplayClass9_0__Class** type_info = (::app::FormatterServices_c_DisplayClass9_0__Class**)(modloader::win::memory::resolve_rva(0x04719AD0)); }
    namespace MemberHolder { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberHolder__Class** type_info = (::app::MemberHolder__Class**)(modloader::win::memory::resolve_rva(0x04782D60)); }
    namespace ISerializationSurrogate { IL2CPP_MODLOADER_DLLEXPORT ::app::ISerializationSurrogate__Class** type_info = (::app::ISerializationSurrogate__Class**)(modloader::win::memory::resolve_rva(0x0470F130)); }
    namespace ObjectIDGenerator { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectIDGenerator__Class** type_info = (::app::ObjectIDGenerator__Class**)(modloader::win::memory::resolve_rva(0x047497A8)); }
    namespace ObjectManager { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectManager__Class** type_info = (::app::ObjectManager__Class**)(modloader::win::memory::resolve_rva(0x0470D628)); }
    namespace ObjectHolder { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectHolder__Class** type_info = (::app::ObjectHolder__Class**)(modloader::win::memory::resolve_rva(0x0478E500)); }
    namespace FixupHolderList { IL2CPP_MODLOADER_DLLEXPORT ::app::FixupHolderList__Class** type_info = (::app::FixupHolderList__Class**)(modloader::win::memory::resolve_rva(0x047909E8)); }
    namespace FixupHolder { IL2CPP_MODLOADER_DLLEXPORT ::app::FixupHolder__Class** type_info = (::app::FixupHolder__Class**)(modloader::win::memory::resolve_rva(0x0475A968)); }
    namespace FixupHolder__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FixupHolder__Array__Class** type_info = (::app::FixupHolder__Array__Class**)(modloader::win::memory::resolve_rva(0x0478F2A8)); }
    namespace LongList { IL2CPP_MODLOADER_DLLEXPORT ::app::LongList__Class** type_info = (::app::LongList__Class**)(modloader::win::memory::resolve_rva(0x04762240)); }
    namespace ValueTypeFixupInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::ValueTypeFixupInfo__Class** type_info = (::app::ValueTypeFixupInfo__Class**)(modloader::win::memory::resolve_rva(0x047573D8)); }
    namespace TypeLoadExceptionHolder { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeLoadExceptionHolder__Class** type_info = (::app::TypeLoadExceptionHolder__Class**)(modloader::win::memory::resolve_rva(0x04756368)); }
    namespace ObjectHolder__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectHolder__Array__Class** type_info = (::app::ObjectHolder__Array__Class**)(modloader::win::memory::resolve_rva(0x0472BB20)); }
    namespace ObjectHolderList { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectHolderList__Class** type_info = (::app::ObjectHolderList__Class**)(modloader::win::memory::resolve_rva(0x04721788)); }
    namespace ObjectHolderListEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectHolderListEnumerator__Class** type_info = (::app::ObjectHolderListEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472B898)); }
    namespace SerializationEvents { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationEvents__Class** type_info = (::app::SerializationEvents__Class**)(modloader::win::memory::resolve_rva(0x0477D9F8)); }
    namespace SerializationException { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationException__Class** type_info = (::app::SerializationException__Class**)(modloader::win::memory::resolve_rva(0x0472B620)); }
    namespace SerializationFieldInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationFieldInfo__Class** type_info = (::app::SerializationFieldInfo__Class**)(modloader::win::memory::resolve_rva(0x047483E0)); }
    namespace SerializationInfoEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationInfoEnumerator__Class** type_info = (::app::SerializationInfoEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04743A70)); }
    namespace SerializationEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationEntry__Class** type_info = (::app::SerializationEntry__Class**)(modloader::win::memory::resolve_rva(0x0474ECE0)); }
    namespace SerializationObjectManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationObjectManager__Class** type_info = (::app::SerializationObjectManager__Class**)(modloader::win::memory::resolve_rva(0x04790858)); }
    namespace BinaryTypeEnum__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryTypeEnum__Enum__Class** type_info = (::app::BinaryTypeEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x047597C8)); }
    namespace WriteObjectInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::WriteObjectInfo__Class** type_info = (::app::WriteObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04794C60)); }
    namespace SerObjectInfoCache { IL2CPP_MODLOADER_DLLEXPORT ::app::SerObjectInfoCache__Class** type_info = (::app::SerObjectInfoCache__Class**)(modloader::win::memory::resolve_rva(0x04736940)); }
    namespace SerObjectInfoInit { IL2CPP_MODLOADER_DLLEXPORT ::app::SerObjectInfoInit__Class** type_info = (::app::SerObjectInfoInit__Class**)(modloader::win::memory::resolve_rva(0x0472F288)); }
    namespace SerStack { IL2CPP_MODLOADER_DLLEXPORT ::app::SerStack__Class** type_info = (::app::SerStack__Class**)(modloader::win::memory::resolve_rva(0x0477BB10)); }
    namespace InternalPrimitiveTypeE__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalPrimitiveTypeE__Enum__Class** type_info = (::app::InternalPrimitiveTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475C608)); }
    namespace ObjectWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectWriter__Class** type_info = (::app::ObjectWriter__Class**)(modloader::win::memory::resolve_rva(0x04720FC8)); }
    namespace _BinaryWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::_BinaryWriter__Class** type_info = (::app::_BinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x04760868)); }
    namespace BinaryMethodCall { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryMethodCall__Class** type_info = (::app::BinaryMethodCall__Class**)(modloader::win::memory::resolve_rva(0x04787058)); }
    namespace BinaryMethodReturn { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryMethodReturn__Class** type_info = (::app::BinaryMethodReturn__Class**)(modloader::win::memory::resolve_rva(0x047282C0)); }
    namespace BinaryObject { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObject__Class** type_info = (::app::BinaryObject__Class**)(modloader::win::memory::resolve_rva(0x0475CB90)); }
    namespace _BinaryParser { IL2CPP_MODLOADER_DLLEXPORT ::app::_BinaryParser__Class** type_info = (::app::_BinaryParser__Class**)(modloader::win::memory::resolve_rva(0x0475B9A0)); }
    namespace ObjectReader { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectReader__Class** type_info = (::app::ObjectReader__Class**)(modloader::win::memory::resolve_rva(0x04705740)); }
    namespace InternalFE { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalFE__Class** type_info = (::app::InternalFE__Class**)(modloader::win::memory::resolve_rva(0x04712558)); }
    namespace IntSizedArray { IL2CPP_MODLOADER_DLLEXPORT ::app::IntSizedArray__Class** type_info = (::app::IntSizedArray__Class**)(modloader::win::memory::resolve_rva(0x0476EB68)); }
    namespace NameCache { IL2CPP_MODLOADER_DLLEXPORT ::app::NameCache__Class** type_info = (::app::NameCache__Class**)(modloader::win::memory::resolve_rva(0x04776730)); }
    namespace SizedArray { IL2CPP_MODLOADER_DLLEXPORT ::app::SizedArray__Class** type_info = (::app::SizedArray__Class**)(modloader::win::memory::resolve_rva(0x0472E2A8)); }
    namespace InternalParseTypeE__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalParseTypeE__Enum__Class** type_info = (::app::InternalParseTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474C778)); }
    namespace InternalObjectTypeE__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalObjectTypeE__Enum__Class** type_info = (::app::InternalObjectTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702FB0)); }
    namespace InternalArrayTypeE__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalArrayTypeE__Enum__Class** type_info = (::app::InternalArrayTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x04745CF8)); }
    namespace ParseRecord { IL2CPP_MODLOADER_DLLEXPORT ::app::ParseRecord__Class** type_info = (::app::ParseRecord__Class**)(modloader::win::memory::resolve_rva(0x0477BFF8)); }
    namespace ReadObjectInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::ReadObjectInfo__Class** type_info = (::app::ReadObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04725D60)); }
    namespace PrimitiveArray { IL2CPP_MODLOADER_DLLEXPORT ::app::PrimitiveArray__Class** type_info = (::app::PrimitiveArray__Class**)(modloader::win::memory::resolve_rva(0x047099F8)); }
    namespace Double__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Double__Array__Class** type_info = (::app::Double__Array__Class**)(modloader::win::memory::resolve_rva(0x04732178)); }
    namespace Single__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Single__Array__Class** type_info = (::app::Single__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BAB0)); }
    namespace BinaryAssemblyInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryAssemblyInfo__Class** type_info = (::app::BinaryAssemblyInfo__Class**)(modloader::win::memory::resolve_rva(0x04759960)); }
    namespace BinaryObjectWithMap { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObjectWithMap__Class** type_info = (::app::BinaryObjectWithMap__Class**)(modloader::win::memory::resolve_rva(0x0476D540)); }
    namespace BinaryObjectWithMapTyped { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObjectWithMapTyped__Class** type_info = (::app::BinaryObjectWithMapTyped__Class**)(modloader::win::memory::resolve_rva(0x04786430)); }
    namespace BinaryTypeEnum__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryTypeEnum__Enum__Array__Class** type_info = (::app::BinaryTypeEnum__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04701DD8)); }
    namespace BinaryObjectString { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryObjectString__Class** type_info = (::app::BinaryObjectString__Class**)(modloader::win::memory::resolve_rva(0x047601E8)); }
    namespace BinaryCrossAppDomainString { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCrossAppDomainString__Class** type_info = (::app::BinaryCrossAppDomainString__Class**)(modloader::win::memory::resolve_rva(0x04757F20)); }
    namespace MemberPrimitiveTyped { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberPrimitiveTyped__Class** type_info = (::app::MemberPrimitiveTyped__Class**)(modloader::win::memory::resolve_rva(0x04732180)); }
    namespace MemberPrimitiveUnTyped { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberPrimitiveUnTyped__Class** type_info = (::app::MemberPrimitiveUnTyped__Class**)(modloader::win::memory::resolve_rva(0x0475CF68)); }
    namespace MemberReference { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberReference__Class** type_info = (::app::MemberReference__Class**)(modloader::win::memory::resolve_rva(0x0470A618)); }
    namespace ObjectNull { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectNull__Class** type_info = (::app::ObjectNull__Class**)(modloader::win::memory::resolve_rva(0x04714450)); }
    namespace MessageEnd { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageEnd__Class** type_info = (::app::MessageEnd__Class**)(modloader::win::memory::resolve_rva(0x04725490)); }
    namespace BinaryArrayTypeEnum__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryArrayTypeEnum__Enum__Class** type_info = (::app::BinaryArrayTypeEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x04740F78)); }
    namespace BinaryArray { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryArray__Class** type_info = (::app::BinaryArray__Class**)(modloader::win::memory::resolve_rva(0x0473E0B0)); }
    namespace BinaryAssembly { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryAssembly__Class** type_info = (::app::BinaryAssembly__Class**)(modloader::win::memory::resolve_rva(0x04724E98)); }
    namespace SerializationHeaderRecord { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationHeaderRecord__Class** type_info = (::app::SerializationHeaderRecord__Class**)(modloader::win::memory::resolve_rva(0x0477C3A0)); }
    namespace BinaryCrossAppDomainAssembly { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCrossAppDomainAssembly__Class** type_info = (::app::BinaryCrossAppDomainAssembly__Class**)(modloader::win::memory::resolve_rva(0x04783058)); }
    namespace BinaryCrossAppDomainMap { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCrossAppDomainMap__Class** type_info = (::app::BinaryCrossAppDomainMap__Class**)(modloader::win::memory::resolve_rva(0x0476F098)); }
    namespace ObjectMap { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectMap__Class** type_info = (::app::ObjectMap__Class**)(modloader::win::memory::resolve_rva(0x04705968)); }
    namespace ObjectProgress { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectProgress__Class** type_info = (::app::ObjectProgress__Class**)(modloader::win::memory::resolve_rva(0x04741C20)); }
    namespace NameInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::NameInfo__Class** type_info = (::app::NameInfo__Class**)(modloader::win::memory::resolve_rva(0x04735F50)); }
    namespace WriteObjectInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::WriteObjectInfo__Array__Class** type_info = (::app::WriteObjectInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04745440)); }
    namespace ObjectMapInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectMapInfo__Class** type_info = (::app::ObjectMapInfo__Class**)(modloader::win::memory::resolve_rva(0x0477C5F8)); }
    namespace ObjectReader_TypeNAssembly { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectReader_TypeNAssembly__Class** type_info = (::app::ObjectReader_TypeNAssembly__Class**)(modloader::win::memory::resolve_rva(0x047751C8)); }
    namespace ObjectReader_TopLevelAssemblyTypeResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectReader_TopLevelAssemblyTypeResolver__Class** type_info = (::app::ObjectReader_TopLevelAssemblyTypeResolver__Class**)(modloader::win::memory::resolve_rva(0x0477AFB0)); }
    namespace ValueFixup { IL2CPP_MODLOADER_DLLEXPORT ::app::ValueFixup__Class** type_info = (::app::ValueFixup__Class**)(modloader::win::memory::resolve_rva(0x047886D8)); }
    namespace ChannelInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::ChannelInfo__Class** type_info = (::app::ChannelInfo__Class**)(modloader::win::memory::resolve_rva(0x04764090)); }
    namespace TypeEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeEntry__Class** type_info = (::app::TypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047211A8)); }
    namespace ActivatedClientTypeEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::ActivatedClientTypeEntry__Class** type_info = (::app::ActivatedClientTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x04714100)); }
    namespace IContextAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::IContextAttribute__Class** type_info = (::app::IContextAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472F8C0)); }
    namespace ActivatedServiceTypeEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::ActivatedServiceTypeEntry__Class** type_info = (::app::ActivatedServiceTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047740F0)); }
    namespace EnvoyInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::EnvoyInfo__Class** type_info = (::app::EnvoyInfo__Class**)(modloader::win::memory::resolve_rva(0x04715DB0)); }
    namespace SoapAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::SoapAttribute__Class** type_info = (::app::SoapAttribute__Class**)(modloader::win::memory::resolve_rva(0x04704160)); }
    namespace WellKnownClientTypeEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::WellKnownClientTypeEntry__Class** type_info = (::app::WellKnownClientTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x04733CD0)); }
    namespace WellKnownServiceTypeEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::WellKnownServiceTypeEntry__Class** type_info = (::app::WellKnownServiceTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047066D0)); }
    namespace ChannelData { IL2CPP_MODLOADER_DLLEXPORT ::app::ChannelData__Class** type_info = (::app::ChannelData__Class**)(modloader::win::memory::resolve_rva(0x0476DD90)); }
    namespace ProviderData { IL2CPP_MODLOADER_DLLEXPORT ::app::ProviderData__Class** type_info = (::app::ProviderData__Class**)(modloader::win::memory::resolve_rva(0x0478F0A0)); }
}
