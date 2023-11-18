#pragma once
#include <Modloader/app/structs/FallingRocksArea.h>
#include <Modloader/app/structs/FallingRocksArea__Array.h>
#include <Modloader/app/structs/FallingRocksArea__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallingRocksArea {
        inline app::FallingRocksArea__Class** type_info() {
            static app::FallingRocksArea__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallingRocksArea__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallingRocksArea__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksArea__Class>(type_info(), "", "FallingRocksArea");
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
