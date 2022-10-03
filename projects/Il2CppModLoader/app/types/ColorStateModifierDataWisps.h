#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorStateModifierDataWisps {
        namespace {
            app::ColorStateModifierDataWisps__Class* type_info_ref = nullptr;
        }
        app::ColorStateModifierDataWisps__Class** type_info = &type_info_ref;
        inline app::ColorStateModifierDataWisps__Class* get_class() {
            return il2cpp::get_class<app::ColorStateModifierDataWisps__Class>(type_info, "", "ColorStateModifierDataWisps");
        }
        inline app::ColorStateModifierDataWisps* create() {
            return il2cpp::create_object<app::ColorStateModifierDataWisps>(get_class());
        }
    } // namespace ColorStateModifierDataWisps
} // namespace app::classes::types
