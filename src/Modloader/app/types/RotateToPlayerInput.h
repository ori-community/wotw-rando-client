#pragma once
#include <Modloader/app/structs/RotateToPlayerInput.h>
#include <Modloader/app/structs/RotateToPlayerInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotateToPlayerInput {
        inline app::RotateToPlayerInput__Class** type_info() {
            static app::RotateToPlayerInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotateToPlayerInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotateToPlayerInput__Class* get_class() {
            return il2cpp::get_class<app::RotateToPlayerInput__Class>(type_info(), "", "RotateToPlayerInput");
        }
        inline app::RotateToPlayerInput* create() {
            return il2cpp::create_object<app::RotateToPlayerInput>(get_class());
        }
    } // namespace RotateToPlayerInput
} // namespace app::classes::types
