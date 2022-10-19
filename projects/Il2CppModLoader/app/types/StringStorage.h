#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringStorage {
        inline app::StringStorage__Class** type_info = (app::StringStorage__Class**)(modloader::win::memory::resolve_rva(0x047826C0));
        inline app::StringStorage__Class* get_class() {
            return il2cpp::get_class<app::StringStorage__Class>(type_info, "System.Data.Common", "StringStorage");
        }
        inline app::StringStorage* create() {
            return il2cpp::create_object<app::StringStorage>(get_class());
        }
    } // namespace StringStorage
} // namespace app::classes::types
