#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterFallMaskModifier {
        namespace {
            inline app::WaterFallMaskModifier__Class* type_info_ref = nullptr;
        }
        inline app::WaterFallMaskModifier__Class** type_info = &type_info_ref;
        inline app::WaterFallMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMaskModifier__Class>(type_info, "", "WaterFallMaskModifier");
        }
        inline app::WaterFallMaskModifier* create() {
            return il2cpp::create_object<app::WaterFallMaskModifier>(get_class());
        }
    } // namespace WaterFallMaskModifier
} // namespace app::classes::types
