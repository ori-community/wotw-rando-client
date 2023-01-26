#pragma once
#include <Modloader/app/structs/EnumDisabledAttribute.h>
#include <Modloader/app/structs/EnumDisabledAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumDisabledAttribute {
        inline app::EnumDisabledAttribute__Class** type_info() {
            static app::EnumDisabledAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnumDisabledAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnumDisabledAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumDisabledAttribute__Class>(type_info(), "", "EnumDisabledAttribute");
        }
        inline app::EnumDisabledAttribute* create() {
            return il2cpp::create_object<app::EnumDisabledAttribute>(get_class());
        }
    } // namespace EnumDisabledAttribute
} // namespace app::classes::types
