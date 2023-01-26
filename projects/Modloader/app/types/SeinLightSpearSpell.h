#pragma once
#include <Modloader/app/structs/SeinLightSpearSpell.h>
#include <Modloader/app/structs/SeinLightSpearSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLightSpearSpell {
        inline app::SeinLightSpearSpell__Class** type_info() {
            static app::SeinLightSpearSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLightSpearSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLightSpearSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLightSpearSpell__Class>(type_info(), "", "SeinLightSpearSpell");
        }
        inline app::SeinLightSpearSpell* create() {
            return il2cpp::create_object<app::SeinLightSpearSpell>(get_class());
        }
    } // namespace SeinLightSpearSpell
} // namespace app::classes::types
