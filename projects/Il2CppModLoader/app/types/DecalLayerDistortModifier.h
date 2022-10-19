#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecalLayerDistortModifier {
        namespace {
            inline app::DecalLayerDistortModifier__Class* type_info_ref = nullptr;
        }
        inline app::DecalLayerDistortModifier__Class** type_info = &type_info_ref;
        inline app::DecalLayerDistortModifier__Class* get_class() {
            return il2cpp::get_class<app::DecalLayerDistortModifier__Class>(type_info, "", "DecalLayerDistortModifier");
        }
        inline app::DecalLayerDistortModifier* create() {
            return il2cpp::create_object<app::DecalLayerDistortModifier>(get_class());
        }
    } // namespace DecalLayerDistortModifier
} // namespace app::classes::types
