#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointLightMaskModifier {
        inline app::PointLightMaskModifier__Class** type_info = (app::PointLightMaskModifier__Class**)(modloader::win::memory::resolve_rva(0x04717C98));
        inline app::PointLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::PointLightMaskModifier__Class>(type_info, "", "PointLightMaskModifier");
        }
        inline app::PointLightMaskModifier* create() {
            return il2cpp::create_object<app::PointLightMaskModifier>(get_class());
        }
        inline app::PointLightMaskModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::PointLightMaskModifier__Array>(get_class(), size);
        }
        inline app::PointLightMaskModifier__Array* create_array(const std::vector<app::PointLightMaskModifier*>& items) {
            return il2cpp::array_new<app::PointLightMaskModifier__Array>(get_class(), items);
        }
    } // namespace PointLightMaskModifier
} // namespace app::classes::types
