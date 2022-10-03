#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatValueProvider {
        namespace {
            app::FloatValueProvider__Class* type_info_ref = nullptr;
        }
        app::FloatValueProvider__Class** type_info = &type_info_ref;
        inline app::FloatValueProvider__Class* get_class() {
            return il2cpp::get_class<app::FloatValueProvider__Class>(type_info, "", "FloatValueProvider");
        }
        inline app::FloatValueProvider* create() {
            return il2cpp::create_object<app::FloatValueProvider>(get_class());
        }
    } // namespace FloatValueProvider
} // namespace app::classes::types
