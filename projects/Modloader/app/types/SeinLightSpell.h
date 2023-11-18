#pragma once
#include <Modloader/app/structs/SeinLightSpell.h>
#include <Modloader/app/structs/SeinLightSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLightSpell {
        inline app::SeinLightSpell__Class** type_info() {
            static app::SeinLightSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLightSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLightSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLightSpell__Class>(type_info(), "", "SeinLightSpell");
        }
        inline app::SeinLightSpell* create() {
            return il2cpp::create_object<app::SeinLightSpell>(get_class());
        }
    } // namespace SeinLightSpell
} // namespace app::classes::types
