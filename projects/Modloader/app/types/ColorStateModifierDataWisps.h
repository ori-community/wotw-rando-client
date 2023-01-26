#pragma once
#include <Modloader/app/structs/ColorStateModifierDataWisps.h>
#include <Modloader/app/structs/ColorStateModifierDataWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorStateModifierDataWisps {
        inline app::ColorStateModifierDataWisps__Class** type_info() {
            static app::ColorStateModifierDataWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorStateModifierDataWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorStateModifierDataWisps__Class* get_class() {
            return il2cpp::get_class<app::ColorStateModifierDataWisps__Class>(type_info(), "", "ColorStateModifierDataWisps");
        }
        inline app::ColorStateModifierDataWisps* create() {
            return il2cpp::create_object<app::ColorStateModifierDataWisps>(get_class());
        }
    } // namespace ColorStateModifierDataWisps
} // namespace app::classes::types
