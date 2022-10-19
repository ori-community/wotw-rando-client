#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyNotFoundException {
        inline app::KeyNotFoundException__Class** type_info = (app::KeyNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x047530F8));
        inline app::KeyNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::KeyNotFoundException__Class>(type_info, "System.Collections.Generic", "KeyNotFoundException");
        }
        inline app::KeyNotFoundException* create() {
            return il2cpp::create_object<app::KeyNotFoundException>(get_class());
        }
    } // namespace KeyNotFoundException
} // namespace app::classes::types
