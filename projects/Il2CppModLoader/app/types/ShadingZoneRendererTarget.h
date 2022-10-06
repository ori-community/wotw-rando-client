#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShadingZoneRendererTarget {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShadingZoneRendererTarget__Class** type_info;
        inline app::ShadingZoneRendererTarget__Class* get_class() {
            return il2cpp::get_class<app::ShadingZoneRendererTarget__Class>(type_info, "", "ShadingZoneRendererTarget");
        }
        inline app::ShadingZoneRendererTarget* create() {
            return il2cpp::create_object<app::ShadingZoneRendererTarget>(get_class());
        }
        inline app::ShadingZoneRendererTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::ShadingZoneRendererTarget__Array>(get_class(), size);
        }
        inline app::ShadingZoneRendererTarget__Array* create_array(const std::vector<app::ShadingZoneRendererTarget*>& items) {
            return il2cpp::array_new<app::ShadingZoneRendererTarget__Array>(get_class(), items);
        }
    } // namespace ShadingZoneRendererTarget
} // namespace app::classes::types
