#pragma once
#include <Modloader/app/structs/SpiderBatPlatformMovement.h>
#include <Modloader/app/structs/SpiderBatPlatformMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatPlatformMovement {
        inline app::SpiderBatPlatformMovement__Class** type_info() {
            static app::SpiderBatPlatformMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatPlatformMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatPlatformMovement__Class>(type_info(), "", "SpiderBatPlatformMovement");
        }
        inline app::SpiderBatPlatformMovement* create() {
            return il2cpp::create_object<app::SpiderBatPlatformMovement>(get_class());
        }
    } // namespace SpiderBatPlatformMovement
} // namespace app::classes::types
