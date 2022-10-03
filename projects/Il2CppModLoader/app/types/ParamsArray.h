#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParamsArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParamsArray__Class** type_info;
        inline app::ParamsArray__Class* get_class() {
            return il2cpp::get_class<app::ParamsArray__Class>(type_info, "System", "ParamsArray");
        }
        inline app::ParamsArray* create() {
            return il2cpp::create_object<app::ParamsArray>(get_class());
        }
        inline app::ParamsArray__Boxed* box(app::ParamsArray value) {
            return il2cpp::box_value<app::ParamsArray__Boxed>(get_class(), value);
        }
    } // namespace ParamsArray
} // namespace app::classes::types
