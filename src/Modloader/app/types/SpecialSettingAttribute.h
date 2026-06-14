#pragma once
#include <Modloader/app/structs/SpecialSettingAttribute.h>
#include <Modloader/app/structs/SpecialSettingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpecialSettingAttribute {
        inline app::SpecialSettingAttribute__Class** type_info() {
            static app::SpecialSettingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpecialSettingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpecialSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::SpecialSettingAttribute__Class>(type_info(), "System.Configuration", "SpecialSettingAttribute");
        }
        inline app::SpecialSettingAttribute* create() {
            return il2cpp::create_object<app::SpecialSettingAttribute>(get_class());
        }
    } // namespace SpecialSettingAttribute
} // namespace app::classes::types
