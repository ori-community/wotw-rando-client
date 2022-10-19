#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BreakableWallVisuals {
        namespace {
            inline app::BreakableWallVisuals__Class* type_info_ref = nullptr;
        }
        inline app::BreakableWallVisuals__Class** type_info = &type_info_ref;
        inline app::BreakableWallVisuals__Class* get_class() {
            return il2cpp::get_class<app::BreakableWallVisuals__Class>(type_info, "", "BreakableWallVisuals");
        }
        inline app::BreakableWallVisuals* create() {
            return il2cpp::create_object<app::BreakableWallVisuals>(get_class());
        }
    } // namespace BreakableWallVisuals
} // namespace app::classes::types
