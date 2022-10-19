#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Block3 {
        inline app::Block3__Class** type_info = (app::Block3__Class**)(modloader::win::memory::resolve_rva(0x04773898));
        inline app::Block3__Class* get_class() {
            return il2cpp::get_class<app::Block3__Class>(type_info, "System.Linq.Expressions", "Block3");
        }
        inline app::Block3* create() {
            return il2cpp::create_object<app::Block3>(get_class());
        }
    } // namespace Block3
} // namespace app::classes::types
