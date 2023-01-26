#pragma once
#include <Modloader/app/structs/Glitch_InterferenceSettings.h>
#include <Modloader/app/structs/Glitch_InterferenceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Glitch_InterferenceSettings {
        inline app::Glitch_InterferenceSettings__Class** type_info() {
            static app::Glitch_InterferenceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Glitch_InterferenceSettings__Class**)(modloader::win::memory::resolve_rva(0x04735B68));
            }
            return cache;
        }
        inline app::Glitch_InterferenceSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_InterferenceSettings__Class>(type_info(), "Colorful", "Glitch", "InterferenceSettings");
        }
        inline app::Glitch_InterferenceSettings* create() {
            return il2cpp::create_object<app::Glitch_InterferenceSettings>(get_class());
        }
    } // namespace Glitch_InterferenceSettings
} // namespace app::classes::types
