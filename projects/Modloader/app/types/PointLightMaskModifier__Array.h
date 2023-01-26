#pragma once
#include <Modloader/app/structs/PointLightMaskModifier__Array.h>
#include <Modloader/app/structs/PointLightMaskModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointLightMaskModifier__Array {
        inline app::PointLightMaskModifier__Array__Class** type_info() {
            static app::PointLightMaskModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointLightMaskModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointLightMaskModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::PointLightMaskModifier__Array__Class>(type_info(), "", "PointLightMaskModifier[]");
        }
        inline app::PointLightMaskModifier__Array* create() {
            return il2cpp::create_object<app::PointLightMaskModifier__Array>(get_class());
        }
    } // namespace PointLightMaskModifier__Array
} // namespace app::classes::types
