#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalUser_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalUser_c__Class** type_info;
        inline app::XalUser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_c__Class>(type_info, "SystemIntegration", "XalUser", "<>c");
        }
        inline app::XalUser_c* create() {
            return il2cpp::create_object<app::XalUser_c>(get_class());
        }
    } // namespace XalUser_c
} // namespace app::classes::types
