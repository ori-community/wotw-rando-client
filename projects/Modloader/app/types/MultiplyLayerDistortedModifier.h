#pragma once
#include <Modloader/app/structs/MultiplyLayerDistortedModifier.h>
#include <Modloader/app/structs/MultiplyLayerDistortedModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerDistortedModifier {
        inline app::MultiplyLayerDistortedModifier__Class** type_info() {
            static app::MultiplyLayerDistortedModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplyLayerDistortedModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplyLayerDistortedModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerDistortedModifier__Class>(type_info(), "", "MultiplyLayerDistortedModifier");
        }
        inline app::MultiplyLayerDistortedModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerDistortedModifier>(get_class());
        }
    } // namespace MultiplyLayerDistortedModifier
} // namespace app::classes::types
