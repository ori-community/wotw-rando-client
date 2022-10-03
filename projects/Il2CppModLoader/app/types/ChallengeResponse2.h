#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeResponse2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChallengeResponse2__Class** type_info;
        inline app::ChallengeResponse2__Class* get_class() {
            return il2cpp::get_class<app::ChallengeResponse2__Class>(type_info, "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
        }
        inline app::ChallengeResponse2* create() {
            return il2cpp::create_object<app::ChallengeResponse2>(get_class());
        }
    } // namespace ChallengeResponse2
} // namespace app::classes::types
