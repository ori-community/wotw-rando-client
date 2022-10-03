#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerExtraModifier {
        namespace {
            app::MultiplyLayerExtraModifier__Class* type_info_ref = nullptr;
        }
        app::MultiplyLayerExtraModifier__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerExtraModifier__Class>(type_info, "", "MultiplyLayerExtraModifier");
        }
        inline app::MultiplyLayerExtraModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerExtraModifier>(get_class());
        }
    } // namespace MultiplyLayerExtraModifier
} // namespace app::classes::types
