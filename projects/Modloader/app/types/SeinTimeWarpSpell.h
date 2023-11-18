#pragma once
#include <Modloader/app/structs/SeinTimeWarpSpell.h>
#include <Modloader/app/structs/SeinTimeWarpSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTimeWarpSpell {
        inline app::SeinTimeWarpSpell__Class** type_info() {
            static app::SeinTimeWarpSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTimeWarpSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTimeWarpSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTimeWarpSpell__Class>(type_info(), "", "SeinTimeWarpSpell");
        }
        inline app::SeinTimeWarpSpell* create() {
            return il2cpp::create_object<app::SeinTimeWarpSpell>(get_class());
        }
    } // namespace SeinTimeWarpSpell
} // namespace app::classes::types
