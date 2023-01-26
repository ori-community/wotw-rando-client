#pragma once
#include <Modloader/app/structs/KillPlayer.h>
#include <Modloader/app/structs/KillPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KillPlayer {
        inline app::KillPlayer__Class** type_info() {
            static app::KillPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KillPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KillPlayer__Class* get_class() {
            return il2cpp::get_class<app::KillPlayer__Class>(type_info(), "", "KillPlayer");
        }
        inline app::KillPlayer* create() {
            return il2cpp::create_object<app::KillPlayer>(get_class());
        }
    } // namespace KillPlayer
} // namespace app::classes::types
