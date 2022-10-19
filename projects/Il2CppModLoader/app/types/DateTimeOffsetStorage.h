#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeOffsetStorage {
        inline app::DateTimeOffsetStorage__Class** type_info = (app::DateTimeOffsetStorage__Class**)(modloader::win::memory::resolve_rva(0x047770B8));
        inline app::DateTimeOffsetStorage__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffsetStorage__Class>(type_info, "System.Data.Common", "DateTimeOffsetStorage");
        }
        inline app::DateTimeOffsetStorage* create() {
            return il2cpp::create_object<app::DateTimeOffsetStorage>(get_class());
        }
    } // namespace DateTimeOffsetStorage
} // namespace app::classes::types
