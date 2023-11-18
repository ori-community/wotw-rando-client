#pragma once
#include <Modloader/app/structs/PlatformingMovement.h>
#include <Modloader/app/structs/PlatformingMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformingMovement {
        inline app::PlatformingMovement__Class** type_info() {
            static app::PlatformingMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformingMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformingMovement__Class* get_class() {
            return il2cpp::get_class<app::PlatformingMovement__Class>(type_info(), "", "PlatformingMovement");
        }
        inline app::PlatformingMovement* create() {
            return il2cpp::create_object<app::PlatformingMovement>(get_class());
        }
    } // namespace PlatformingMovement
} // namespace app::classes::types
