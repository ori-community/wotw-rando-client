#pragma once
#include <Modloader/app/structs/UnityTextStringDisplayValue.h>
#include <Modloader/app/structs/UnityTextStringDisplayValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTextStringDisplayValue {
        inline app::UnityTextStringDisplayValue__Class** type_info() {
            static app::UnityTextStringDisplayValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTextStringDisplayValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTextStringDisplayValue__Class* get_class() {
            return il2cpp::get_class<app::UnityTextStringDisplayValue__Class>(type_info(), "", "UnityTextStringDisplayValue");
        }
        inline app::UnityTextStringDisplayValue* create() {
            return il2cpp::create_object<app::UnityTextStringDisplayValue>(get_class());
        }
    } // namespace UnityTextStringDisplayValue
} // namespace app::classes::types
