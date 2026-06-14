#pragma once
#include <Modloader/app/structs/DynamicAnimationPlayer.h>
#include <Modloader/app/structs/DynamicAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicAnimationPlayer {
        inline app::DynamicAnimationPlayer__Class** type_info() {
            static app::DynamicAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::DynamicAnimationPlayer__Class>(type_info(), "Moon", "DynamicAnimationPlayer");
        }
        inline app::DynamicAnimationPlayer* create() {
            return il2cpp::create_object<app::DynamicAnimationPlayer>(get_class());
        }
    } // namespace DynamicAnimationPlayer
} // namespace app::classes::types
