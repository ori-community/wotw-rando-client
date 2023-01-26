#pragma once
#include <Modloader/app/structs/InspectorColorAttribute.h>
#include <Modloader/app/structs/InspectorColorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InspectorColorAttribute {
        inline app::InspectorColorAttribute__Class** type_info() {
            static app::InspectorColorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InspectorColorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InspectorColorAttribute__Class* get_class() {
            return il2cpp::get_class<app::InspectorColorAttribute__Class>(type_info(), "Moon.EffectsFramework", "InspectorColorAttribute");
        }
        inline app::InspectorColorAttribute* create() {
            return il2cpp::create_object<app::InspectorColorAttribute>(get_class());
        }
    } // namespace InspectorColorAttribute
} // namespace app::classes::types
