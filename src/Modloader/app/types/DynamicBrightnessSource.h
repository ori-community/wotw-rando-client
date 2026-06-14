#pragma once
#include <Modloader/app/structs/DynamicBrightnessSource.h>
#include <Modloader/app/structs/DynamicBrightnessSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicBrightnessSource {
        inline app::DynamicBrightnessSource__Class** type_info() {
            static app::DynamicBrightnessSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicBrightnessSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicBrightnessSource__Class* get_class() {
            return il2cpp::get_class<app::DynamicBrightnessSource__Class>(type_info(), "", "DynamicBrightnessSource");
        }
        inline app::DynamicBrightnessSource* create() {
            return il2cpp::create_object<app::DynamicBrightnessSource>(get_class());
        }
    } // namespace DynamicBrightnessSource
} // namespace app::classes::types
