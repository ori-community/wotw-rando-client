#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldAccessException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FieldAccessException__Class** type_info;
        inline app::FieldAccessException__Class* get_class() {
            return il2cpp::get_class<app::FieldAccessException__Class>(type_info, "System", "FieldAccessException");
        }
        inline app::FieldAccessException* create() {
            return il2cpp::create_object<app::FieldAccessException>(get_class());
        }
    } // namespace FieldAccessException
} // namespace app::classes::types
