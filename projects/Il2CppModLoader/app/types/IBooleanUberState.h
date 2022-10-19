#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBooleanUberState {
        inline app::IBooleanUberState__Class** type_info = (app::IBooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0477D5D8));
        inline app::IBooleanUberState__Class* get_class() {
            return il2cpp::get_class<app::IBooleanUberState__Class>(type_info, "Moon", "IBooleanUberState");
        }
    } // namespace IBooleanUberState
} // namespace app::classes::types
