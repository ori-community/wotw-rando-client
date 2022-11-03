#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrightnessProvider {
        namespace {
            inline app::BrightnessProvider__Class* type_info_ref = nullptr;
        }
        inline app::BrightnessProvider__Class** type_info = &type_info_ref;
        inline app::BrightnessProvider__Class* get_class() {
            return il2cpp::get_class<app::BrightnessProvider__Class>(type_info, "", "BrightnessProvider");
        }
        inline app::BrightnessProvider* create() {
            return il2cpp::create_object<app::BrightnessProvider>(get_class());
        }
    } // namespace BrightnessProvider
} // namespace app::classes::types
