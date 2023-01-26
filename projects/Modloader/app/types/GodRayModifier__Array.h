#pragma once
#include <Modloader/app/structs/GodRayModifier__Array.h>
#include <Modloader/app/structs/GodRayModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GodRayModifier__Array {
        inline app::GodRayModifier__Array__Class** type_info() {
            static app::GodRayModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GodRayModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GodRayModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::GodRayModifier__Array__Class>(type_info(), "", "GodRayModifier[]");
        }
        inline app::GodRayModifier__Array* create() {
            return il2cpp::create_object<app::GodRayModifier__Array>(get_class());
        }
    } // namespace GodRayModifier__Array
} // namespace app::classes::types
