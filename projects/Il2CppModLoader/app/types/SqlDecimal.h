#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDecimal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDecimal__Class** type_info;
        inline app::SqlDecimal__Class* get_class() {
            return il2cpp::get_class<app::SqlDecimal__Class>(type_info, "System.Data.SqlTypes", "SqlDecimal");
        }
        inline app::SqlDecimal* create() {
            return il2cpp::create_object<app::SqlDecimal>(get_class());
        }
        inline app::SqlDecimal__Boxed* box(app::SqlDecimal value) {
            return il2cpp::box_value<app::SqlDecimal__Boxed>(get_class(), value);
        }
        inline app::SqlDecimal__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlDecimal__Array>(get_class(), size);
        }
    } // namespace SqlDecimal
} // namespace app::classes::types
