#pragma once
#include <Modloader/app/structs/DecalLayerModifier.h>
#include <Modloader/app/structs/DecalLayerModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecalLayerModifier {
        inline app::DecalLayerModifier__Class** type_info() {
            static app::DecalLayerModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DecalLayerModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DecalLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::DecalLayerModifier__Class>(type_info(), "", "DecalLayerModifier");
        }
        inline app::DecalLayerModifier* create() {
            return il2cpp::create_object<app::DecalLayerModifier>(get_class());
        }
    } // namespace DecalLayerModifier
} // namespace app::classes::types
