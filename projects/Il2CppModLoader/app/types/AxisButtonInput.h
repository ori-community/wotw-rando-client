#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AxisButtonInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AxisButtonInput__Class** type_info;
        inline app::AxisButtonInput__Class* get_class() {
            return il2cpp::get_class<app::AxisButtonInput__Class>(type_info, "SmartInput", "AxisButtonInput");
        }
        inline app::AxisButtonInput* create() {
            return il2cpp::create_object<app::AxisButtonInput>(get_class());
        }
    } // namespace AxisButtonInput
} // namespace app::classes::types
