#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StarSlugShootingState {
        inline app::StarSlugShootingState__Class** type_info = (app::StarSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04745670));
        inline app::StarSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugShootingState__Class>(type_info, "", "StarSlugShootingState");
        }
        inline app::StarSlugShootingState* create() {
            return il2cpp::create_object<app::StarSlugShootingState>(get_class());
        }
    } // namespace StarSlugShootingState
} // namespace app::classes::types
