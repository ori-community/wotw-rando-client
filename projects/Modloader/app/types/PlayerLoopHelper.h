#pragma once
#include <Modloader/app/structs/PlayerLoopHelper.h>
#include <Modloader/app/structs/PlayerLoopHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopHelper {
        inline app::PlayerLoopHelper__Class** type_info() {
            static app::PlayerLoopHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLoopHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLoopHelper__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopHelper__Class>(type_info(), "Moon", "PlayerLoopHelper");
        }
        inline app::PlayerLoopHelper* create() {
            return il2cpp::create_object<app::PlayerLoopHelper>(get_class());
        }
    } // namespace PlayerLoopHelper
} // namespace app::classes::types
