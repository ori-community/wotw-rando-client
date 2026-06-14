#pragma once
#include <Modloader/app/structs/SeinChakramSpell.h>
#include <Modloader/app/structs/SeinChakramSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChakramSpell {
        inline app::SeinChakramSpell__Class** type_info() {
            static app::SeinChakramSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChakramSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChakramSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinChakramSpell__Class>(type_info(), "", "SeinChakramSpell");
        }
        inline app::SeinChakramSpell* create() {
            return il2cpp::create_object<app::SeinChakramSpell>(get_class());
        }
    } // namespace SeinChakramSpell
} // namespace app::classes::types
