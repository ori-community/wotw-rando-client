#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlItem_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlItem_c__Class** type_info;
        inline app::ControlItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlItem_c__Class>(type_info, "", "ControlItem", "<>c");
        }
        inline app::ControlItem_c* create() {
            return il2cpp::create_object<app::ControlItem_c>(get_class());
        }
    } // namespace ControlItem_c
} // namespace app::classes::types
