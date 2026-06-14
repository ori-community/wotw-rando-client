#pragma once
#include <Modloader/app/structs/SettingAttribute.h>
#include <Modloader/app/structs/SettingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingAttribute {
        inline app::SettingAttribute__Class** type_info() {
            static app::SettingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingAttribute__Class>(type_info(), "System.Configuration", "SettingAttribute");
        }
        inline app::SettingAttribute* create() {
            return il2cpp::create_object<app::SettingAttribute>(get_class());
        }
    } // namespace SettingAttribute
} // namespace app::classes::types
