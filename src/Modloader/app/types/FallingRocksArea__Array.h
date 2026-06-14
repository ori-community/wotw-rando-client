#pragma once
#include <Modloader/app/structs/FallingRocksArea__Array.h>
#include <Modloader/app/structs/FallingRocksArea__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallingRocksArea__Array {
        inline app::FallingRocksArea__Array__Class** type_info() {
            static app::FallingRocksArea__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallingRocksArea__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallingRocksArea__Array__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksArea__Array__Class>(type_info(), "", "FallingRocksArea[]");
        }
        inline app::FallingRocksArea__Array* create() {
            return il2cpp::create_object<app::FallingRocksArea__Array>(get_class());
        }
    } // namespace FallingRocksArea__Array
} // namespace app::classes::types
