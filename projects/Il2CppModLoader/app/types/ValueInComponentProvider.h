#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueInComponentProvider {
        namespace {
            app::ValueInComponentProvider__Class* type_info_ref = nullptr;
        }
        app::ValueInComponentProvider__Class** type_info = &type_info_ref;
        inline app::ValueInComponentProvider__Class* get_class() {
            return il2cpp::get_class<app::ValueInComponentProvider__Class>(type_info, "", "ValueInComponentProvider");
        }
        inline app::ValueInComponentProvider* create() {
            return il2cpp::create_object<app::ValueInComponentProvider>(get_class());
        }
    } // namespace ValueInComponentProvider
} // namespace app::classes::types
