#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VibrationStrengthProvider {
        namespace {
            inline app::VibrationStrengthProvider__Class* type_info_ref = nullptr;
        }
        inline app::VibrationStrengthProvider__Class** type_info = &type_info_ref;
        inline app::VibrationStrengthProvider__Class* get_class() {
            return il2cpp::get_class<app::VibrationStrengthProvider__Class>(type_info, "", "VibrationStrengthProvider");
        }
        inline app::VibrationStrengthProvider* create() {
            return il2cpp::create_object<app::VibrationStrengthProvider>(get_class());
        }
    } // namespace VibrationStrengthProvider
} // namespace app::classes::types
