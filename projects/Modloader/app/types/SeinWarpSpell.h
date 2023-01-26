#pragma once
#include <Modloader/app/structs/SeinWarpSpell.h>
#include <Modloader/app/structs/SeinWarpSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWarpSpell {
        inline app::SeinWarpSpell__Class** type_info() {
            static app::SeinWarpSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinWarpSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinWarpSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinWarpSpell__Class>(type_info(), "", "SeinWarpSpell");
        }
        inline app::SeinWarpSpell* create() {
            return il2cpp::create_object<app::SeinWarpSpell>(get_class());
        }
    } // namespace SeinWarpSpell
} // namespace app::classes::types
