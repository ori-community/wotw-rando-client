#pragma once
#include <Modloader/app/structs/SeinInvincibility.h>
#include <Modloader/app/structs/SeinInvincibility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInvincibility {
        inline app::SeinInvincibility__Class** type_info() {
            static app::SeinInvincibility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInvincibility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInvincibility__Class* get_class() {
            return il2cpp::get_class<app::SeinInvincibility__Class>(type_info(), "", "SeinInvincibility");
        }
        inline app::SeinInvincibility* create() {
            return il2cpp::create_object<app::SeinInvincibility>(get_class());
        }
    } // namespace SeinInvincibility
} // namespace app::classes::types
