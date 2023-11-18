#pragma once
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave__Array.h>
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineManager_ChallengeWave__Array {
        inline app::ChallengeShrineManager_ChallengeWave__Array__Class** type_info() {
            static app::ChallengeShrineManager_ChallengeWave__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChallengeShrineManager_ChallengeWave__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChallengeShrineManager_ChallengeWave__Array__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineManager_ChallengeWave__Array__Class>(type_info(), "", "ChallengeShrineManager+ChallengeWave[]");
        }
        inline app::ChallengeShrineManager_ChallengeWave__Array* create() {
            return il2cpp::create_object<app::ChallengeShrineManager_ChallengeWave__Array>(get_class());
        }
    } // namespace ChallengeShrineManager_ChallengeWave__Array
} // namespace app::classes::types
