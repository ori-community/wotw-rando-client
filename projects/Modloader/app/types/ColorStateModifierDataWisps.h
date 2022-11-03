#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorStateModifierDataWisps {
        namespace {
            inline app::ColorStateModifierDataWisps__Class* type_info_ref = nullptr;
        }
        inline app::ColorStateModifierDataWisps__Class** type_info = &type_info_ref;
        inline app::ColorStateModifierDataWisps__Class* get_class() {
            return il2cpp::get_class<app::ColorStateModifierDataWisps__Class>(type_info, "", "ColorStateModifierDataWisps");
        }
        inline app::ColorStateModifierDataWisps* create() {
            return il2cpp::create_object<app::ColorStateModifierDataWisps>(get_class());
        }
    } // namespace ColorStateModifierDataWisps
} // namespace app::classes::types
