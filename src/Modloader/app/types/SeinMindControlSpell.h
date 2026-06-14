#pragma once
#include <Modloader/app/structs/SeinMindControlSpell.h>
#include <Modloader/app/structs/SeinMindControlSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMindControlSpell {
        inline app::SeinMindControlSpell__Class** type_info() {
            static app::SeinMindControlSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMindControlSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMindControlSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMindControlSpell__Class>(type_info(), "", "SeinMindControlSpell");
        }
        inline app::SeinMindControlSpell* create() {
            return il2cpp::create_object<app::SeinMindControlSpell>(get_class());
        }
    } // namespace SeinMindControlSpell
} // namespace app::classes::types
