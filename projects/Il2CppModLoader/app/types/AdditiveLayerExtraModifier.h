#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdditiveLayerExtraModifier {
        namespace {
            app::AdditiveLayerExtraModifier__Class* type_info_ref = nullptr;
        }
        app::AdditiveLayerExtraModifier__Class** type_info = &type_info_ref;
        inline app::AdditiveLayerExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerExtraModifier__Class>(type_info, "", "AdditiveLayerExtraModifier");
        }
        inline app::AdditiveLayerExtraModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerExtraModifier>(get_class());
        }
    } // namespace AdditiveLayerExtraModifier
} // namespace app::classes::types
