#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InspectorColorAttribute__Class.h>
#include <Modloader/app/structs/InspectorColorAttribute.h>

namespace app::classes::types {
    namespace InspectorColorAttribute {
        namespace {
            inline app::InspectorColorAttribute__Class* type_info_ref = nullptr;
        }
        inline app::InspectorColorAttribute__Class** type_info = &type_info_ref;
        inline app::InspectorColorAttribute__Class* get_class() {
            return il2cpp::get_class<app::InspectorColorAttribute__Class>(type_info, "Moon.EffectsFramework", "InspectorColorAttribute");
        }
        inline app::InspectorColorAttribute* create() {
            return il2cpp::create_object<app::InspectorColorAttribute>(get_class());
        }
    } // namespace InspectorColorAttribute
} // namespace app::classes::types
