#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cheat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Cheat__Class** type_info;
        inline app::Cheat__Class* get_class() {
            return il2cpp::get_class<app::Cheat__Class>(type_info, "", "Cheat");
        }
        inline app::Cheat* create() {
            return il2cpp::create_object<app::Cheat>(get_class());
        }
        inline app::Cheat__Array* create_array(int size) {
            return il2cpp::array_new<app::Cheat__Array>(get_class(), size);
        }
    } // namespace Cheat
} // namespace app::classes::types
