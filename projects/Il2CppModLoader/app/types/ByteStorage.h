#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteStorage {
        inline app::ByteStorage__Class** type_info = (app::ByteStorage__Class**)(modloader::win::memory::resolve_rva(0x0470B9B8));
        inline app::ByteStorage__Class* get_class() {
            return il2cpp::get_class<app::ByteStorage__Class>(type_info, "System.Data.Common", "ByteStorage");
        }
        inline app::ByteStorage* create() {
            return il2cpp::create_object<app::ByteStorage>(get_class());
        }
    } // namespace ByteStorage
} // namespace app::classes::types
