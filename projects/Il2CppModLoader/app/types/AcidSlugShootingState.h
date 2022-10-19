#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcidSlugShootingState {
        inline app::AcidSlugShootingState__Class** type_info = (app::AcidSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04771390));
        inline app::AcidSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugShootingState__Class>(type_info, "", "AcidSlugShootingState");
        }
        inline app::AcidSlugShootingState* create() {
            return il2cpp::create_object<app::AcidSlugShootingState>(get_class());
        }
    } // namespace AcidSlugShootingState
} // namespace app::classes::types
