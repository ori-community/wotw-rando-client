#pragma once
#include <Modloader/app/structs/LockRotation.h>
#include <Modloader/app/structs/LockRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockRotation {
        inline app::LockRotation__Class** type_info() {
            static app::LockRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockRotation__Class* get_class() {
            return il2cpp::get_class<app::LockRotation__Class>(type_info(), "", "LockRotation");
        }
        inline app::LockRotation* create() {
            return il2cpp::create_object<app::LockRotation>(get_class());
        }
    } // namespace LockRotation
} // namespace app::classes::types
