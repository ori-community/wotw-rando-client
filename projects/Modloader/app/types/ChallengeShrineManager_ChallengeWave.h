#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave__Class.h>
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave.h>
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave__Boxed.h>
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave__Array.h>

namespace app::classes::types {
    namespace ChallengeShrineManager_ChallengeWave {
        namespace {
            inline app::ChallengeShrineManager_ChallengeWave__Class* type_info_ref = nullptr;
        }
        inline app::ChallengeShrineManager_ChallengeWave__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineManager_ChallengeWave__Class* get_class() {
            return il2cpp::get_nested_class<app::ChallengeShrineManager_ChallengeWave__Class>(type_info, "", "ChallengeShrineManager", "ChallengeWave");
        }
        inline app::ChallengeShrineManager_ChallengeWave* create() {
            return il2cpp::create_object<app::ChallengeShrineManager_ChallengeWave>(get_class());
        }
        inline app::ChallengeShrineManager_ChallengeWave__Boxed* box(app::ChallengeShrineManager_ChallengeWave value) {
            return il2cpp::box_value<app::ChallengeShrineManager_ChallengeWave__Boxed>(get_class(), value);
        }
        inline app::ChallengeShrineManager_ChallengeWave__Array* create_array(int size) {
            return il2cpp::array_new<app::ChallengeShrineManager_ChallengeWave__Array>(get_class(), size);
        }
        inline app::ChallengeShrineManager_ChallengeWave__Array* create_array(const std::vector<app::ChallengeShrineManager_ChallengeWave>& items) {
            return il2cpp::array_new<app::ChallengeShrineManager_ChallengeWave__Array>(get_class(), items);
        }
    } // namespace ChallengeShrineManager_ChallengeWave
} // namespace app::classes::types
