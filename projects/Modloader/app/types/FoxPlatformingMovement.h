#pragma once
#include <Modloader/app/structs/FoxPlatformingMovement.h>
#include <Modloader/app/structs/FoxPlatformingMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxPlatformingMovement {
        inline app::FoxPlatformingMovement__Class** type_info() {
            static app::FoxPlatformingMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxPlatformingMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxPlatformingMovement__Class* get_class() {
            return il2cpp::get_class<app::FoxPlatformingMovement__Class>(type_info(), "", "FoxPlatformingMovement");
        }
        inline app::FoxPlatformingMovement* create() {
            return il2cpp::create_object<app::FoxPlatformingMovement>(get_class());
        }
    } // namespace FoxPlatformingMovement
} // namespace app::classes::types
