#pragma once
#include <Modloader/app/structs/PlayerDistanceCondition.h>
#include <Modloader/app/structs/PlayerDistanceCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDistanceCondition {
        inline app::PlayerDistanceCondition__Class** type_info() {
            static app::PlayerDistanceCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerDistanceCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerDistanceCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerDistanceCondition__Class>(type_info(), "", "PlayerDistanceCondition");
        }
        inline app::PlayerDistanceCondition* create() {
            return il2cpp::create_object<app::PlayerDistanceCondition>(get_class());
        }
    } // namespace PlayerDistanceCondition
} // namespace app::classes::types
