#pragma once
#include <Modloader/app/structs/AdditiveLayerExtraModifier.h>
#include <Modloader/app/structs/AdditiveLayerExtraModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdditiveLayerExtraModifier {
        inline app::AdditiveLayerExtraModifier__Class** type_info() {
            static app::AdditiveLayerExtraModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdditiveLayerExtraModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdditiveLayerExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerExtraModifier__Class>(type_info(), "", "AdditiveLayerExtraModifier");
        }
        inline app::AdditiveLayerExtraModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerExtraModifier>(get_class());
        }
    } // namespace AdditiveLayerExtraModifier
} // namespace app::classes::types
