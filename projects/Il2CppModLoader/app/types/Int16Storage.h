#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int16Storage {
        inline app::Int16Storage__Class** type_info = (app::Int16Storage__Class**)(modloader::win::memory::resolve_rva(0x04773090));
        inline app::Int16Storage__Class* get_class() {
            return il2cpp::get_class<app::Int16Storage__Class>(type_info, "System.Data.Common", "Int16Storage");
        }
        inline app::Int16Storage* create() {
            return il2cpp::create_object<app::Int16Storage>(get_class());
        }
    } // namespace Int16Storage
} // namespace app::classes::types
