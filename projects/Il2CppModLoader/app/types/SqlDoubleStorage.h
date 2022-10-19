#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlDoubleStorage {
        inline app::SqlDoubleStorage__Class** type_info = (app::SqlDoubleStorage__Class**)(modloader::win::memory::resolve_rva(0x0477FDD8));
        inline app::SqlDoubleStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDoubleStorage__Class>(type_info, "System.Data.Common", "SqlDoubleStorage");
        }
        inline app::SqlDoubleStorage* create() {
            return il2cpp::create_object<app::SqlDoubleStorage>(get_class());
        }
    } // namespace SqlDoubleStorage
} // namespace app::classes::types
