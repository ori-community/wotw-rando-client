#pragma once
#include <Modloader/app/structs/SeinFirewhirlSpell.h>
#include <Modloader/app/structs/SeinFirewhirlSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFirewhirlSpell {
        inline app::SeinFirewhirlSpell__Class** type_info() {
            static app::SeinFirewhirlSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinFirewhirlSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinFirewhirlSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinFirewhirlSpell__Class>(type_info(), "", "SeinFirewhirlSpell");
        }
        inline app::SeinFirewhirlSpell* create() {
            return il2cpp::create_object<app::SeinFirewhirlSpell>(get_class());
        }
    } // namespace SeinFirewhirlSpell
} // namespace app::classes::types
