#pragma once
#include <Modloader/app/structs/HurtPlayer.h>
#include <Modloader/app/structs/HurtPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HurtPlayer {
        inline app::HurtPlayer__Class** type_info() {
            static app::HurtPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HurtPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HurtPlayer__Class* get_class() {
            return il2cpp::get_class<app::HurtPlayer__Class>(type_info(), "", "HurtPlayer");
        }
        inline app::HurtPlayer* create() {
            return il2cpp::create_object<app::HurtPlayer>(get_class());
        }
    } // namespace HurtPlayer
} // namespace app::classes::types
