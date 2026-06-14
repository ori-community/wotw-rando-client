#pragma once
#include <Modloader/app/structs/UnityTextDisplayValue.h>
#include <Modloader/app/structs/UnityTextDisplayValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTextDisplayValue {
        inline app::UnityTextDisplayValue__Class** type_info() {
            static app::UnityTextDisplayValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTextDisplayValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTextDisplayValue__Class* get_class() {
            return il2cpp::get_class<app::UnityTextDisplayValue__Class>(type_info(), "", "UnityTextDisplayValue");
        }
        inline app::UnityTextDisplayValue* create() {
            return il2cpp::create_object<app::UnityTextDisplayValue>(get_class());
        }
    } // namespace UnityTextDisplayValue
} // namespace app::classes::types
