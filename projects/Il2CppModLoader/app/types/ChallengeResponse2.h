#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChallengeResponse2 {
        inline app::ChallengeResponse2__Class** type_info = (app::ChallengeResponse2__Class**)(modloader::win::memory::resolve_rva(0x0471BCD0));
        inline app::ChallengeResponse2__Class* get_class() {
            return il2cpp::get_class<app::ChallengeResponse2__Class>(type_info, "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
        }
        inline app::ChallengeResponse2* create() {
            return il2cpp::create_object<app::ChallengeResponse2>(get_class());
        }
    } // namespace ChallengeResponse2
} // namespace app::classes::types
