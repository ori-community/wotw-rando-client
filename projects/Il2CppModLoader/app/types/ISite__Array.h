#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISite__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISite__Array__Class** type_info;
        inline app::ISite__Array__Class* get_class() {
            return il2cpp::get_class<app::ISite__Array__Class>(type_info, "System.ComponentModel", "ISite[]");
        }
        inline app::ISite__Array* create() {
            return il2cpp::create_object<app::ISite__Array>(get_class());
        }
    } // namespace ISite__Array
} // namespace app::classes::types
