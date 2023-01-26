#pragma once
#include <Modloader/app/structs/PlayerLoop.h>
#include <Modloader/app/structs/PlayerLoop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoop {
        inline app::PlayerLoop__Class** type_info() {
            static app::PlayerLoop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLoop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLoop__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoop__Class>(type_info(), "UnityEngine.Experimental.LowLevel", "PlayerLoop");
        }
        inline app::PlayerLoop* create() {
            return il2cpp::create_object<app::PlayerLoop>(get_class());
        }
    } // namespace PlayerLoop
} // namespace app::classes::types
