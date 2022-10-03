#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixupHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixupHolder__Class** type_info;
        inline app::FixupHolder__Class* get_class() {
            return il2cpp::get_class<app::FixupHolder__Class>(type_info, "System.Runtime.Serialization", "FixupHolder");
        }
        inline app::FixupHolder* create() {
            return il2cpp::create_object<app::FixupHolder>(get_class());
        }
        inline app::FixupHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::FixupHolder__Array>(get_class(), size);
        }
    } // namespace FixupHolder
} // namespace app::classes::types
