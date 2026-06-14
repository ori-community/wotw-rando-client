#pragma once
#include <Modloader/app/structs/SkeetoBombAttack.h>
#include <Modloader/app/structs/SkeetoBombAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoBombAttack {
        inline app::SkeetoBombAttack__Class** type_info() {
            static app::SkeetoBombAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoBombAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoBombAttack__Class* get_class() {
            return il2cpp::get_class<app::SkeetoBombAttack__Class>(type_info(), "", "SkeetoBombAttack");
        }
        inline app::SkeetoBombAttack* create() {
            return il2cpp::create_object<app::SkeetoBombAttack>(get_class());
        }
    } // namespace SkeetoBombAttack
} // namespace app::classes::types
