#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecalLayerModifier {
        namespace {
            app::DecalLayerModifier__Class* type_info_ref = nullptr;
        }
        app::DecalLayerModifier__Class** type_info = &type_info_ref;
        inline app::DecalLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::DecalLayerModifier__Class>(type_info, "", "DecalLayerModifier");
        }
        inline app::DecalLayerModifier* create() {
            return il2cpp::create_object<app::DecalLayerModifier>(get_class());
        }
    } // namespace DecalLayerModifier
} // namespace app::classes::types
