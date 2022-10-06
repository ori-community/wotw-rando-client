#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Assembly {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Assembly__Class** type_info;
        inline app::Assembly__Class* get_class() {
            return il2cpp::get_class<app::Assembly__Class>(type_info, "System.Reflection", "Assembly");
        }
        inline app::Assembly* create() {
            return il2cpp::create_object<app::Assembly>(get_class());
        }
        inline app::Assembly__Array* create_array(int size) {
            return il2cpp::array_new<app::Assembly__Array>(get_class(), size);
        }
        inline app::Assembly__Array* create_array(const std::vector<app::Assembly*>& items) {
            return il2cpp::array_new<app::Assembly__Array>(get_class(), items);
        }
    } // namespace Assembly
} // namespace app::classes::types
