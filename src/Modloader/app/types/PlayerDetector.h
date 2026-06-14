#pragma once
#include <Modloader/app/structs/PlayerDetector.h>
#include <Modloader/app/structs/PlayerDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDetector {
        inline app::PlayerDetector__Class** type_info() {
            static app::PlayerDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerDetector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerDetector__Class* get_class() {
            return il2cpp::get_class<app::PlayerDetector__Class>(type_info(), "", "PlayerDetector");
        }
        inline app::PlayerDetector* create() {
            return il2cpp::create_object<app::PlayerDetector>(get_class());
        }
    } // namespace PlayerDetector
} // namespace app::classes::types
