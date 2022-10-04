#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISite__Class** type_info;
        inline app::ISite__Class* get_class() {
            return il2cpp::get_class<app::ISite__Class>(type_info, "System.ComponentModel", "ISite");
        }
        inline app::ISite__Array* create_array(int size) {
            return il2cpp::array_new<app::ISite__Array>(get_class(), size);
        }
    } // namespace ISite
} // namespace app::classes::types
