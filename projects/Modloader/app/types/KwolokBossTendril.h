#pragma once
#include <Modloader/app/structs/KwolokBossTendril.h>
#include <Modloader/app/structs/KwolokBossTendril__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendril {
        inline app::KwolokBossTendril__Class** type_info() {
            static app::KwolokBossTendril__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTendril__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTendril__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendril__Class>(type_info(), "", "KwolokBossTendril");
        }
        inline app::KwolokBossTendril* create() {
            return il2cpp::create_object<app::KwolokBossTendril>(get_class());
        }
    } // namespace KwolokBossTendril
} // namespace app::classes::types
