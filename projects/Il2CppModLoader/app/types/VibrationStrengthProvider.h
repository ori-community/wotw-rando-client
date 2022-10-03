#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VibrationStrengthProvider {
        namespace {
            app::VibrationStrengthProvider__Class* type_info_ref = nullptr;
        }
        app::VibrationStrengthProvider__Class** type_info = &type_info_ref;
        inline app::VibrationStrengthProvider__Class* get_class() {
            return il2cpp::get_class<app::VibrationStrengthProvider__Class>(type_info, "", "VibrationStrengthProvider");
        }
        inline app::VibrationStrengthProvider* create() {
            return il2cpp::create_object<app::VibrationStrengthProvider>(get_class());
        }
    } // namespace VibrationStrengthProvider
} // namespace app::classes::types
