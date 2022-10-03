#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritFlameTargetting {
        namespace {
            app::SeinSpiritFlameTargetting__Class* type_info_ref = nullptr;
        }
        app::SeinSpiritFlameTargetting__Class** type_info = &type_info_ref;
        inline app::SeinSpiritFlameTargetting__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritFlameTargetting__Class>(type_info, "", "SeinSpiritFlameTargetting");
        }
        inline app::SeinSpiritFlameTargetting* create() {
            return il2cpp::create_object<app::SeinSpiritFlameTargetting>(get_class());
        }
    } // namespace SeinSpiritFlameTargetting
} // namespace app::classes::types
