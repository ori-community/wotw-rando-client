#pragma once
#include <Modloader/app/structs/SeinLocalSpeedAction.h>
#include <Modloader/app/structs/SeinLocalSpeedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLocalSpeedAction {
        inline app::SeinLocalSpeedAction__Class** type_info() {
            static app::SeinLocalSpeedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLocalSpeedAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLocalSpeedAction__Class* get_class() {
            return il2cpp::get_class<app::SeinLocalSpeedAction__Class>(type_info(), "", "SeinLocalSpeedAction");
        }
        inline app::SeinLocalSpeedAction* create() {
            return il2cpp::create_object<app::SeinLocalSpeedAction>(get_class());
        }
    } // namespace SeinLocalSpeedAction
} // namespace app::classes::types
