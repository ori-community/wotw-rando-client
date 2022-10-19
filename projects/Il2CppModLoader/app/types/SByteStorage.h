#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SByteStorage {
        inline app::SByteStorage__Class** type_info = (app::SByteStorage__Class**)(modloader::win::memory::resolve_rva(0x04718580));
        inline app::SByteStorage__Class* get_class() {
            return il2cpp::get_class<app::SByteStorage__Class>(type_info, "System.Data.Common", "SByteStorage");
        }
        inline app::SByteStorage* create() {
            return il2cpp::create_object<app::SByteStorage>(get_class());
        }
    } // namespace SByteStorage
} // namespace app::classes::types
