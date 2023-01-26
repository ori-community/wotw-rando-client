#pragma once
#include <Modloader/app/structs/SeinCrouch.h>
#include <Modloader/app/structs/SeinCrouch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCrouch {
        inline app::SeinCrouch__Class** type_info() {
            static app::SeinCrouch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCrouch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCrouch__Class* get_class() {
            return il2cpp::get_class<app::SeinCrouch__Class>(type_info(), "", "SeinCrouch");
        }
        inline app::SeinCrouch* create() {
            return il2cpp::create_object<app::SeinCrouch>(get_class());
        }
    } // namespace SeinCrouch
} // namespace app::classes::types
