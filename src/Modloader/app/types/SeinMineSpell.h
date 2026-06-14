#pragma once
#include <Modloader/app/structs/SeinMineSpell.h>
#include <Modloader/app/structs/SeinMineSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMineSpell {
        inline app::SeinMineSpell__Class** type_info() {
            static app::SeinMineSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMineSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMineSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMineSpell__Class>(type_info(), "", "SeinMineSpell");
        }
        inline app::SeinMineSpell* create() {
            return il2cpp::create_object<app::SeinMineSpell>(get_class());
        }
    } // namespace SeinMineSpell
} // namespace app::classes::types
