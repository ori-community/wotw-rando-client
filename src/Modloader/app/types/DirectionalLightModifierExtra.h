#pragma once
#include <Modloader/app/structs/DirectionalLightModifierExtra.h>
#include <Modloader/app/structs/DirectionalLightModifierExtra__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectionalLightModifierExtra {
        inline app::DirectionalLightModifierExtra__Class** type_info() {
            static app::DirectionalLightModifierExtra__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectionalLightModifierExtra__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectionalLightModifierExtra__Class* get_class() {
            return il2cpp::get_class<app::DirectionalLightModifierExtra__Class>(type_info(), "", "DirectionalLightModifierExtra");
        }
        inline app::DirectionalLightModifierExtra* create() {
            return il2cpp::create_object<app::DirectionalLightModifierExtra>(get_class());
        }
    } // namespace DirectionalLightModifierExtra
} // namespace app::classes::types
