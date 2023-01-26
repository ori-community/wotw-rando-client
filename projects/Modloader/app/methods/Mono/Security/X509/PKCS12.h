#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PKCS12.h>
#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DSAParameters.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PKCS12_1.h>
#include <Modloader/app/structs/PKCS7_ContentInfo.h>
#include <Modloader/app/structs/PKCS7_ContentInfo_1.h>
#include <Modloader/app/structs/PKCS7_EncryptedData.h>
#include <Modloader/app/structs/PKCS7_EncryptedData_1.h>
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo.h>
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo_1.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#include <Modloader/app/structs/X509Certificate.h>
#include <Modloader/app/structs/X509CertificateCollection.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#include <Modloader/app/structs/X509Certificate_2.h>

namespace app::classes::Mono::Security::X509::PKCS12 {
    IL2CPP_REGISTER_METHOD(0x025DAA00, void, ctor_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DADB0, void, ctor_2, (app::PKCS12 * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x025DAE70, void, ctor_3, (app::PKCS12 * this_ptr, app::Byte__Array* data, app::String* password))
    IL2CPP_REGISTER_METHOD(0x025DAEC0, void, Decode_1, (app::PKCS12 * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x025DBC40, void, Finalize_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DBCE0, void, set_Password_1, (app::PKCS12 * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_IterationCount_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_IterationCount_1, (app::PKCS12 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x025DBE80, app::ArrayList*, get_Keys_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DC770, app::X509CertificateCollection*, get_Certificates_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DCCB0, app::RandomNumberGenerator*, get_RNG_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DCCE0, bool, Compare_1, (app::PKCS12 * this_ptr, app::Byte__Array* expected, app::Byte__Array* actual))
    IL2CPP_REGISTER_METHOD(0x025DCD70, app::SymmetricAlgorithm*, GetSymmetricAlgorithm_1, (app::PKCS12 * this_ptr, app::String* algorithm_oid, app::Byte__Array* salt, int32_t iteration_count))
    IL2CPP_REGISTER_METHOD(0x025DD700, app::Byte__Array*, Decrypt_1, (app::PKCS12 * this_ptr, app::String* algorithm_oid, app::Byte__Array* salt, int32_t iteration_count, app::Byte__Array* encrypted_data))
    IL2CPP_REGISTER_METHOD(0x025DD8A0, app::Byte__Array*, Decrypt_2, (app::PKCS12 * this_ptr, app::PKCS7_EncryptedData* ed))
    IL2CPP_REGISTER_METHOD(0x025DDAC0, app::Byte__Array*, Encrypt_1, (app::PKCS12 * this_ptr, app::String* algorithm_oid, app::Byte__Array* salt, int32_t iteration_count, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x025DDC60, app::DSAParameters, GetExistingParameters_1, (app::PKCS12 * this_ptr, bool* found))
    IL2CPP_REGISTER_METHOD(0x025DDEF0, void, AddPrivateKey_1, (app::PKCS12 * this_ptr, app::PKCS8_PrivateKeyInfo* pki))
    IL2CPP_REGISTER_METHOD(0x025DE0D0, void, ReadSafeBag_1, (app::PKCS12 * this_ptr, app::ASN1* safe_bag))
    IL2CPP_REGISTER_METHOD(0x025DED50, app::ASN1*, CertificateSafeBag_1, (app::PKCS12 * this_ptr, app::X509Certificate* x509, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x025DFC80, app::Byte__Array*, MAC_1, (app::PKCS12 * this_ptr, app::Byte__Array* password, app::Byte__Array* salt, int32_t iterations, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x025DFF50, app::Byte__Array*, GetBytes_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E2A30, app::PKCS7_ContentInfo*, EncryptedContentInfo_1, (app::PKCS12 * this_ptr, app::ASN1* safe_bags, app::String* algorithm_oid))
    IL2CPP_REGISTER_METHOD(0x025E3320, void, AddCertificate_1, (app::PKCS12 * this_ptr, app::X509Certificate* cert))
    IL2CPP_REGISTER_METHOD(0x025E3330, void, AddCertificate_2, (app::PKCS12 * this_ptr, app::X509Certificate* cert, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x025E38A0, void, RemoveCertificate_1, (app::PKCS12 * this_ptr, app::X509Certificate* cert))
    IL2CPP_REGISTER_METHOD(0x025E38B0, void, RemoveCertificate_2, (app::PKCS12 * this_ptr, app::X509Certificate* cert, app::IDictionary* attrs))
    IL2CPP_REGISTER_METHOD(0x025E3F40, app::Object*, Clone_1, (app::PKCS12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E41E0, int32_t, get_MaximumPasswordLength_1, ())
    IL2CPP_REGISTER_METHOD(0x025E4280, void, cctor_1, ())
    IL2CPP_REGISTER_METHOD(0x02923130, void, ctor_4, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029234E0, void, ctor_5, (app::PKCS12_1 * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x029235A0, void, ctor_6, (app::PKCS12_1 * this_ptr, app::Byte__Array* data, app::String* password))
    IL2CPP_REGISTER_METHOD(0x029235F0, void, ctor_7, (app::PKCS12_1 * this_ptr, app::Byte__Array* data, app::Byte__Array* password))
    IL2CPP_REGISTER_METHOD(0x02923630, void, Decode_2, (app::PKCS12_1 * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x029243B0, void, Finalize_2, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02924450, void, set_Password_2, (app::PKCS12_1 * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_IterationCount_2, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_IterationCount_2, (app::PKCS12_1 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x029245F0, app::ArrayList*, get_Keys_2, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02924EF0, app::ArrayList*, get_Secrets, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02925220, app::X509CertificateCollection_2*, get_Certificates_2, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DCCB0, app::RandomNumberGenerator*, get_RNG_2, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DCCE0, bool, Compare_2, (app::PKCS12_1 * this_ptr, app::Byte__Array* expected, app::Byte__Array* actual))
    IL2CPP_REGISTER_METHOD(0x02925760, app::SymmetricAlgorithm*, GetSymmetricAlgorithm_2, (app::PKCS12_1 * this_ptr, app::String* algorithm_oid, app::Byte__Array* salt, int32_t iteration_count))
    IL2CPP_REGISTER_METHOD(0x02926020, app::Byte__Array*, Decrypt_3, (app::PKCS12_1 * this_ptr, app::String* algorithm_oid, app::Byte__Array* salt, int32_t iteration_count, app::Byte__Array* encrypted_data))
    IL2CPP_REGISTER_METHOD(0x029261C0, app::Byte__Array*, Decrypt_4, (app::PKCS12_1 * this_ptr, app::PKCS7_EncryptedData_1* ed))
    IL2CPP_REGISTER_METHOD(0x029263E0, app::Byte__Array*, Encrypt_2, (app::PKCS12_1 * this_ptr, app::String* algorithm_oid, app::Byte__Array* salt, int32_t iteration_count, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x02926580, app::DSAParameters, GetExistingParameters_2, (app::PKCS12_1 * this_ptr, bool* found))
    IL2CPP_REGISTER_METHOD(0x02926810, void, AddPrivateKey_2, (app::PKCS12_1 * this_ptr, app::PKCS8_PrivateKeyInfo_1* pki))
    IL2CPP_REGISTER_METHOD(0x029269F0, void, ReadSafeBag_2, (app::PKCS12_1 * this_ptr, app::ASN1_1* safe_bag))
    IL2CPP_REGISTER_METHOD(0x02927680, app::ASN1_1*, Pkcs8ShroudedKeyBagSafeBag, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x02928990, app::ASN1_1*, KeyBagSafeBag, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x02929A00, app::ASN1_1*, SecretBagSafeBag, (app::PKCS12_1 * this_ptr, app::Byte__Array* secret, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x0292A720, app::ASN1_1*, CertificateSafeBag_2, (app::PKCS12_1 * this_ptr, app::X509Certificate_2* x509, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x0292B650, app::Byte__Array*, MAC_2, (app::PKCS12_1 * this_ptr, app::Byte__Array* password, app::Byte__Array* salt, int32_t iterations, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x0292B920, app::Byte__Array*, GetBytes_2, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0292E400, app::PKCS7_ContentInfo_1*, EncryptedContentInfo_2, (app::PKCS12_1 * this_ptr, app::ASN1_1* safe_bags, app::String* algorithm_oid))
    IL2CPP_REGISTER_METHOD(0x0292ECF0, void, AddCertificate_3, (app::PKCS12_1 * this_ptr, app::X509Certificate_2* cert))
    IL2CPP_REGISTER_METHOD(0x0292ED00, void, AddCertificate_4, (app::PKCS12_1 * this_ptr, app::X509Certificate_2* cert, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x0292F270, void, RemoveCertificate_3, (app::PKCS12_1 * this_ptr, app::X509Certificate_2* cert))
    IL2CPP_REGISTER_METHOD(0x0292F280, void, RemoveCertificate_4, (app::PKCS12_1 * this_ptr, app::X509Certificate_2* cert, app::IDictionary* attrs))
    IL2CPP_REGISTER_METHOD(0x0292F910, bool, CompareAsymmetricAlgorithm, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* a1, app::AsymmetricAlgorithm* a2))
    IL2CPP_REGISTER_METHOD(0x0292FA00, void, AddPkcs8ShroudedKeyBag_1, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa))
    IL2CPP_REGISTER_METHOD(0x0292FA10, void, AddPkcs8ShroudedKeyBag_2, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x02930040, void, RemovePkcs8ShroudedKeyBag, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa))
    IL2CPP_REGISTER_METHOD(0x02930570, void, AddKeyBag_1, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa))
    IL2CPP_REGISTER_METHOD(0x02930580, void, AddKeyBag_2, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x02930A40, void, RemoveKeyBag, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa))
    IL2CPP_REGISTER_METHOD(0x02930E10, void, AddSecretBag_1, (app::PKCS12_1 * this_ptr, app::Byte__Array* secret))
    IL2CPP_REGISTER_METHOD(0x02930E20, void, AddSecretBag_2, (app::PKCS12_1 * this_ptr, app::Byte__Array* secret, app::IDictionary* attributes))
    IL2CPP_REGISTER_METHOD(0x02931160, void, RemoveSecretBag, (app::PKCS12_1 * this_ptr, app::Byte__Array* secret))
    IL2CPP_REGISTER_METHOD(0x02931360, app::AsymmetricAlgorithm*, GetAsymmetricAlgorithm, (app::PKCS12_1 * this_ptr, app::IDictionary* attrs))
    IL2CPP_REGISTER_METHOD(0x02931DF0, app::Byte__Array*, GetSecret, (app::PKCS12_1 * this_ptr, app::IDictionary* attrs))
    IL2CPP_REGISTER_METHOD(0x02932320, app::X509Certificate_2*, GetCertificate, (app::PKCS12_1 * this_ptr, app::IDictionary* attrs))
    IL2CPP_REGISTER_METHOD(0x02932A30, app::IDictionary*, GetAttributes_1, (app::PKCS12_1 * this_ptr, app::AsymmetricAlgorithm* aa))
    IL2CPP_REGISTER_METHOD(0x029335B0, app::IDictionary*, GetAttributes_2, (app::PKCS12_1 * this_ptr, app::X509Certificate_2* cert))
    IL2CPP_REGISTER_METHOD(0x02933D90, void, SaveToFile, (app::PKCS12_1 * this_ptr, app::String* filename))
    IL2CPP_REGISTER_METHOD(0x02933F20, app::Object*, Clone_2, (app::PKCS12_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029341C0, int32_t, get_MaximumPasswordLength_2, ())
    IL2CPP_REGISTER_METHOD(0x02934260, void, set_MaximumPasswordLength, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x029343B0, app::Byte__Array*, LoadFile, (app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02934550, app::PKCS12_1*, LoadFromFile_1, (app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02934700, app::PKCS12_1*, LoadFromFile_2, (app::String * filename, app::String* password))
    IL2CPP_REGISTER_METHOD(0x029348D0, void, cctor_2, ())
} // namespace app::classes::Mono::Security::X509::PKCS12
