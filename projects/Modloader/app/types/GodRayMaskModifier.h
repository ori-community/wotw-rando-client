#pragma once
#include <Modloader/app/structs/GodRayMaskModifier.h>
#include <Modloader/app/structs/GodRayMaskModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GodRayMaskModifier {
        inline app::GodRayMaskModifier__Class** type_info() {
            static app::GodRayMaskModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GodRayMaskModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GodRayMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::GodRayMaskModifier__Class>(type_info(), "", "GodRayMaskModifier");
        }
        inline app::GodRayMaskModifier* create() {
            return il2cpp::create_object<app::GodRayMaskModifier>(get_class());
        }
    } // namespace GodRayMaskModifier
} // namespace app::classes::types
