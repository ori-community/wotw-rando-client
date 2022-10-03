#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Ntlm::ChallengeResponse2 {
    IL2CPP_REGISTER_METHOD(0x02A497B0, app::Byte__Array*, Compute_LM, (app::String * password, app::Byte__Array* challenge))
    IL2CPP_REGISTER_METHOD(0x02A49AD0, app::Byte__Array*, Compute_NTLM_Password, (app::String * password))
    IL2CPP_REGISTER_METHOD(0x02A49C30, app::Byte__Array*, Compute_NTLM, (app::String * password, app::Byte__Array* challenge))
    IL2CPP_REGISTER_METHOD(0x02A49CF0, void, Compute_NTLMv2_Session, (app::String * password, app::Byte__Array* challenge, app::Byte__Array** lm, app::Byte__Array** ntlm))
    IL2CPP_REGISTER_METHOD(0x02A49F30, app::Byte__Array*, Compute_NTLMv2, (app::Type2Message * type2, app::String* username, app::String* password, app::String* domain))
    IL2CPP_REGISTER_METHOD(0x02A4A5B0, void, Compute, (app::Type2Message * type2, app::NtlmAuthLevel__Enum level, app::String* username, app::String* password, app::String* domain, app::Byte__Array** lm, app::Byte__Array** ntlm))
    IL2CPP_REGISTER_METHODINFO(0x04787428, ChallengeResponse2_Compute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A4A840, app::Byte__Array*, GetResponse, (app::Byte__Array * challenge, app::Byte__Array* pwd))
    IL2CPP_REGISTER_METHOD(0x02A4AAA0, app::Byte__Array*, PrepareDESKey, (app::Byte__Array * key56bits, int32_t position))
    IL2CPP_REGISTER_METHOD(0x02A4AE80, app::Byte__Array*, PasswordToKey, (app::String * password, int32_t position))
    IL2CPP_REGISTER_METHOD(0x02A4B050, void, cctor, ())
} // namespace app::classes::Mono::Security::Protocol::Ntlm::ChallengeResponse2
