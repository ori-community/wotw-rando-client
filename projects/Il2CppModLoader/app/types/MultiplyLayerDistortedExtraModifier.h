#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplyLayerDistortedExtraModifier {
        namespace {
            inline app::MultiplyLayerDistortedExtraModifier__Class* type_info_ref = nullptr;
        }
        inline app::MultiplyLayerDistortedExtraModifier__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerDistortedExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerDistortedExtraModifier__Class>(type_info, "", "MultiplyLayerDistortedExtraModifier");
        }
        inline app::MultiplyLayerDistortedExtraModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerDistortedExtraModifier>(get_class());
        }
    } // namespace MultiplyLayerDistortedExtraModifier
} // namespace app::classes::types
