#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlGuid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlGuid__Class** type_info;
        inline app::SqlGuid__Class* get_class() {
            return il2cpp::get_class<app::SqlGuid__Class>(type_info, "System.Data.SqlTypes", "SqlGuid");
        }
        inline app::SqlGuid* create() {
            return il2cpp::create_object<app::SqlGuid>(get_class());
        }
        inline app::SqlGuid__Boxed* box(app::SqlGuid value) {
            return il2cpp::box_value<app::SqlGuid__Boxed>(get_class(), value);
        }
        inline app::SqlGuid__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlGuid__Array>(get_class(), size);
        }
        inline app::SqlGuid__Array* create_array(const std::vector<app::SqlGuid__Boxed>& items) {
            return il2cpp::array_new<app::SqlGuid__Array>(get_class(), items);
        }
    } // namespace SqlGuid
} // namespace app::classes::types
