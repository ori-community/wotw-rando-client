#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrainyBlur {
        namespace {
            app::GrainyBlur__Class* type_info_ref = nullptr;
        }
        app::GrainyBlur__Class** type_info = &type_info_ref;
        inline app::GrainyBlur__Class* get_class() {
            return il2cpp::get_class<app::GrainyBlur__Class>(type_info, "Colorful", "GrainyBlur");
        }
        inline app::GrainyBlur* create() {
            return il2cpp::create_object<app::GrainyBlur>(get_class());
        }
    } // namespace GrainyBlur
} // namespace app::classes::types
