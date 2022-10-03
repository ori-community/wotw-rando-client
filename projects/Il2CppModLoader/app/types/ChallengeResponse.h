#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChallengeResponse__Class** type_info;
        inline app::ChallengeResponse__Class* get_class() {
            return il2cpp::get_class<app::ChallengeResponse__Class>(type_info, "Mono.Security.Protocol.Ntlm", "ChallengeResponse");
        }
        inline app::ChallengeResponse* create() {
            return il2cpp::create_object<app::ChallengeResponse>(get_class());
        }
    } // namespace ChallengeResponse
} // namespace app::classes::types
