#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArraySpec {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArraySpec__Class** type_info;
        inline app::ArraySpec__Class* get_class() {
            return il2cpp::get_class<app::ArraySpec__Class>(type_info, "System", "ArraySpec");
        }
        inline app::ArraySpec* create() {
            return il2cpp::create_object<app::ArraySpec>(get_class());
        }
    } // namespace ArraySpec
} // namespace app::classes::types
