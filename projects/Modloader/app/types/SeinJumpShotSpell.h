#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinJumpShotSpell__Class.h>
#include <Modloader/app/structs/SeinJumpShotSpell.h>

namespace app::classes::types {
    namespace SeinJumpShotSpell {
        namespace {
            inline app::SeinJumpShotSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinJumpShotSpell__Class** type_info = &type_info_ref;
        inline app::SeinJumpShotSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinJumpShotSpell__Class>(type_info, "", "SeinJumpShotSpell");
        }
        inline app::SeinJumpShotSpell* create() {
            return il2cpp::create_object<app::SeinJumpShotSpell>(get_class());
        }
    } // namespace SeinJumpShotSpell
} // namespace app::classes::types
