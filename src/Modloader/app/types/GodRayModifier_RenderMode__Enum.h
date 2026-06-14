#pragma once
#include <Modloader/app/structs/GodRayModifier_RenderMode__Enum.h>
#include <Modloader/app/structs/GodRayModifier_RenderMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GodRayModifier_RenderMode__Enum {
        inline app::GodRayModifier_RenderMode__Enum__Class** type_info() {
            static app::GodRayModifier_RenderMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GodRayModifier_RenderMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GodRayModifier_RenderMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GodRayModifier_RenderMode__Enum__Class>(type_info(), "", "GodRayModifier", "RenderMode");
        }
        inline app::GodRayModifier_RenderMode__Enum* create() {
            return il2cpp::create_object<app::GodRayModifier_RenderMode__Enum>(get_class());
        }
    } // namespace GodRayModifier_RenderMode__Enum
} // namespace app::classes::types
