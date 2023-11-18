#pragma once
#include <Modloader/app/structs/PlayerHasMapStoneFragmentCondition.h>
#include <Modloader/app/structs/PlayerHasMapStoneFragmentCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerHasMapStoneFragmentCondition {
        inline app::PlayerHasMapStoneFragmentCondition__Class** type_info() {
            static app::PlayerHasMapStoneFragmentCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerHasMapStoneFragmentCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerHasMapStoneFragmentCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHasMapStoneFragmentCondition__Class>(type_info(), "", "PlayerHasMapStoneFragmentCondition");
        }
        inline app::PlayerHasMapStoneFragmentCondition* create() {
            return il2cpp::create_object<app::PlayerHasMapStoneFragmentCondition>(get_class());
        }
    } // namespace PlayerHasMapStoneFragmentCondition
} // namespace app::classes::types
