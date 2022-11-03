#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FallingRocksArea__Array {
        namespace {
            inline app::FallingRocksArea__Array__Class* type_info_ref = nullptr;
        }
        inline app::FallingRocksArea__Array__Class** type_info = &type_info_ref;
        inline app::FallingRocksArea__Array__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksArea__Array__Class>(type_info, "", "FallingRocksArea[]");
        }
        inline app::FallingRocksArea__Array* create() {
            return il2cpp::create_object<app::FallingRocksArea__Array>(get_class());
        }
    } // namespace FallingRocksArea__Array
} // namespace app::classes::types
