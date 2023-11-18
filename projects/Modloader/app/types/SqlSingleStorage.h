#pragma once
#include <Modloader/app/structs/SqlSingleStorage.h>
#include <Modloader/app/structs/SqlSingleStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlSingleStorage {
        inline app::SqlSingleStorage__Class** type_info() {
            static app::SqlSingleStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlSingleStorage__Class**)(modloader::win::memory::resolve_rva(0x047808E8));
            }
            return cache;
        }
        inline app::SqlSingleStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlSingleStorage__Class>(type_info(), "System.Data.Common", "SqlSingleStorage");
        }
        inline app::SqlSingleStorage* create() {
            return il2cpp::create_object<app::SqlSingleStorage>(get_class());
        }
    } // namespace SqlSingleStorage
} // namespace app::classes::types
