#pragma once
#include <Modloader/app/structs/MultiplyLayerExtraModifier.h>
#include <Modloader/app/structs/MultiplyLayerExtraModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerExtraModifier {
        inline app::MultiplyLayerExtraModifier__Class** type_info() {
            static app::MultiplyLayerExtraModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplyLayerExtraModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplyLayerExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerExtraModifier__Class>(type_info(), "", "MultiplyLayerExtraModifier");
        }
        inline app::MultiplyLayerExtraModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerExtraModifier>(get_class());
        }
    } // namespace MultiplyLayerExtraModifier
} // namespace app::classes::types
