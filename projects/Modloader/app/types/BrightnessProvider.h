#pragma once
#include <Modloader/app/structs/BrightnessProvider.h>
#include <Modloader/app/structs/BrightnessProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrightnessProvider {
        inline app::BrightnessProvider__Class** type_info() {
            static app::BrightnessProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrightnessProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrightnessProvider__Class* get_class() {
            return il2cpp::get_class<app::BrightnessProvider__Class>(type_info(), "", "BrightnessProvider");
        }
        inline app::BrightnessProvider* create() {
            return il2cpp::create_object<app::BrightnessProvider>(get_class());
        }
    } // namespace BrightnessProvider
} // namespace app::classes::types
