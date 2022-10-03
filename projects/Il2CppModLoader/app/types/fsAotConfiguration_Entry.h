#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsAotConfiguration_Entry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsAotConfiguration_Entry__Class** type_info;
        inline app::fsAotConfiguration_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::fsAotConfiguration_Entry__Class>(type_info, "FullSerializer", "fsAotConfiguration", "Entry");
        }
        inline app::fsAotConfiguration_Entry* create() {
            return il2cpp::create_object<app::fsAotConfiguration_Entry>(get_class());
        }
        inline app::fsAotConfiguration_Entry__Boxed* box(app::fsAotConfiguration_Entry value) {
            return il2cpp::box_value<app::fsAotConfiguration_Entry__Boxed>(get_class(), value);
        }
        inline app::fsAotConfiguration_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::fsAotConfiguration_Entry__Array>(get_class(), size);
        }
    } // namespace fsAotConfiguration_Entry
} // namespace app::classes::types
