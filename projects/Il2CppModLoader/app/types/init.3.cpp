#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/SmallXmlParser_IContentHandler.h>
#include <Il2CppModLoader/app/types/TextReader.h>
#include <Il2CppModLoader/app/types/Stack.h>
#include <Il2CppModLoader/app/types/StringBuilder.h>
#include <Il2CppModLoader/app/types/SmallXmlParser_AttrListImpl.h>
#include <Il2CppModLoader/app/types/SecurityElement.h>
#include <Il2CppModLoader/app/types/ArrayList.h>
#include <Il2CppModLoader/app/types/SmallXmlParser_IAttrList.h>
#include <Il2CppModLoader/app/types/SmallXmlParserException.h>
#include <Il2CppModLoader/app/types/TailoringInfo.h>
#include <Il2CppModLoader/app/types/ContractionComparer.h>
#include <Il2CppModLoader/app/types/MSCompatUnicodeTable_c.h>
#include <Il2CppModLoader/app/types/SortKeyBuffer.h>
#include <Il2CppModLoader/app/types/ASN1.h>
#include <Il2CppModLoader/app/types/PKCS7_ContentInfo.h>
#include <Il2CppModLoader/app/types/PKCS7_EncryptedData.h>
#include <Il2CppModLoader/app/types/SafeBag.h>
#include <Il2CppModLoader/app/types/PKCS12.h>
#include <Il2CppModLoader/app/types/X509CertificateCollection.h>
#include <Il2CppModLoader/app/types/CipherMode__Enum.h>
#include <Il2CppModLoader/app/types/PaddingMode__Enum.h>
#include <Il2CppModLoader/app/types/SymmetricAlgorithm.h>
#include <Il2CppModLoader/app/types/KeySizes.h>
#include <Il2CppModLoader/app/types/KeySizes__Array.h>
#include <Il2CppModLoader/app/types/ICryptoTransform.h>
#include <Il2CppModLoader/app/types/RC4.h>
#include <Il2CppModLoader/app/types/ARC4Managed.h>
#include <Il2CppModLoader/app/types/PKCS8_PrivateKeyInfo.h>
#include <Il2CppModLoader/app/types/X509Certificate.h>
#include <Il2CppModLoader/app/types/AsymmetricAlgorithm.h>
#include <Il2CppModLoader/app/types/RSA.h>
#include <Il2CppModLoader/app/types/RSAEncryptionPaddingMode__Enum.h>
#include <Il2CppModLoader/app/types/HashAlgorithmName.h>
#include <Il2CppModLoader/app/types/RSAEncryptionPadding.h>
#include <Il2CppModLoader/app/types/RSASignaturePaddingMode__Enum.h>
#include <Il2CppModLoader/app/types/RSASignaturePadding.h>
#include <Il2CppModLoader/app/types/RSAManaged.h>
#include <Il2CppModLoader/app/types/BigInteger.h>
#include <Il2CppModLoader/app/types/RSAManaged_KeyGeneratedEventHandler.h>
#include <Il2CppModLoader/app/types/DSA.h>
#include <Il2CppModLoader/app/types/DSAManaged.h>
#include <Il2CppModLoader/app/types/DSAManaged_KeyGeneratedEventHandler.h>
#include <Il2CppModLoader/app/types/X509ExtensionCollection.h>
#include <Il2CppModLoader/app/types/PKCS12_DeriveBytes.h>
#include <Il2CppModLoader/app/types/X509CertificateCollection_X509CertificateEnumerator.h>
#include <Il2CppModLoader/app/types/X509Extension.h>
#include <Il2CppModLoader/app/types/KeyPairPersistence.h>
#include <Il2CppModLoader/app/types/CspParameters.h>
#include <Il2CppModLoader/app/types/SecureString.h>
#include <Il2CppModLoader/app/types/HashAlgorithm.h>
#include <Il2CppModLoader/app/types/MD2Managed.h>
#include <Il2CppModLoader/app/types/MD4Managed.h>
#include <Il2CppModLoader/app/types/PKCS8_EncryptedPrivateKeyInfo.h>
#include <Il2CppModLoader/app/types/DESTransform.h>
#include <Il2CppModLoader/app/types/BigInteger_ModulusRing.h>
#include <Il2CppModLoader/app/types/BigInteger__Array.h>
#include <Il2CppModLoader/app/types/PrimalityTest.h>
#include <Il2CppModLoader/app/types/ConfidenceFactor__Enum.h>
#include <Il2CppModLoader/app/types/SequentialSearchPrimeGeneratorBase.h>
#include <Il2CppModLoader/app/types/UnsafeNativeMethods_ManifestEtw_EtwEnableCallback.h>
#include <Il2CppModLoader/app/types/EventDescriptor.h>
#include <Il2CppModLoader/app/types/RegistryKey.h>
#include <Il2CppModLoader/app/types/SafeRegistryHandle.h>
#include <Il2CppModLoader/app/types/IRegistryApi.h>
#include <Il2CppModLoader/app/types/RegistryHive__Enum.h>
#include <Il2CppModLoader/app/types/IOException.h>
#include <Il2CppModLoader/app/types/ExpandString.h>
#include <Il2CppModLoader/app/types/RegistryKeyComparer.h>
#include <Il2CppModLoader/app/types/KeyHandler.h>
#include <Il2CppModLoader/app/types/UnixRegistryApi.h>
#include <Il2CppModLoader/app/types/Int64__Array.h>
#include <Il2CppModLoader/app/types/Win32RegistryApi.h>
#include <Il2CppModLoader/app/types/Win32Native_WIN32_FIND_DATA.h>
#include <Il2CppModLoader/app/types/SafeFindHandle.h>
#include <Il2CppModLoader/app/types/ExceptionArgument__Enum.h>
#include <Il2CppModLoader/app/types/ValueTuple.h>
#include <Il2CppModLoader/app/types/Array_ArrayEnumerator.h>
#include <Il2CppModLoader/app/types/FormattableStringFactory_ConcreteFormattableString.h>
#include <Il2CppModLoader/app/types/_Filters.h>
#include <Il2CppModLoader/app/types/LocalDataStoreHolder.h>
#include <Il2CppModLoader/app/types/LocalDataStore.h>
#include <Il2CppModLoader/app/types/LocalDataStoreElement.h>
#include <Il2CppModLoader/app/types/LocalDataStoreElement__Array.h>
#include <Il2CppModLoader/app/types/LocalDataStoreMgr.h>
#include <Il2CppModLoader/app/types/LocalDataStoreSlot.h>
#include <Il2CppModLoader/app/types/Action.h>
#include <Il2CppModLoader/app/types/AppDomainUnloadedException.h>
#include <Il2CppModLoader/app/types/ApplicationException.h>
#include <Il2CppModLoader/app/types/ArgumentException.h>
#include <Il2CppModLoader/app/types/ArgumentNullException.h>
#include <Il2CppModLoader/app/types/ArgumentOutOfRangeException.h>
#include <Il2CppModLoader/app/types/ArithmeticException.h>
#include <Il2CppModLoader/app/types/ArrayTypeMismatchException.h>
#include <Il2CppModLoader/app/types/Attribute__Array.h>
#include <Il2CppModLoader/app/types/AttributeUsageAttribute.h>
#include <Il2CppModLoader/app/types/BadImageFormatException.h>
#include <Il2CppModLoader/app/types/CharEnumerator.h>
#include <Il2CppModLoader/app/types/ConsoleCancelEventHandler.h>
#include <Il2CppModLoader/app/types/ConsoleCancelEventArgs.h>
#include <Il2CppModLoader/app/types/ConsoleKeyInfo.h>

namespace app::classes::types {
    namespace SmallXmlParser_IContentHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::SmallXmlParser_IContentHandler__Class** type_info = (::app::SmallXmlParser_IContentHandler__Class**)(modloader::win::memory::resolve_rva(0x04765040)); }
    namespace TextReader { IL2CPP_MODLOADER_DLLEXPORT ::app::TextReader__Class** type_info = (::app::TextReader__Class**)(modloader::win::memory::resolve_rva(0x04765720)); }
    namespace Stack { IL2CPP_MODLOADER_DLLEXPORT ::app::Stack__Class** type_info = (::app::Stack__Class**)(modloader::win::memory::resolve_rva(0x047622B8)); }
    namespace StringBuilder { IL2CPP_MODLOADER_DLLEXPORT ::app::StringBuilder__Class** type_info = (::app::StringBuilder__Class**)(modloader::win::memory::resolve_rva(0x04713A70)); }
    namespace SmallXmlParser_AttrListImpl { IL2CPP_MODLOADER_DLLEXPORT ::app::SmallXmlParser_AttrListImpl__Class** type_info = (::app::SmallXmlParser_AttrListImpl__Class**)(modloader::win::memory::resolve_rva(0x0474D098)); }
    namespace SecurityElement { IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityElement__Class** type_info = (::app::SecurityElement__Class**)(modloader::win::memory::resolve_rva(0x047225F0)); }
    namespace ArrayList { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayList__Class** type_info = (::app::ArrayList__Class**)(modloader::win::memory::resolve_rva(0x0472C508)); }
    namespace SmallXmlParser_IAttrList { IL2CPP_MODLOADER_DLLEXPORT ::app::SmallXmlParser_IAttrList__Class** type_info = (::app::SmallXmlParser_IAttrList__Class**)(modloader::win::memory::resolve_rva(0x04707FA8)); }
    namespace SmallXmlParserException { IL2CPP_MODLOADER_DLLEXPORT ::app::SmallXmlParserException__Class** type_info = (::app::SmallXmlParserException__Class**)(modloader::win::memory::resolve_rva(0x0470F008)); }
    namespace TailoringInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::TailoringInfo__Class** type_info = (::app::TailoringInfo__Class**)(modloader::win::memory::resolve_rva(0x0474A7C0)); }
    namespace ContractionComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::ContractionComparer__Class** type_info = (::app::ContractionComparer__Class**)(modloader::win::memory::resolve_rva(0x0476D478)); }
    namespace MSCompatUnicodeTable_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MSCompatUnicodeTable_c__Class** type_info = (::app::MSCompatUnicodeTable_c__Class**)(modloader::win::memory::resolve_rva(0x0475B928)); }
    namespace SortKeyBuffer { IL2CPP_MODLOADER_DLLEXPORT ::app::SortKeyBuffer__Class** type_info = (::app::SortKeyBuffer__Class**)(modloader::win::memory::resolve_rva(0x04708468)); }
    namespace ASN1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ASN1__Class** type_info = (::app::ASN1__Class**)(modloader::win::memory::resolve_rva(0x04744EA0)); }
    namespace PKCS7_ContentInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS7_ContentInfo__Class** type_info = (::app::PKCS7_ContentInfo__Class**)(modloader::win::memory::resolve_rva(0x04714C68)); }
    namespace PKCS7_EncryptedData { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS7_EncryptedData__Class** type_info = (::app::PKCS7_EncryptedData__Class**)(modloader::win::memory::resolve_rva(0x04748FC0)); }
    namespace SafeBag { IL2CPP_MODLOADER_DLLEXPORT ::app::SafeBag__Class** type_info = (::app::SafeBag__Class**)(modloader::win::memory::resolve_rva(0x04780DA0)); }
    namespace PKCS12 { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS12__Class** type_info = (::app::PKCS12__Class**)(modloader::win::memory::resolve_rva(0x04757F28)); }
    namespace X509CertificateCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::X509CertificateCollection__Class** type_info = (::app::X509CertificateCollection__Class**)(modloader::win::memory::resolve_rva(0x047229A0)); }
    namespace CipherMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::CipherMode__Enum__Class** type_info = (::app::CipherMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04771898)); }
    namespace PaddingMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::PaddingMode__Enum__Class** type_info = (::app::PaddingMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04733E78)); }
    namespace SymmetricAlgorithm { IL2CPP_MODLOADER_DLLEXPORT ::app::SymmetricAlgorithm__Class** type_info = (::app::SymmetricAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04722ED0)); }
    namespace KeySizes { IL2CPP_MODLOADER_DLLEXPORT ::app::KeySizes__Class** type_info = (::app::KeySizes__Class**)(modloader::win::memory::resolve_rva(0x047627D0)); }
    namespace KeySizes__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::KeySizes__Array__Class** type_info = (::app::KeySizes__Array__Class**)(modloader::win::memory::resolve_rva(0x0471A638)); }
    namespace ICryptoTransform { IL2CPP_MODLOADER_DLLEXPORT ::app::ICryptoTransform__Class** type_info = (::app::ICryptoTransform__Class**)(modloader::win::memory::resolve_rva(0x0476FA58)); }
    namespace RC4 { IL2CPP_MODLOADER_DLLEXPORT ::app::RC4__Class** type_info = (::app::RC4__Class**)(modloader::win::memory::resolve_rva(0x04741500)); }
    namespace ARC4Managed { IL2CPP_MODLOADER_DLLEXPORT ::app::ARC4Managed__Class** type_info = (::app::ARC4Managed__Class**)(modloader::win::memory::resolve_rva(0x04733378)); }
    namespace PKCS8_PrivateKeyInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS8_PrivateKeyInfo__Class** type_info = (::app::PKCS8_PrivateKeyInfo__Class**)(modloader::win::memory::resolve_rva(0x0474AA30)); }
    namespace X509Certificate { IL2CPP_MODLOADER_DLLEXPORT ::app::X509Certificate__Class** type_info = (::app::X509Certificate__Class**)(modloader::win::memory::resolve_rva(0x04741780)); }
    namespace AsymmetricAlgorithm { IL2CPP_MODLOADER_DLLEXPORT ::app::AsymmetricAlgorithm__Class** type_info = (::app::AsymmetricAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04739EA8)); }
    namespace RSA { IL2CPP_MODLOADER_DLLEXPORT ::app::RSA__Class** type_info = (::app::RSA__Class**)(modloader::win::memory::resolve_rva(0x0470CE80)); }
    namespace RSAEncryptionPaddingMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAEncryptionPaddingMode__Enum__Class** type_info = (::app::RSAEncryptionPaddingMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047989B8)); }
    namespace HashAlgorithmName { IL2CPP_MODLOADER_DLLEXPORT ::app::HashAlgorithmName__Class** type_info = (::app::HashAlgorithmName__Class**)(modloader::win::memory::resolve_rva(0x047774E8)); }
    namespace RSAEncryptionPadding { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAEncryptionPadding__Class** type_info = (::app::RSAEncryptionPadding__Class**)(modloader::win::memory::resolve_rva(0x0476D2A0)); }
    namespace RSASignaturePaddingMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RSASignaturePaddingMode__Enum__Class** type_info = (::app::RSASignaturePaddingMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04757D60)); }
    namespace RSASignaturePadding { IL2CPP_MODLOADER_DLLEXPORT ::app::RSASignaturePadding__Class** type_info = (::app::RSASignaturePadding__Class**)(modloader::win::memory::resolve_rva(0x04765E40)); }
    namespace RSAManaged { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAManaged__Class** type_info = (::app::RSAManaged__Class**)(modloader::win::memory::resolve_rva(0x04750278)); }
    namespace BigInteger { IL2CPP_MODLOADER_DLLEXPORT ::app::BigInteger__Class** type_info = (::app::BigInteger__Class**)(modloader::win::memory::resolve_rva(0x0476C788)); }
    namespace RSAManaged_KeyGeneratedEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::RSAManaged_KeyGeneratedEventHandler__Class** type_info = (::app::RSAManaged_KeyGeneratedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04709ED0)); }
    namespace DSA { IL2CPP_MODLOADER_DLLEXPORT ::app::DSA__Class** type_info = (::app::DSA__Class**)(modloader::win::memory::resolve_rva(0x04762E10)); }
    namespace DSAManaged { IL2CPP_MODLOADER_DLLEXPORT ::app::DSAManaged__Class** type_info = (::app::DSAManaged__Class**)(modloader::win::memory::resolve_rva(0x04736AB0)); }
    namespace DSAManaged_KeyGeneratedEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::DSAManaged_KeyGeneratedEventHandler__Class** type_info = (::app::DSAManaged_KeyGeneratedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04707928)); }
    namespace X509ExtensionCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::X509ExtensionCollection__Class** type_info = (::app::X509ExtensionCollection__Class**)(modloader::win::memory::resolve_rva(0x0470ADB0)); }
    namespace PKCS12_DeriveBytes { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS12_DeriveBytes__Class** type_info = (::app::PKCS12_DeriveBytes__Class**)(modloader::win::memory::resolve_rva(0x04776A70)); }
    namespace X509CertificateCollection_X509CertificateEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::X509CertificateCollection_X509CertificateEnumerator__Class** type_info = (::app::X509CertificateCollection_X509CertificateEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04787078)); }
    namespace X509Extension { IL2CPP_MODLOADER_DLLEXPORT ::app::X509Extension__Class** type_info = (::app::X509Extension__Class**)(modloader::win::memory::resolve_rva(0x04744498)); }
    namespace KeyPairPersistence { IL2CPP_MODLOADER_DLLEXPORT ::app::KeyPairPersistence__Class** type_info = (::app::KeyPairPersistence__Class**)(modloader::win::memory::resolve_rva(0x04712B18)); }
    namespace CspParameters { IL2CPP_MODLOADER_DLLEXPORT ::app::CspParameters__Class** type_info = (::app::CspParameters__Class**)(modloader::win::memory::resolve_rva(0x04761E80)); }
    namespace SecureString { IL2CPP_MODLOADER_DLLEXPORT ::app::SecureString__Class** type_info = (::app::SecureString__Class**)(modloader::win::memory::resolve_rva(0x047726D0)); }
    namespace HashAlgorithm { IL2CPP_MODLOADER_DLLEXPORT ::app::HashAlgorithm__Class** type_info = (::app::HashAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04787CC0)); }
    namespace MD2Managed { IL2CPP_MODLOADER_DLLEXPORT ::app::MD2Managed__Class** type_info = (::app::MD2Managed__Class**)(modloader::win::memory::resolve_rva(0x0477CD50)); }
    namespace MD4Managed { IL2CPP_MODLOADER_DLLEXPORT ::app::MD4Managed__Class** type_info = (::app::MD4Managed__Class**)(modloader::win::memory::resolve_rva(0x0478FEE8)); }
    namespace PKCS8_EncryptedPrivateKeyInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS8_EncryptedPrivateKeyInfo__Class** type_info = (::app::PKCS8_EncryptedPrivateKeyInfo__Class**)(modloader::win::memory::resolve_rva(0x04794488)); }
    namespace DESTransform { IL2CPP_MODLOADER_DLLEXPORT ::app::DESTransform__Class** type_info = (::app::DESTransform__Class**)(modloader::win::memory::resolve_rva(0x04739EB0)); }
    namespace BigInteger_ModulusRing { IL2CPP_MODLOADER_DLLEXPORT ::app::BigInteger_ModulusRing__Class** type_info = (::app::BigInteger_ModulusRing__Class**)(modloader::win::memory::resolve_rva(0x04753778)); }
    namespace BigInteger__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::BigInteger__Array__Class** type_info = (::app::BigInteger__Array__Class**)(modloader::win::memory::resolve_rva(0x047947A8)); }
    namespace PrimalityTest { IL2CPP_MODLOADER_DLLEXPORT ::app::PrimalityTest__Class** type_info = (::app::PrimalityTest__Class**)(modloader::win::memory::resolve_rva(0x04745CF0)); }
    namespace ConfidenceFactor__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ConfidenceFactor__Enum__Class** type_info = (::app::ConfidenceFactor__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BA60)); }
    namespace SequentialSearchPrimeGeneratorBase { IL2CPP_MODLOADER_DLLEXPORT ::app::SequentialSearchPrimeGeneratorBase__Class** type_info = (::app::SequentialSearchPrimeGeneratorBase__Class**)(modloader::win::memory::resolve_rva(0x04708130)); }
    namespace UnsafeNativeMethods_ManifestEtw_EtwEnableCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class** type_info = (::app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class**)(modloader::win::memory::resolve_rva(0x04785000)); }
    namespace EventDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::EventDescriptor__Class** type_info = (::app::EventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477EC08)); }
    namespace RegistryKey { IL2CPP_MODLOADER_DLLEXPORT ::app::RegistryKey__Class** type_info = (::app::RegistryKey__Class**)(modloader::win::memory::resolve_rva(0x047816D0)); }
    namespace SafeRegistryHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::SafeRegistryHandle__Class** type_info = (::app::SafeRegistryHandle__Class**)(modloader::win::memory::resolve_rva(0x0477B898)); }
    namespace IRegistryApi { IL2CPP_MODLOADER_DLLEXPORT ::app::IRegistryApi__Class** type_info = (::app::IRegistryApi__Class**)(modloader::win::memory::resolve_rva(0x0472FC00)); }
    namespace RegistryHive__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RegistryHive__Enum__Class** type_info = (::app::RegistryHive__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763230)); }
    namespace IOException { IL2CPP_MODLOADER_DLLEXPORT ::app::IOException__Class** type_info = (::app::IOException__Class**)(modloader::win::memory::resolve_rva(0x04709900)); }
    namespace ExpandString { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandString__Class** type_info = (::app::ExpandString__Class**)(modloader::win::memory::resolve_rva(0x04769CB8)); }
    namespace RegistryKeyComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::RegistryKeyComparer__Class** type_info = (::app::RegistryKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x0470FDD0)); }
    namespace KeyHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::KeyHandler__Class** type_info = (::app::KeyHandler__Class**)(modloader::win::memory::resolve_rva(0x04704E38)); }
    namespace UnixRegistryApi { IL2CPP_MODLOADER_DLLEXPORT ::app::UnixRegistryApi__Class** type_info = (::app::UnixRegistryApi__Class**)(modloader::win::memory::resolve_rva(0x04703BD0)); }
    namespace Int64__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Int64__Array__Class** type_info = (::app::Int64__Array__Class**)(modloader::win::memory::resolve_rva(0x047337F0)); }
    namespace Win32RegistryApi { IL2CPP_MODLOADER_DLLEXPORT ::app::Win32RegistryApi__Class** type_info = (::app::Win32RegistryApi__Class**)(modloader::win::memory::resolve_rva(0x04784918)); }
    namespace Win32Native_WIN32_FIND_DATA { IL2CPP_MODLOADER_DLLEXPORT ::app::Win32Native_WIN32_FIND_DATA__Class** type_info = (::app::Win32Native_WIN32_FIND_DATA__Class**)(modloader::win::memory::resolve_rva(0x04791798)); }
    namespace SafeFindHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::SafeFindHandle__Class** type_info = (::app::SafeFindHandle__Class**)(modloader::win::memory::resolve_rva(0x047711F8)); }
    namespace ExceptionArgument__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionArgument__Enum__Class** type_info = (::app::ExceptionArgument__Enum__Class**)(modloader::win::memory::resolve_rva(0x04749808)); }
    namespace ValueTuple { IL2CPP_MODLOADER_DLLEXPORT ::app::ValueTuple__Class** type_info = (::app::ValueTuple__Class**)(modloader::win::memory::resolve_rva(0x04730288)); }
    namespace Array_ArrayEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::Array_ArrayEnumerator__Class** type_info = (::app::Array_ArrayEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04757018)); }
    namespace FormattableStringFactory_ConcreteFormattableString { IL2CPP_MODLOADER_DLLEXPORT ::app::FormattableStringFactory_ConcreteFormattableString__Class** type_info = (::app::FormattableStringFactory_ConcreteFormattableString__Class**)(modloader::win::memory::resolve_rva(0x04791410)); }
    namespace _Filters { IL2CPP_MODLOADER_DLLEXPORT ::app::_Filters__Class** type_info = (::app::_Filters__Class**)(modloader::win::memory::resolve_rva(0x04774760)); }
    namespace LocalDataStoreHolder { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDataStoreHolder__Class** type_info = (::app::LocalDataStoreHolder__Class**)(modloader::win::memory::resolve_rva(0x0477CCB8)); }
    namespace LocalDataStore { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDataStore__Class** type_info = (::app::LocalDataStore__Class**)(modloader::win::memory::resolve_rva(0x04775E58)); }
    namespace LocalDataStoreElement { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDataStoreElement__Class** type_info = (::app::LocalDataStoreElement__Class**)(modloader::win::memory::resolve_rva(0x047922B0)); }
    namespace LocalDataStoreElement__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDataStoreElement__Array__Class** type_info = (::app::LocalDataStoreElement__Array__Class**)(modloader::win::memory::resolve_rva(0x04775DA8)); }
    namespace LocalDataStoreMgr { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDataStoreMgr__Class** type_info = (::app::LocalDataStoreMgr__Class**)(modloader::win::memory::resolve_rva(0x04776588)); }
    namespace LocalDataStoreSlot { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDataStoreSlot__Class** type_info = (::app::LocalDataStoreSlot__Class**)(modloader::win::memory::resolve_rva(0x0473B600)); }
    namespace Action { IL2CPP_MODLOADER_DLLEXPORT ::app::Action__Class** type_info = (::app::Action__Class**)(modloader::win::memory::resolve_rva(0x0471A150)); }
    namespace AppDomainUnloadedException { IL2CPP_MODLOADER_DLLEXPORT ::app::AppDomainUnloadedException__Class** type_info = (::app::AppDomainUnloadedException__Class**)(modloader::win::memory::resolve_rva(0x04765190)); }
    namespace ApplicationException { IL2CPP_MODLOADER_DLLEXPORT ::app::ApplicationException__Class** type_info = (::app::ApplicationException__Class**)(modloader::win::memory::resolve_rva(0x04725460)); }
    namespace ArgumentException { IL2CPP_MODLOADER_DLLEXPORT ::app::ArgumentException__Class** type_info = (::app::ArgumentException__Class**)(modloader::win::memory::resolve_rva(0x04749B38)); }
    namespace ArgumentNullException { IL2CPP_MODLOADER_DLLEXPORT ::app::ArgumentNullException__Class** type_info = (::app::ArgumentNullException__Class**)(modloader::win::memory::resolve_rva(0x0477E0A8)); }
    namespace ArgumentOutOfRangeException { IL2CPP_MODLOADER_DLLEXPORT ::app::ArgumentOutOfRangeException__Class** type_info = (::app::ArgumentOutOfRangeException__Class**)(modloader::win::memory::resolve_rva(0x047918E0)); }
    namespace ArithmeticException { IL2CPP_MODLOADER_DLLEXPORT ::app::ArithmeticException__Class** type_info = (::app::ArithmeticException__Class**)(modloader::win::memory::resolve_rva(0x047114A8)); }
    namespace ArrayTypeMismatchException { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayTypeMismatchException__Class** type_info = (::app::ArrayTypeMismatchException__Class**)(modloader::win::memory::resolve_rva(0x04702608)); }
    namespace Attribute__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Attribute__Array__Class** type_info = (::app::Attribute__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A240)); }
    namespace AttributeUsageAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::AttributeUsageAttribute__Class** type_info = (::app::AttributeUsageAttribute__Class**)(modloader::win::memory::resolve_rva(0x04771AC0)); }
    namespace BadImageFormatException { IL2CPP_MODLOADER_DLLEXPORT ::app::BadImageFormatException__Class** type_info = (::app::BadImageFormatException__Class**)(modloader::win::memory::resolve_rva(0x04757828)); }
    namespace CharEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::CharEnumerator__Class** type_info = (::app::CharEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475E600)); }
    namespace ConsoleCancelEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ConsoleCancelEventHandler__Class** type_info = (::app::ConsoleCancelEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04743B00)); }
    namespace ConsoleCancelEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::ConsoleCancelEventArgs__Class** type_info = (::app::ConsoleCancelEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476C328)); }
    namespace ConsoleKeyInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::ConsoleKeyInfo__Class** type_info = (::app::ConsoleKeyInfo__Class**)(modloader::win::memory::resolve_rva(0x04735400)); }
}
