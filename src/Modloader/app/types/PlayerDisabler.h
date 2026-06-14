#pragma once
#include <Modloader/app/structs/PlayerDisabler.h>
#include <Modloader/app/structs/PlayerDisabler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDisabler {
        inline app::PlayerDisabler__Class** type_info() {
            static app::PlayerDisabler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerDisabler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerDisabler__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisabler__Class>(type_info(), "", "PlayerDisabler");
        }
        inline app::PlayerDisabler* create() {
            return il2cpp::create_object<app::PlayerDisabler>(get_class());
        }
    } // namespace PlayerDisabler
} // namespace app::classes::types
