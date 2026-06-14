#pragma once
#include <Modloader/app/structs/ActivateLaserAction.h>
#include <Modloader/app/structs/ActivateLaserAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateLaserAction {
        inline app::ActivateLaserAction__Class** type_info() {
            static app::ActivateLaserAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateLaserAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateLaserAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateLaserAction__Class>(type_info(), "", "ActivateLaserAction");
        }
        inline app::ActivateLaserAction* create() {
            return il2cpp::create_object<app::ActivateLaserAction>(get_class());
        }
    } // namespace ActivateLaserAction
} // namespace app::classes::types
