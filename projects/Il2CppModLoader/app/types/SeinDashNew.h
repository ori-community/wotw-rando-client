#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDashNew {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDashNew__Class** type_info;
        inline app::SeinDashNew__Class* get_class() {
            return il2cpp::get_class<app::SeinDashNew__Class>(type_info, "", "SeinDashNew");
        }
        inline app::SeinDashNew* create() {
            return il2cpp::create_object<app::SeinDashNew>(get_class());
        }
    } // namespace SeinDashNew
} // namespace app::classes::types
