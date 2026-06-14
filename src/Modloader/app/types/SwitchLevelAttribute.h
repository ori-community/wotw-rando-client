#pragma once
#include <Modloader/app/structs/SwitchLevelAttribute.h>
#include <Modloader/app/structs/SwitchLevelAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchLevelAttribute {
        inline app::SwitchLevelAttribute__Class** type_info() {
            static app::SwitchLevelAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchLevelAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchLevelAttribute__Class* get_class() {
            return il2cpp::get_class<app::SwitchLevelAttribute__Class>(type_info(), "System.Diagnostics", "SwitchLevelAttribute");
        }
        inline app::SwitchLevelAttribute* create() {
            return il2cpp::create_object<app::SwitchLevelAttribute>(get_class());
        }
    } // namespace SwitchLevelAttribute
} // namespace app::classes::types
