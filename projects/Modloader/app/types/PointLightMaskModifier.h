#pragma once
#include <Modloader/app/structs/PointLightMaskModifier.h>
#include <Modloader/app/structs/PointLightMaskModifier__Array.h>
#include <Modloader/app/structs/PointLightMaskModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointLightMaskModifier {
        inline app::PointLightMaskModifier__Class** type_info() {
            static app::PointLightMaskModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PointLightMaskModifier__Class**)(modloader::win::memory::resolve_rva(0x04717C98));
            }
            return cache;
        }
        inline app::PointLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::PointLightMaskModifier__Class>(type_info(), "", "PointLightMaskModifier");
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
