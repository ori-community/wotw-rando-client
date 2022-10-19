#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BooleanUberState {
        inline app::BooleanUberState__Class** type_info = (app::BooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0473B6E0));
        inline app::BooleanUberState__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberState__Class>(type_info, "Moon", "BooleanUberState");
        }
        inline app::BooleanUberState* create() {
            return il2cpp::create_object<app::BooleanUberState>(get_class());
        }
    } // namespace BooleanUberState
} // namespace app::classes::types
