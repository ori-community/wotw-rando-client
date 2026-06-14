#pragma once
#include <Modloader/app/structs/UnityTextPercentageDisplayValue.h>
#include <Modloader/app/structs/UnityTextPercentageDisplayValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTextPercentageDisplayValue {
        inline app::UnityTextPercentageDisplayValue__Class** type_info() {
            static app::UnityTextPercentageDisplayValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTextPercentageDisplayValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTextPercentageDisplayValue__Class* get_class() {
            return il2cpp::get_class<app::UnityTextPercentageDisplayValue__Class>(type_info(), "", "UnityTextPercentageDisplayValue");
        }
        inline app::UnityTextPercentageDisplayValue* create() {
            return il2cpp::create_object<app::UnityTextPercentageDisplayValue>(get_class());
        }
    } // namespace UnityTextPercentageDisplayValue
} // namespace app::classes::types
