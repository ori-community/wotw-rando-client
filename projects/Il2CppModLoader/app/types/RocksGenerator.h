#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RocksGenerator {
        namespace {
            app::RocksGenerator__Class* type_info_ref = nullptr;
        }
        app::RocksGenerator__Class** type_info = &type_info_ref;
        inline app::RocksGenerator__Class* get_class() {
            return il2cpp::get_class<app::RocksGenerator__Class>(type_info, "", "RocksGenerator");
        }
        inline app::RocksGenerator* create() {
            return il2cpp::create_object<app::RocksGenerator>(get_class());
        }
    } // namespace RocksGenerator
} // namespace app::classes::types
