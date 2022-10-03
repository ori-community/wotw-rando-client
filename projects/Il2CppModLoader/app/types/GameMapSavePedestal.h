#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapSavePedestal {
        namespace {
            app::GameMapSavePedestal__Class* type_info_ref = nullptr;
        }
        app::GameMapSavePedestal__Class** type_info = &type_info_ref;
        inline app::GameMapSavePedestal__Class* get_class() {
            return il2cpp::get_class<app::GameMapSavePedestal__Class>(type_info, "", "GameMapSavePedestal");
        }
        inline app::GameMapSavePedestal* create() {
            return il2cpp::create_object<app::GameMapSavePedestal>(get_class());
        }
        inline app::GameMapSavePedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::GameMapSavePedestal__Array>(get_class(), size);
        }
    } // namespace GameMapSavePedestal
} // namespace app::classes::types
