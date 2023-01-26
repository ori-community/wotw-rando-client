#pragma once
#include <Modloader/app/structs/SeinEarthShatterSpell.h>
#include <Modloader/app/structs/SeinEarthShatterSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEarthShatterSpell {
        inline app::SeinEarthShatterSpell__Class** type_info() {
            static app::SeinEarthShatterSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEarthShatterSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEarthShatterSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinEarthShatterSpell__Class>(type_info(), "", "SeinEarthShatterSpell");
        }
        inline app::SeinEarthShatterSpell* create() {
            return il2cpp::create_object<app::SeinEarthShatterSpell>(get_class());
        }
    } // namespace SeinEarthShatterSpell
} // namespace app::classes::types
