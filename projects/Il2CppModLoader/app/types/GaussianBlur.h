#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GaussianBlur {
        namespace {
            app::GaussianBlur__Class* type_info_ref = nullptr;
        }
        app::GaussianBlur__Class** type_info = &type_info_ref;
        inline app::GaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::GaussianBlur__Class>(type_info, "Colorful", "GaussianBlur");
        }
        inline app::GaussianBlur* create() {
            return il2cpp::create_object<app::GaussianBlur>(get_class());
        }
    } // namespace GaussianBlur
} // namespace app::classes::types
