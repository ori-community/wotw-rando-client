#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatUberState {
        inline app::FloatUberState__Class** type_info = (app::FloatUberState__Class**)(modloader::win::memory::resolve_rva(0x04708810));
        inline app::FloatUberState__Class* get_class() {
            return il2cpp::get_class<app::FloatUberState__Class>(type_info, "Moon", "FloatUberState");
        }
        inline app::FloatUberState* create() {
            return il2cpp::create_object<app::FloatUberState>(get_class());
        }
    } // namespace FloatUberState
} // namespace app::classes::types
