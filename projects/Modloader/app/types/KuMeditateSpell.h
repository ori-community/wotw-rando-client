#pragma once
#include <Modloader/app/structs/KuMeditateSpell.h>
#include <Modloader/app/structs/KuMeditateSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuMeditateSpell {
        inline app::KuMeditateSpell__Class** type_info() {
            static app::KuMeditateSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuMeditateSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuMeditateSpell__Class* get_class() {
            return il2cpp::get_class<app::KuMeditateSpell__Class>(type_info(), "", "KuMeditateSpell");
        }
        inline app::KuMeditateSpell* create() {
            return il2cpp::create_object<app::KuMeditateSpell>(get_class());
        }
    } // namespace KuMeditateSpell
} // namespace app::classes::types
