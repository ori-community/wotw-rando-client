#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlMoney {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlMoney__Class** type_info;
        inline app::SqlMoney__Class* get_class() {
            return il2cpp::get_class<app::SqlMoney__Class>(type_info, "System.Data.SqlTypes", "SqlMoney");
        }
        inline app::SqlMoney* create() {
            return il2cpp::create_object<app::SqlMoney>(get_class());
        }
        inline app::SqlMoney__Boxed* box(app::SqlMoney value) {
            return il2cpp::box_value<app::SqlMoney__Boxed>(get_class(), value);
        }
        inline app::SqlMoney__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlMoney__Array>(get_class(), size);
        }
    } // namespace SqlMoney
} // namespace app::classes::types
