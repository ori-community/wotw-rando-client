#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BreakableWallLogic {
        namespace {
            inline app::BreakableWallLogic__Class* type_info_ref = nullptr;
        }
        inline app::BreakableWallLogic__Class** type_info = &type_info_ref;
        inline app::BreakableWallLogic__Class* get_class() {
            return il2cpp::get_class<app::BreakableWallLogic__Class>(type_info, "", "BreakableWallLogic");
        }
        inline app::BreakableWallLogic* create() {
            return il2cpp::create_object<app::BreakableWallLogic>(get_class());
        }
    } // namespace BreakableWallLogic
} // namespace app::classes::types
