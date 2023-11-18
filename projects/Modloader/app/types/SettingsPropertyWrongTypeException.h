#pragma once
#include <Modloader/app/structs/SettingsPropertyWrongTypeException.h>
#include <Modloader/app/structs/SettingsPropertyWrongTypeException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyWrongTypeException {
        inline app::SettingsPropertyWrongTypeException__Class** type_info() {
            static app::SettingsPropertyWrongTypeException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsPropertyWrongTypeException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsPropertyWrongTypeException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyWrongTypeException__Class>(type_info(), "System.Configuration", "SettingsPropertyWrongTypeException");
        }
        inline app::SettingsPropertyWrongTypeException* create() {
            return il2cpp::create_object<app::SettingsPropertyWrongTypeException>(get_class());
        }
    } // namespace SettingsPropertyWrongTypeException
} // namespace app::classes::types
