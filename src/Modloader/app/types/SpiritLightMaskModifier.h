#pragma once
#include <Modloader/app/structs/SpiritLightMaskModifier.h>
#include <Modloader/app/structs/SpiritLightMaskModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightMaskModifier {
        inline app::SpiritLightMaskModifier__Class** type_info() {
            static app::SpiritLightMaskModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightMaskModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightMaskModifier__Class>(type_info(), "", "SpiritLightMaskModifier");
        }
        inline app::SpiritLightMaskModifier* create() {
            return il2cpp::create_object<app::SpiritLightMaskModifier>(get_class());
        }
    } // namespace SpiritLightMaskModifier
} // namespace app::classes::types
