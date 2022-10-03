#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int32Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int32Storage__Class** type_info;
        inline app::Int32Storage__Class* get_class() {
            return il2cpp::get_class<app::Int32Storage__Class>(type_info, "System.Data.Common", "Int32Storage");
        }
        inline app::Int32Storage* create() {
            return il2cpp::create_object<app::Int32Storage>(get_class());
        }
    } // namespace Int32Storage
} // namespace app::classes::types
