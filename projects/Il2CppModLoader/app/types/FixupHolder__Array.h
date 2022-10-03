#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixupHolder__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixupHolder__Array__Class** type_info;
        inline app::FixupHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::FixupHolder__Array__Class>(type_info, "System.Runtime.Serialization", "FixupHolder[]");
        }
        inline app::FixupHolder__Array* create() {
            return il2cpp::create_object<app::FixupHolder__Array>(get_class());
        }
    } // namespace FixupHolder__Array
} // namespace app::classes::types
