#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlBinaryStorage {
        inline app::SqlBinaryStorage__Class** type_info = (app::SqlBinaryStorage__Class**)(modloader::win::memory::resolve_rva(0x047393B8));
        inline app::SqlBinaryStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlBinaryStorage__Class>(type_info, "System.Data.Common", "SqlBinaryStorage");
        }
        inline app::SqlBinaryStorage* create() {
            return il2cpp::create_object<app::SqlBinaryStorage>(get_class());
        }
    } // namespace SqlBinaryStorage
} // namespace app::classes::types
