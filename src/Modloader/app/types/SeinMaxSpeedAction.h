#pragma once
#include <Modloader/app/structs/SeinMaxSpeedAction.h>
#include <Modloader/app/structs/SeinMaxSpeedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMaxSpeedAction {
        inline app::SeinMaxSpeedAction__Class** type_info() {
            static app::SeinMaxSpeedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMaxSpeedAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMaxSpeedAction__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxSpeedAction__Class>(type_info(), "", "SeinMaxSpeedAction");
        }
        inline app::SeinMaxSpeedAction* create() {
            return il2cpp::create_object<app::SeinMaxSpeedAction>(get_class());
        }
    } // namespace SeinMaxSpeedAction
} // namespace app::classes::types
