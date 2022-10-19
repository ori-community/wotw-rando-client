#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
