#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorLayerDefinition {
        inline app::MoonAnimatorLayerDefinition__Class** type_info = (app::MoonAnimatorLayerDefinition__Class**)(modloader::win::memory::resolve_rva(0x04741280));
        inline app::MoonAnimatorLayerDefinition__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorLayerDefinition__Class>(type_info, "Moon", "MoonAnimatorLayerDefinition");
        }
        inline app::MoonAnimatorLayerDefinition* create() {
            return il2cpp::create_object<app::MoonAnimatorLayerDefinition>(get_class());
        }
        inline app::MoonAnimatorLayerDefinition__Boxed* box(app::MoonAnimatorLayerDefinition value) {
            return il2cpp::box_value<app::MoonAnimatorLayerDefinition__Boxed>(get_class(), value);
        }
        inline app::MoonAnimatorLayerDefinition__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimatorLayerDefinition__Array>(get_class(), size);
        }
        inline app::MoonAnimatorLayerDefinition__Array* create_array(const std::vector<app::MoonAnimatorLayerDefinition>& items) {
            return il2cpp::array_new<app::MoonAnimatorLayerDefinition__Array>(get_class(), items);
        }
    } // namespace MoonAnimatorLayerDefinition
} // namespace app::classes::types
