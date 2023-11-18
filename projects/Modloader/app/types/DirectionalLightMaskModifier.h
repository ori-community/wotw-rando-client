#pragma once
#include <Modloader/app/structs/DirectionalLightMaskModifier.h>
#include <Modloader/app/structs/DirectionalLightMaskModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectionalLightMaskModifier {
        inline app::DirectionalLightMaskModifier__Class** type_info() {
            static app::DirectionalLightMaskModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectionalLightMaskModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectionalLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::DirectionalLightMaskModifier__Class>(type_info(), "", "DirectionalLightMaskModifier");
        }
        inline app::DirectionalLightMaskModifier* create() {
            return il2cpp::create_object<app::DirectionalLightMaskModifier>(get_class());
        }
    } // namespace DirectionalLightMaskModifier
} // namespace app::classes::types
