#pragma once
#include <Modloader/app/structs/KuPlatformMovement.h>
#include <Modloader/app/structs/KuPlatformMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuPlatformMovement {
        inline app::KuPlatformMovement__Class** type_info() {
            static app::KuPlatformMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuPlatformMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::KuPlatformMovement__Class>(type_info(), "", "KuPlatformMovement");
        }
        inline app::KuPlatformMovement* create() {
            return il2cpp::create_object<app::KuPlatformMovement>(get_class());
        }
    } // namespace KuPlatformMovement
} // namespace app::classes::types
