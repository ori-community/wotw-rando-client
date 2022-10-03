#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerShakeAsset {
        namespace {
            app::ControllerShakeAsset__Class* type_info_ref = nullptr;
        }
        app::ControllerShakeAsset__Class** type_info = &type_info_ref;
        inline app::ControllerShakeAsset__Class* get_class() {
            return il2cpp::get_class<app::ControllerShakeAsset__Class>(type_info, "", "ControllerShakeAsset");
        }
        inline app::ControllerShakeAsset* create() {
            return il2cpp::create_object<app::ControllerShakeAsset>(get_class());
        }
    } // namespace ControllerShakeAsset
} // namespace app::classes::types
