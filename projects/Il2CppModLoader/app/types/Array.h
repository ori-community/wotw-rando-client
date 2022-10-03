#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Array__Class** type_info;
        inline app::Array__Class* get_class() {
            return il2cpp::get_class<app::Array__Class>(type_info, "System", "Array");
        }
        inline app::Array* create() {
            return il2cpp::create_object<app::Array>(get_class());
        }
    } // namespace Array
} // namespace app::classes::types
