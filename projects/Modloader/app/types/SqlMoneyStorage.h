#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlMoneyStorage {
        inline app::SqlMoneyStorage__Class** type_info = (app::SqlMoneyStorage__Class**)(modloader::win::memory::resolve_rva(0x0471D210));
        inline app::SqlMoneyStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlMoneyStorage__Class>(type_info, "System.Data.Common", "SqlMoneyStorage");
        }
        inline app::SqlMoneyStorage* create() {
            return il2cpp::create_object<app::SqlMoneyStorage>(get_class());
        }
    } // namespace SqlMoneyStorage
} // namespace app::classes::types
