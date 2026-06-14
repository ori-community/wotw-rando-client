#pragma once
#include <Modloader/app/structs/DecalLayerDistortModifier.h>
#include <Modloader/app/structs/DecalLayerDistortModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecalLayerDistortModifier {
        inline app::DecalLayerDistortModifier__Class** type_info() {
            static app::DecalLayerDistortModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DecalLayerDistortModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DecalLayerDistortModifier__Class* get_class() {
            return il2cpp::get_class<app::DecalLayerDistortModifier__Class>(type_info(), "", "DecalLayerDistortModifier");
        }
        inline app::DecalLayerDistortModifier* create() {
            return il2cpp::create_object<app::DecalLayerDistortModifier>(get_class());
        }
    } // namespace DecalLayerDistortModifier
} // namespace app::classes::types
