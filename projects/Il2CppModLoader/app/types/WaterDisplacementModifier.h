#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterDisplacementModifier {
        namespace {
            inline app::WaterDisplacementModifier__Class* type_info_ref = nullptr;
        }
        inline app::WaterDisplacementModifier__Class** type_info = &type_info_ref;
        inline app::WaterDisplacementModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterDisplacementModifier__Class>(type_info, "", "WaterDisplacementModifier");
        }
        inline app::WaterDisplacementModifier* create() {
            return il2cpp::create_object<app::WaterDisplacementModifier>(get_class());
        }
    } // namespace WaterDisplacementModifier
} // namespace app::classes::types
