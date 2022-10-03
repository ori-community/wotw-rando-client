#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinJumpShotSpell {
        namespace {
            app::SeinJumpShotSpell__Class* type_info_ref = nullptr;
        }
        app::SeinJumpShotSpell__Class** type_info = &type_info_ref;
        inline app::SeinJumpShotSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinJumpShotSpell__Class>(type_info, "", "SeinJumpShotSpell");
        }
        inline app::SeinJumpShotSpell* create() {
            return il2cpp::create_object<app::SeinJumpShotSpell>(get_class());
        }
    } // namespace SeinJumpShotSpell
} // namespace app::classes::types
