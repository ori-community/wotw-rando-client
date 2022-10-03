#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrightnessProvider {
        namespace {
            app::BrightnessProvider__Class* type_info_ref = nullptr;
        }
        app::BrightnessProvider__Class** type_info = &type_info_ref;
        inline app::BrightnessProvider__Class* get_class() {
            return il2cpp::get_class<app::BrightnessProvider__Class>(type_info, "", "BrightnessProvider");
        }
        inline app::BrightnessProvider* create() {
            return il2cpp::create_object<app::BrightnessProvider>(get_class());
        }
    } // namespace BrightnessProvider
} // namespace app::classes::types
