#pragma once
#include <Modloader/app/structs/DirectionalLightModifier.h>
#include <Modloader/app/structs/DirectionalLightModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectionalLightModifier {
        inline app::DirectionalLightModifier__Class** type_info() {
            static app::DirectionalLightModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectionalLightModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectionalLightModifier__Class* get_class() {
            return il2cpp::get_class<app::DirectionalLightModifier__Class>(type_info(), "", "DirectionalLightModifier");
        }
        inline app::DirectionalLightModifier* create() {
            return il2cpp::create_object<app::DirectionalLightModifier>(get_class());
        }
    } // namespace DirectionalLightModifier
} // namespace app::classes::types
