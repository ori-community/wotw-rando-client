#pragma once
#include <Modloader/app/structs/KwolokIdle.h>
#include <Modloader/app/structs/KwolokIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokIdle {
        inline app::KwolokIdle__Class** type_info() {
            static app::KwolokIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokIdle__Class* get_class() {
            return il2cpp::get_class<app::KwolokIdle__Class>(type_info(), "", "KwolokIdle");
        }
        inline app::KwolokIdle* create() {
            return il2cpp::create_object<app::KwolokIdle>(get_class());
        }
    } // namespace KwolokIdle
} // namespace app::classes::types
