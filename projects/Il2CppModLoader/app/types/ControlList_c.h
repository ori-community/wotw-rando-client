#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlList_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlList_c__Class** type_info;
        inline app::ControlList_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlList_c__Class>(type_info, "", "ControlList", "<>c");
        }
        inline app::ControlList_c* create() {
            return il2cpp::create_object<app::ControlList_c>(get_class());
        }
    } // namespace ControlList_c
} // namespace app::classes::types
