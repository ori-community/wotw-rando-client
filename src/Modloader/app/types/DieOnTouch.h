#pragma once
#include <Modloader/app/structs/DieOnTouch.h>
#include <Modloader/app/structs/DieOnTouch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DieOnTouch {
        inline app::DieOnTouch__Class** type_info() {
            static app::DieOnTouch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DieOnTouch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DieOnTouch__Class* get_class() {
            return il2cpp::get_class<app::DieOnTouch__Class>(type_info(), "", "DieOnTouch");
        }
        inline app::DieOnTouch* create() {
            return il2cpp::create_object<app::DieOnTouch>(get_class());
        }
    } // namespace DieOnTouch
} // namespace app::classes::types
