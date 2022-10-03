#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformProvider {
        namespace {
            app::TransformProvider__Class* type_info_ref = nullptr;
        }
        app::TransformProvider__Class** type_info = &type_info_ref;
        inline app::TransformProvider__Class* get_class() {
            return il2cpp::get_class<app::TransformProvider__Class>(type_info, "", "TransformProvider");
        }
        inline app::TransformProvider* create() {
            return il2cpp::create_object<app::TransformProvider>(get_class());
        }
    } // namespace TransformProvider
} // namespace app::classes::types
