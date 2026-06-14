#pragma once
#include <Modloader/app/structs/ControllerShakeAsset.h>
#include <Modloader/app/structs/ControllerShakeAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerShakeAsset {
        inline app::ControllerShakeAsset__Class** type_info() {
            static app::ControllerShakeAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerShakeAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerShakeAsset__Class* get_class() {
            return il2cpp::get_class<app::ControllerShakeAsset__Class>(type_info(), "", "ControllerShakeAsset");
        }
        inline app::ControllerShakeAsset* create() {
            return il2cpp::create_object<app::ControllerShakeAsset>(get_class());
        }
    } // namespace ControllerShakeAsset
} // namespace app::classes::types
