#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Block4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Block4__Class** type_info;
        inline app::Block4__Class* get_class() {
            return il2cpp::get_class<app::Block4__Class>(type_info, "System.Linq.Expressions", "Block4");
        }
        inline app::Block4* create() {
            return il2cpp::create_object<app::Block4>(get_class());
        }
    } // namespace Block4
} // namespace app::classes::types
