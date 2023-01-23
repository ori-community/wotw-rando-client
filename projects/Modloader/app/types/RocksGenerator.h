#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RocksGenerator__Class.h>
#include <Modloader/app/structs/RocksGenerator.h>

namespace app::classes::types {
    namespace RocksGenerator {
        namespace {
            inline app::RocksGenerator__Class* type_info_ref = nullptr;
        }
        inline app::RocksGenerator__Class** type_info = &type_info_ref;
        inline app::RocksGenerator__Class* get_class() {
            return il2cpp::get_class<app::RocksGenerator__Class>(type_info, "", "RocksGenerator");
        }
        inline app::RocksGenerator* create() {
            return il2cpp::create_object<app::RocksGenerator>(get_class());
        }
    } // namespace RocksGenerator
} // namespace app::classes::types
