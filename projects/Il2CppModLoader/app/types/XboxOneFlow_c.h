#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneFlow_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneFlow_c__Class** type_info;
        inline app::XboxOneFlow_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneFlow_c__Class>(type_info, "", "XboxOneFlow", "<>c");
        }
        inline app::XboxOneFlow_c* create() {
            return il2cpp::create_object<app::XboxOneFlow_c>(get_class());
        }
    } // namespace XboxOneFlow_c
} // namespace app::classes::types
