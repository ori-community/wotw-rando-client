#pragma once
#include <Modloader/app/structs/RocksGenerator.h>
#include <Modloader/app/structs/RocksGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RocksGenerator {
        inline app::RocksGenerator__Class** type_info() {
            static app::RocksGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RocksGenerator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RocksGenerator__Class* get_class() {
            return il2cpp::get_class<app::RocksGenerator__Class>(type_info(), "", "RocksGenerator");
        }
        inline app::RocksGenerator* create() {
            return il2cpp::create_object<app::RocksGenerator>(get_class());
        }
    } // namespace RocksGenerator
} // namespace app::classes::types
