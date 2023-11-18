#pragma once
#include <Modloader/app/structs/ColorCorrectionSettings.h>
#include <Modloader/app/structs/ColorCorrectionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionSettings {
        inline app::ColorCorrectionSettings__Class** type_info() {
            static app::ColorCorrectionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorCorrectionSettings__Class**)(modloader::win::memory::resolve_rva(0x04730830));
            }
            return cache;
        }
        inline app::ColorCorrectionSettings__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionSettings__Class>(type_info(), "", "ColorCorrectionSettings");
        }
        inline app::ColorCorrectionSettings* create() {
            return il2cpp::create_object<app::ColorCorrectionSettings>(get_class());
        }
    } // namespace ColorCorrectionSettings
} // namespace app::classes::types
