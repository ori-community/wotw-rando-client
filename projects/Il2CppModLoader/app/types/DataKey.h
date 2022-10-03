#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataKey__Class** type_info;
        inline app::DataKey__Class* get_class() {
            return il2cpp::get_class<app::DataKey__Class>(type_info, "System.Data", "DataKey");
        }
        inline app::DataKey* create() {
            return il2cpp::create_object<app::DataKey>(get_class());
        }
        inline app::DataKey__Boxed* box(app::DataKey value) {
            return il2cpp::box_value<app::DataKey__Boxed>(get_class(), value);
        }
    } // namespace DataKey
} // namespace app::classes::types
