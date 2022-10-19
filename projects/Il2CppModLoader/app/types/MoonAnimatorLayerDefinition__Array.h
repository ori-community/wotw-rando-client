#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorLayerDefinition__Array {
        namespace {
            inline app::MoonAnimatorLayerDefinition__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimatorLayerDefinition__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorLayerDefinition__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorLayerDefinition__Array__Class>(type_info, "Moon", "MoonAnimatorLayerDefinition[]");
        }
        inline app::MoonAnimatorLayerDefinition__Array* create() {
            return il2cpp::create_object<app::MoonAnimatorLayerDefinition__Array>(get_class());
        }
    } // namespace MoonAnimatorLayerDefinition__Array
} // namespace app::classes::types
