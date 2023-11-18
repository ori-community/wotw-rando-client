#pragma once
#include <Modloader/app/structs/PlayerTriggerSetup.h>
#include <Modloader/app/structs/PlayerTriggerSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerTriggerSetup {
        inline app::PlayerTriggerSetup__Class** type_info() {
            static app::PlayerTriggerSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerTriggerSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerTriggerSetup__Class* get_class() {
            return il2cpp::get_class<app::PlayerTriggerSetup__Class>(type_info(), "", "PlayerTriggerSetup");
        }
        inline app::PlayerTriggerSetup* create() {
            return il2cpp::create_object<app::PlayerTriggerSetup>(get_class());
        }
    } // namespace PlayerTriggerSetup
} // namespace app::classes::types
