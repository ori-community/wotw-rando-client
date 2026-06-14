#pragma once
#include <Modloader/app/structs/GameplayCamera.h>
#include <Modloader/app/structs/GameplayCamera__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplayCamera {
        inline app::GameplayCamera__Class** type_info() {
            static app::GameplayCamera__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplayCamera__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplayCamera__Class* get_class() {
            return il2cpp::get_class<app::GameplayCamera__Class>(type_info(), "", "GameplayCamera");
        }
        inline app::GameplayCamera* create() {
            return il2cpp::create_object<app::GameplayCamera>(get_class());
        }
    } // namespace GameplayCamera
} // namespace app::classes::types
