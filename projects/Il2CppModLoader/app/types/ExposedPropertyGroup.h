#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExposedPropertyGroup {
        namespace {
            inline app::ExposedPropertyGroup__Class* type_info_ref = nullptr;
        }
        inline app::ExposedPropertyGroup__Class** type_info = &type_info_ref;
        inline app::ExposedPropertyGroup__Class* get_class() {
            return il2cpp::get_class<app::ExposedPropertyGroup__Class>(type_info, "Moon.ExposedPropertiesInspector", "ExposedPropertyGroup");
        }
        inline app::ExposedPropertyGroup* create() {
            return il2cpp::create_object<app::ExposedPropertyGroup>(get_class());
        }
    } // namespace ExposedPropertyGroup
} // namespace app::classes::types
