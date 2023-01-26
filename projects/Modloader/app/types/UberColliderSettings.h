#pragma once
#include <Modloader/app/structs/UberColliderSettings.h>
#include <Modloader/app/structs/UberColliderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberColliderSettings {
        inline app::UberColliderSettings__Class** type_info() {
            static app::UberColliderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberColliderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberColliderSettings__Class* get_class() {
            return il2cpp::get_class<app::UberColliderSettings__Class>(type_info(), "", "UberColliderSettings");
        }
        inline app::UberColliderSettings* create() {
            return il2cpp::create_object<app::UberColliderSettings>(get_class());
        }
    } // namespace UberColliderSettings
} // namespace app::classes::types
