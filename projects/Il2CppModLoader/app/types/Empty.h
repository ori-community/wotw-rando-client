#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Empty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Empty__Class** type_info;
        inline app::Empty__Class* get_class() {
            return il2cpp::get_class<app::Empty__Class>(type_info, "System", "Empty");
        }
        inline app::Empty* create() {
            return il2cpp::create_object<app::Empty>(get_class());
        }
    } // namespace Empty
} // namespace app::classes::types
