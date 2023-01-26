#pragma once
#include <Modloader/app/structs/ChallengeResponse.h>
#include <Modloader/app/structs/ChallengeResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeResponse {
        inline app::ChallengeResponse__Class** type_info() {
            static app::ChallengeResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChallengeResponse__Class**)(modloader::win::memory::resolve_rva(0x04775B98));
            }
            return cache;
        }
        inline app::ChallengeResponse__Class* get_class() {
            return il2cpp::get_class<app::ChallengeResponse__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "ChallengeResponse");
        }
        inline app::ChallengeResponse* create() {
            return il2cpp::create_object<app::ChallengeResponse>(get_class());
        }
    } // namespace ChallengeResponse
} // namespace app::classes::types
