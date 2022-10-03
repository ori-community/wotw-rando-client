#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rail {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rail__Class** type_info;
        inline app::Rail__Class* get_class() {
            return il2cpp::get_class<app::Rail__Class>(type_info, "", "Rail");
        }
        inline app::Rail* create() {
            return il2cpp::create_object<app::Rail>(get_class());
        }
        inline app::Rail__Array* create_array(int size) {
            return il2cpp::array_new<app::Rail__Array>(get_class(), size);
        }
    } // namespace Rail
} // namespace app::classes::types
