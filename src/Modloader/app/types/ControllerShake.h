#pragma once
#include <Modloader/app/structs/ControllerShake.h>
#include <Modloader/app/structs/ControllerShake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerShake {
        inline app::ControllerShake__Class** type_info() {
            static app::ControllerShake__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerShake__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerShake__Class* get_class() {
            return il2cpp::get_class<app::ControllerShake__Class>(type_info(), "", "ControllerShake");
        }
        inline app::ControllerShake* create() {
            return il2cpp::create_object<app::ControllerShake>(get_class());
        }
    } // namespace ControllerShake
} // namespace app::classes::types
