#pragma once
#include <Modloader/app/structs/DrownPlayer.h>
#include <Modloader/app/structs/DrownPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrownPlayer {
        inline app::DrownPlayer__Class** type_info() {
            static app::DrownPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrownPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrownPlayer__Class* get_class() {
            return il2cpp::get_class<app::DrownPlayer__Class>(type_info(), "", "DrownPlayer");
        }
        inline app::DrownPlayer* create() {
            return il2cpp::create_object<app::DrownPlayer>(get_class());
        }
    } // namespace DrownPlayer
} // namespace app::classes::types
