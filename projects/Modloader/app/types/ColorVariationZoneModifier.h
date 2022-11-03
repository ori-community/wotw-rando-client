#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorVariationZoneModifier {
        namespace {
            inline app::ColorVariationZoneModifier__Class* type_info_ref = nullptr;
        }
        inline app::ColorVariationZoneModifier__Class** type_info = &type_info_ref;
        inline app::ColorVariationZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationZoneModifier__Class>(type_info, "", "ColorVariationZoneModifier");
        }
        inline app::ColorVariationZoneModifier* create() {
            return il2cpp::create_object<app::ColorVariationZoneModifier>(get_class());
        }
    } // namespace ColorVariationZoneModifier
} // namespace app::classes::types
