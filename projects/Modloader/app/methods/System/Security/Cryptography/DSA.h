#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DSA.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::DSA {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DSA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D3E80, app::DSA*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020D3FD0, app::DSA*, Create_2, (app::String * alg_name))
    IL2CPP_REGISTER_METHOD(0x020D40B0, app::Byte__Array*, HashData_1, (app::DSA * this_ptr, app::Byte__Array* data, int32_t offset, int32_t count, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D40F0, app::Byte__Array*, HashData_2, (app::DSA * this_ptr, app::Stream* data, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D4130, app::Byte__Array*, SignData_1, (app::DSA * this_ptr, app::Byte__Array* data, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D4220, app::Byte__Array*, SignData_2, (app::DSA * this_ptr, app::Byte__Array* data, int32_t offset, int32_t count, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D43E0, app::Byte__Array*, SignData_3, (app::DSA * this_ptr, app::Stream* data, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D44F0, bool, VerifyData_1, (app::DSA * this_ptr, app::Byte__Array* data, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D45F0, bool, VerifyData_2, (app::DSA * this_ptr, app::Byte__Array* data, int32_t offset, int32_t count, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D4800, bool, VerifyData_3, (app::DSA * this_ptr, app::Stream* data, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x020D4970, void, FromXmlString, (app::DSA * this_ptr, app::String* xml_string))
    IL2CPP_REGISTER_METHOD(0x020D5350, app::String*, ToXmlString, (app::DSA * this_ptr, bool include_private_parameters))
    IL2CPP_REGISTER_METHOD(0x020D5790, app::Exception*, DerivedClassMustOverride, ())
    IL2CPP_REGISTER_METHOD(0x020D58F0, app::Exception*, HashAlgorithmNameNullOrEmpty, ())
} // namespace app::classes::System::Security::Cryptography::DSA
