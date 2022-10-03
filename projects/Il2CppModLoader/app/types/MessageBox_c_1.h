#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageBox_c_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageBox_c_1__Class** type_info;
        inline app::MessageBox_c_1__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageBox_c_1__Class>(type_info, "Moon.UI", "MessageBox", "<>c");
        }
        inline app::MessageBox_c_1* create() {
            return il2cpp::create_object<app::MessageBox_c_1>(get_class());
        }
    } // namespace MessageBox_c_1
} // namespace app::classes::types
