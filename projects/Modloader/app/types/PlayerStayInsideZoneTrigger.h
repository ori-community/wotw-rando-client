#pragma once
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStayInsideZoneTrigger {
        inline app::PlayerStayInsideZoneTrigger__Class** type_info() {
            static app::PlayerStayInsideZoneTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStayInsideZoneTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStayInsideZoneTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerStayInsideZoneTrigger__Class>(type_info(), "", "PlayerStayInsideZoneTrigger");
        }
        inline app::PlayerStayInsideZoneTrigger* create() {
            return il2cpp::create_object<app::PlayerStayInsideZoneTrigger>(get_class());
        }
    } // namespace PlayerStayInsideZoneTrigger
} // namespace app::classes::types
