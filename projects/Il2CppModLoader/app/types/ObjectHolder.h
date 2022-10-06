#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectHolder__Class** type_info;
        inline app::ObjectHolder__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolder__Class>(type_info, "System.Runtime.Serialization", "ObjectHolder");
        }
        inline app::ObjectHolder* create() {
            return il2cpp::create_object<app::ObjectHolder>(get_class());
        }
        inline app::ObjectHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectHolder__Array>(get_class(), size);
        }
        inline app::ObjectHolder__Array* create_array(const std::vector<app::ObjectHolder*>& items) {
            return il2cpp::array_new<app::ObjectHolder__Array>(get_class(), items);
        }
    } // namespace ObjectHolder
} // namespace app::classes::types
