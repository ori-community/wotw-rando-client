#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BossRaceHandler_ChallengeFailedFade_d_15 {
        inline app::BossRaceHandler_ChallengeFailedFade_d_15__Class** type_info = (app::BossRaceHandler_ChallengeFailedFade_d_15__Class**)(modloader::win::memory::resolve_rva(0x0473D6D0));
        inline app::BossRaceHandler_ChallengeFailedFade_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::BossRaceHandler_ChallengeFailedFade_d_15__Class>(type_info, "", "BossRaceHandler", "<ChallengeFailedFade>d__15");
        }
        inline app::BossRaceHandler_ChallengeFailedFade_d_15* create() {
            return il2cpp::create_object<app::BossRaceHandler_ChallengeFailedFade_d_15>(get_class());
        }
    } // namespace BossRaceHandler_ChallengeFailedFade_d_15
} // namespace app::classes::types
