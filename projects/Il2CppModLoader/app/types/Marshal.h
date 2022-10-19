#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Marshal {
        inline app::Marshal__Class** type_info = (app::Marshal__Class**)(modloader::win::memory::resolve_rva(0x047428E0));
        inline app::Marshal__Class* get_class() {
            return il2cpp::get_class<app::Marshal__Class>(type_info, "System.Runtime.InteropServices", "Marshal");
        }
        inline app::Marshal* create() {
            return il2cpp::create_object<app::Marshal>(get_class());
        }
    } // namespace Marshal
} // namespace app::classes::types
