#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Block4 {
        inline app::Block4__Class** type_info = (app::Block4__Class**)(modloader::win::memory::resolve_rva(0x04704F30));
        inline app::Block4__Class* get_class() {
            return il2cpp::get_class<app::Block4__Class>(type_info, "System.Linq.Expressions", "Block4");
        }
        inline app::Block4* create() {
            return il2cpp::create_object<app::Block4>(get_class());
        }
    } // namespace Block4
} // namespace app::classes::types
