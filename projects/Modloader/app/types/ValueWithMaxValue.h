#pragma once
#include <Modloader/app/structs/ValueWithMaxValue.h>
#include <Modloader/app/structs/ValueWithMaxValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueWithMaxValue {
        inline app::ValueWithMaxValue__Class** type_info() {
            static app::ValueWithMaxValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueWithMaxValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueWithMaxValue__Class* get_class() {
            return il2cpp::get_class<app::ValueWithMaxValue__Class>(type_info(), "", "ValueWithMaxValue");
        }
        inline app::ValueWithMaxValue* create() {
            return il2cpp::create_object<app::ValueWithMaxValue>(get_class());
        }
    } // namespace ValueWithMaxValue
} // namespace app::classes::types
