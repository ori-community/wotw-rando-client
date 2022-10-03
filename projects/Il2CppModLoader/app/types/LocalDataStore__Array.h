#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalDataStore__Array {
        namespace {
            app::LocalDataStore__Array__Class* type_info_ref = nullptr;
        }
        app::LocalDataStore__Array__Class** type_info = &type_info_ref;
        inline app::LocalDataStore__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStore__Array__Class>(type_info, "System", "LocalDataStore[]");
        }
        inline app::LocalDataStore__Array* create() {
            return il2cpp::create_object<app::LocalDataStore__Array>(get_class());
        }
    } // namespace LocalDataStore__Array
} // namespace app::classes::types
