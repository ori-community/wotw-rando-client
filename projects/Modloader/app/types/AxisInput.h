#pragma once
#include <Modloader/app/structs/AxisInput.h>
#include <Modloader/app/structs/AxisInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisInput {
        inline app::AxisInput__Class** type_info() {
            static app::AxisInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AxisInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AxisInput__Class* get_class() {
            return il2cpp::get_class<app::AxisInput__Class>(type_info(), "frameworks.Switch", "AxisInput");
        }
        inline app::AxisInput* create() {
            return il2cpp::create_object<app::AxisInput>(get_class());
        }
    } // namespace AxisInput
} // namespace app::classes::types
