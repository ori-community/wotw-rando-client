#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorVariationSettings__Class.h>
#include <Modloader/app/structs/ColorVariationSettings.h>

namespace app::classes::types {
    namespace ColorVariationSettings {
        inline app::ColorVariationSettings__Class** type_info = (app::ColorVariationSettings__Class**)(modloader::win::memory::resolve_rva(0x047601A0));
        inline app::ColorVariationSettings__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationSettings__Class>(type_info, "", "ColorVariationSettings");
        }
        inline app::ColorVariationSettings* create() {
            return il2cpp::create_object<app::ColorVariationSettings>(get_class());
        }
    } // namespace ColorVariationSettings
} // namespace app::classes::types
