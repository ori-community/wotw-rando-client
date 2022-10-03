#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineManager_ChallengeWave__Array {
        namespace {
            app::ChallengeShrineManager_ChallengeWave__Array__Class* type_info_ref = nullptr;
        }
        app::ChallengeShrineManager_ChallengeWave__Array__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineManager_ChallengeWave__Array__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineManager_ChallengeWave__Array__Class>(type_info, "", "ChallengeShrineManager+ChallengeWave[]");
        }
        inline app::ChallengeShrineManager_ChallengeWave__Array* create() {
            return il2cpp::create_object<app::ChallengeShrineManager_ChallengeWave__Array>(get_class());
        }
    } // namespace ChallengeShrineManager_ChallengeWave__Array
} // namespace app::classes::types
