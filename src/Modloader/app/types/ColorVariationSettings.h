#pragma once
#include <Modloader/app/structs/ColorVariationSettings.h>
#include <Modloader/app/structs/ColorVariationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariationSettings {
        inline app::ColorVariationSettings__Class** type_info() {
            static app::ColorVariationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorVariationSettings__Class**)(modloader::win::memory::resolve_rva(0x047601A0));
            }
            return cache;
        }
        inline app::ColorVariationSettings__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationSettings__Class>(type_info(), "", "ColorVariationSettings");
        }
        inline app::ColorVariationSettings* create() {
            return il2cpp::create_object<app::ColorVariationSettings>(get_class());
        }
    } // namespace ColorVariationSettings
} // namespace app::classes::types
