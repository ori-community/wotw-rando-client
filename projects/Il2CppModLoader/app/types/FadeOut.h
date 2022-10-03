#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FadeOut {
        namespace {
            app::FadeOut__Class* type_info_ref = nullptr;
        }
        app::FadeOut__Class** type_info = &type_info_ref;
        inline app::FadeOut__Class* get_class() {
            return il2cpp::get_class<app::FadeOut__Class>(type_info, "", "FadeOut");
        }
        inline app::FadeOut* create() {
            return il2cpp::create_object<app::FadeOut>(get_class());
        }
    } // namespace FadeOut
} // namespace app::classes::types
