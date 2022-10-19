#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlCharsStorage {
        inline app::SqlCharsStorage__Class** type_info = (app::SqlCharsStorage__Class**)(modloader::win::memory::resolve_rva(0x04734758));
        inline app::SqlCharsStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlCharsStorage__Class>(type_info, "System.Data.Common", "SqlCharsStorage");
        }
        inline app::SqlCharsStorage* create() {
            return il2cpp::create_object<app::SqlCharsStorage>(get_class());
        }
    } // namespace SqlCharsStorage
} // namespace app::classes::types
