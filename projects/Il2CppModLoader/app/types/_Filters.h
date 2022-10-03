#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _Filters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::_Filters__Class** type_info;
        inline app::_Filters__Class* get_class() {
            return il2cpp::get_class<app::_Filters__Class>(type_info, "System", "__Filters");
        }
        inline app::_Filters* create() {
            return il2cpp::create_object<app::_Filters>(get_class());
        }
    } // namespace _Filters
} // namespace app::classes::types
