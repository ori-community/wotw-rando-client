#pragma once
#include <Modloader/app/structs/NewEntityPlatformMovement.h>
#include <Modloader/app/structs/NewEntityPlatformMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewEntityPlatformMovement {
        inline app::NewEntityPlatformMovement__Class** type_info() {
            static app::NewEntityPlatformMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewEntityPlatformMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewEntityPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::NewEntityPlatformMovement__Class>(type_info(), "", "NewEntityPlatformMovement");
        }
        inline app::NewEntityPlatformMovement* create() {
            return il2cpp::create_object<app::NewEntityPlatformMovement>(get_class());
        }
    } // namespace NewEntityPlatformMovement
} // namespace app::classes::types
