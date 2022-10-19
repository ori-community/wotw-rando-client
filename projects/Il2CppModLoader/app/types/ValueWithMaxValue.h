#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueWithMaxValue {
        namespace {
            inline app::ValueWithMaxValue__Class* type_info_ref = nullptr;
        }
        inline app::ValueWithMaxValue__Class** type_info = &type_info_ref;
        inline app::ValueWithMaxValue__Class* get_class() {
            return il2cpp::get_class<app::ValueWithMaxValue__Class>(type_info, "", "ValueWithMaxValue");
        }
        inline app::ValueWithMaxValue* create() {
            return il2cpp::create_object<app::ValueWithMaxValue>(get_class());
        }
    } // namespace ValueWithMaxValue
} // namespace app::classes::types
