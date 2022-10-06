#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GodRayModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GodRayModifier__Class** type_info;
        inline app::GodRayModifier__Class* get_class() {
            return il2cpp::get_class<app::GodRayModifier__Class>(type_info, "", "GodRayModifier");
        }
        inline app::GodRayModifier* create() {
            return il2cpp::create_object<app::GodRayModifier>(get_class());
        }
        inline app::GodRayModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::GodRayModifier__Array>(get_class(), size);
        }
        inline app::GodRayModifier__Array* create_array(const std::vector<app::GodRayModifier*>& items) {
            return il2cpp::array_new<app::GodRayModifier__Array>(get_class(), items);
        }
    } // namespace GodRayModifier
} // namespace app::classes::types
