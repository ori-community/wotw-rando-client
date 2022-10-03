#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoIncrementValue {
        namespace {
            app::AutoIncrementValue__Class* type_info_ref = nullptr;
        }
        app::AutoIncrementValue__Class** type_info = &type_info_ref;
        inline app::AutoIncrementValue__Class* get_class() {
            return il2cpp::get_class<app::AutoIncrementValue__Class>(type_info, "System.Data", "AutoIncrementValue");
        }
        inline app::AutoIncrementValue* create() {
            return il2cpp::create_object<app::AutoIncrementValue>(get_class());
        }
    } // namespace AutoIncrementValue
} // namespace app::classes::types
