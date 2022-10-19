#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectUberState {
        inline app::ObjectUberState__Class** type_info = (app::ObjectUberState__Class**)(modloader::win::memory::resolve_rva(0x0471B4B0));
        inline app::ObjectUberState__Class* get_class() {
            return il2cpp::get_class<app::ObjectUberState__Class>(type_info, "Moon", "ObjectUberState");
        }
        inline app::ObjectUberState* create() {
            return il2cpp::create_object<app::ObjectUberState>(get_class());
        }
    } // namespace ObjectUberState
} // namespace app::classes::types
