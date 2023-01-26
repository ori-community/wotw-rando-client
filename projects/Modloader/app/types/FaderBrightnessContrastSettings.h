#pragma once
#include <Modloader/app/structs/FaderBrightnessContrastSettings.h>
#include <Modloader/app/structs/FaderBrightnessContrastSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaderBrightnessContrastSettings {
        inline app::FaderBrightnessContrastSettings__Class** type_info() {
            static app::FaderBrightnessContrastSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FaderBrightnessContrastSettings__Class**)(modloader::win::memory::resolve_rva(0x047297A0));
            }
            return cache;
        }
        inline app::FaderBrightnessContrastSettings__Class* get_class() {
            return il2cpp::get_class<app::FaderBrightnessContrastSettings__Class>(type_info(), "", "FaderBrightnessContrastSettings");
        }
        inline app::FaderBrightnessContrastSettings* create() {
            return il2cpp::create_object<app::FaderBrightnessContrastSettings>(get_class());
        }
    } // namespace FaderBrightnessContrastSettings
} // namespace app::classes::types
