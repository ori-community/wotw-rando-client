#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDashNew_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDashNew_c__Class** type_info;
        inline app::SeinDashNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashNew_c__Class>(type_info, "", "SeinDashNew", "<>c");
        }
        inline app::SeinDashNew_c* create() {
            return il2cpp::create_object<app::SeinDashNew_c>(get_class());
        }
    } // namespace SeinDashNew_c
} // namespace app::classes::types
