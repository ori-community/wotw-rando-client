#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Block2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Block2__Class** type_info;
        inline app::Block2__Class* get_class() {
            return il2cpp::get_class<app::Block2__Class>(type_info, "System.Linq.Expressions", "Block2");
        }
        inline app::Block2* create() {
            return il2cpp::create_object<app::Block2>(get_class());
        }
    } // namespace Block2
} // namespace app::classes::types
