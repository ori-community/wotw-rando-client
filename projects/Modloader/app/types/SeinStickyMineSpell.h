#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinStickyMineSpell__Class.h>
#include <Modloader/app/structs/SeinStickyMineSpell.h>

namespace app::classes::types {
    namespace SeinStickyMineSpell {
        namespace {
            inline app::SeinStickyMineSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinStickyMineSpell__Class** type_info = &type_info_ref;
        inline app::SeinStickyMineSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinStickyMineSpell__Class>(type_info, "", "SeinStickyMineSpell");
        }
        inline app::SeinStickyMineSpell* create() {
            return il2cpp::create_object<app::SeinStickyMineSpell>(get_class());
        }
    } // namespace SeinStickyMineSpell
} // namespace app::classes::types
