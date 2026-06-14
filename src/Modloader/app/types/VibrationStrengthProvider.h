#pragma once
#include <Modloader/app/structs/VibrationStrengthProvider.h>
#include <Modloader/app/structs/VibrationStrengthProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VibrationStrengthProvider {
        inline app::VibrationStrengthProvider__Class** type_info() {
            static app::VibrationStrengthProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VibrationStrengthProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VibrationStrengthProvider__Class* get_class() {
            return il2cpp::get_class<app::VibrationStrengthProvider__Class>(type_info(), "", "VibrationStrengthProvider");
        }
        inline app::VibrationStrengthProvider* create() {
            return il2cpp::create_object<app::VibrationStrengthProvider>(get_class());
        }
    } // namespace VibrationStrengthProvider
} // namespace app::classes::types
