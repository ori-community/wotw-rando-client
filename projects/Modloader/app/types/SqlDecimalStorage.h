#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlDecimalStorage {
        inline app::SqlDecimalStorage__Class** type_info = (app::SqlDecimalStorage__Class**)(modloader::win::memory::resolve_rva(0x047400A0));
        inline app::SqlDecimalStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDecimalStorage__Class>(type_info, "System.Data.Common", "SqlDecimalStorage");
        }
        inline app::SqlDecimalStorage* create() {
            return il2cpp::create_object<app::SqlDecimalStorage>(get_class());
        }
    } // namespace SqlDecimalStorage
} // namespace app::classes::types
