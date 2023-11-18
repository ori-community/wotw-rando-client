#pragma once
#include <Modloader/app/structs/AdditiveLayerModifier.h>
#include <Modloader/app/structs/AdditiveLayerModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdditiveLayerModifier {
        inline app::AdditiveLayerModifier__Class** type_info() {
            static app::AdditiveLayerModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdditiveLayerModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdditiveLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerModifier__Class>(type_info(), "", "AdditiveLayerModifier");
        }
        inline app::AdditiveLayerModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerModifier>(get_class());
        }
    } // namespace AdditiveLayerModifier
} // namespace app::classes::types
