#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SingleStorage {
        inline app::SingleStorage__Class** type_info = (app::SingleStorage__Class**)(modloader::win::memory::resolve_rva(0x04745378));
        inline app::SingleStorage__Class* get_class() {
            return il2cpp::get_class<app::SingleStorage__Class>(type_info, "System.Data.Common", "SingleStorage");
        }
        inline app::SingleStorage* create() {
            return il2cpp::create_object<app::SingleStorage>(get_class());
        }
    } // namespace SingleStorage
} // namespace app::classes::types
