#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallingRocksArea {
        namespace {
            app::FallingRocksArea__Class* type_info_ref = nullptr;
        }
        app::FallingRocksArea__Class** type_info = &type_info_ref;
        inline app::FallingRocksArea__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksArea__Class>(type_info, "", "FallingRocksArea");
        }
        inline app::FallingRocksArea* create() {
            return il2cpp::create_object<app::FallingRocksArea>(get_class());
        }
        inline app::FallingRocksArea__Array* create_array(int size) {
            return il2cpp::array_new<app::FallingRocksArea__Array>(get_class(), size);
        }
        inline app::FallingRocksArea__Array* create_array(const std::vector<app::FallingRocksArea*>& items) {
            return il2cpp::array_new<app::FallingRocksArea__Array>(get_class(), items);
        }
    } // namespace FallingRocksArea
} // namespace app::classes::types
