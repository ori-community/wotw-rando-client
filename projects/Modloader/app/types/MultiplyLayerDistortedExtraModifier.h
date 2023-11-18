#pragma once
#include <Modloader/app/structs/MultiplyLayerDistortedExtraModifier.h>
#include <Modloader/app/structs/MultiplyLayerDistortedExtraModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerDistortedExtraModifier {
        inline app::MultiplyLayerDistortedExtraModifier__Class** type_info() {
            static app::MultiplyLayerDistortedExtraModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplyLayerDistortedExtraModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplyLayerDistortedExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerDistortedExtraModifier__Class>(type_info(), "", "MultiplyLayerDistortedExtraModifier");
        }
        inline app::MultiplyLayerDistortedExtraModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerDistortedExtraModifier>(get_class());
        }
    } // namespace MultiplyLayerDistortedExtraModifier
} // namespace app::classes::types
