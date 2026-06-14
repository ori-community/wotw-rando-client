#pragma once
#include <Modloader/app/structs/PlatformMovementListOfColliders.h>
#include <Modloader/app/structs/PlatformMovementListOfColliders__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementListOfColliders {
        inline app::PlatformMovementListOfColliders__Class** type_info() {
            static app::PlatformMovementListOfColliders__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformMovementListOfColliders__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformMovementListOfColliders__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementListOfColliders__Class>(type_info(), "", "PlatformMovementListOfColliders");
        }
        inline app::PlatformMovementListOfColliders* create() {
            return il2cpp::create_object<app::PlatformMovementListOfColliders>(get_class());
        }
    } // namespace PlatformMovementListOfColliders
} // namespace app::classes::types
