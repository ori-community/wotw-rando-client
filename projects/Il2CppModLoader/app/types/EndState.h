#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EndState {
        inline app::EndState__Class** type_info = (app::EndState__Class**)(modloader::win::memory::resolve_rva(0x04726A68));
        inline app::EndState__Class* get_class() {
            return il2cpp::get_class<app::EndState__Class>(type_info, "", "EndState");
        }
        inline app::EndState* create() {
            return il2cpp::create_object<app::EndState>(get_class());
        }
    } // namespace EndState
} // namespace app::classes::types
