#pragma once
#include <Modloader/app/structs/MultiplyLayerThirdModifier.h>
#include <Modloader/app/structs/MultiplyLayerThirdModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerThirdModifier {
        inline app::MultiplyLayerThirdModifier__Class** type_info() {
            static app::MultiplyLayerThirdModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplyLayerThirdModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplyLayerThirdModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerThirdModifier__Class>(type_info(), "", "MultiplyLayerThirdModifier");
        }
        inline app::MultiplyLayerThirdModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerThirdModifier>(get_class());
        }
    } // namespace MultiplyLayerThirdModifier
} // namespace app::classes::types
