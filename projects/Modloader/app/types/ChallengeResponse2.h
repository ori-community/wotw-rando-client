#pragma once
#include <Modloader/app/structs/ChallengeResponse2.h>
#include <Modloader/app/structs/ChallengeResponse2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeResponse2 {
        inline app::ChallengeResponse2__Class** type_info() {
            static app::ChallengeResponse2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChallengeResponse2__Class**)(modloader::win::memory::resolve_rva(0x0471BCD0));
            }
            return cache;
        }
        inline app::ChallengeResponse2__Class* get_class() {
            return il2cpp::get_class<app::ChallengeResponse2__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
        }
        inline app::ChallengeResponse2* create() {
            return il2cpp::create_object<app::ChallengeResponse2>(get_class());
        }
    } // namespace ChallengeResponse2
} // namespace app::classes::types
