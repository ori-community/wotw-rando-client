#pragma once
#include <Modloader/app/structs/AdditiveLayerDistortedModifier.h>
#include <Modloader/app/structs/AdditiveLayerDistortedModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdditiveLayerDistortedModifier {
        inline app::AdditiveLayerDistortedModifier__Class** type_info() {
            static app::AdditiveLayerDistortedModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdditiveLayerDistortedModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdditiveLayerDistortedModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerDistortedModifier__Class>(type_info(), "", "AdditiveLayerDistortedModifier");
        }
        inline app::AdditiveLayerDistortedModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerDistortedModifier>(get_class());
        }
    } // namespace AdditiveLayerDistortedModifier
} // namespace app::classes::types
