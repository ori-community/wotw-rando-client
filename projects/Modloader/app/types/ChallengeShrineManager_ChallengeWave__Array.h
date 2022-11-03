#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChallengeShrineManager_ChallengeWave__Array {
        namespace {
            inline app::ChallengeShrineManager_ChallengeWave__Array__Class* type_info_ref = nullptr;
        }
        inline app::ChallengeShrineManager_ChallengeWave__Array__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineManager_ChallengeWave__Array__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineManager_ChallengeWave__Array__Class>(type_info, "", "ChallengeShrineManager+ChallengeWave[]");
        }
        inline app::ChallengeShrineManager_ChallengeWave__Array* create() {
            return il2cpp::create_object<app::ChallengeShrineManager_ChallengeWave__Array>(get_class());
        }
    } // namespace ChallengeShrineManager_ChallengeWave__Array
} // namespace app::classes::types
