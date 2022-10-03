#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Index {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Index__Class** type_info;
        inline app::Index__Class* get_class() {
            return il2cpp::get_class<app::Index__Class>(type_info, "System.Data", "Index");
        }
        inline app::Index* create() {
            return il2cpp::create_object<app::Index>(get_class());
        }
        inline app::Index__Array* create_array(int size) {
            return il2cpp::array_new<app::Index__Array>(get_class(), size);
        }
    } // namespace Index
} // namespace app::classes::types
