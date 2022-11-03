#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlSingleStorage {
        inline app::SqlSingleStorage__Class** type_info = (app::SqlSingleStorage__Class**)(modloader::win::memory::resolve_rva(0x047808E8));
        inline app::SqlSingleStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlSingleStorage__Class>(type_info, "System.Data.Common", "SqlSingleStorage");
        }
        inline app::SqlSingleStorage* create() {
            return il2cpp::create_object<app::SqlSingleStorage>(get_class());
        }
    } // namespace SqlSingleStorage
} // namespace app::classes::types
