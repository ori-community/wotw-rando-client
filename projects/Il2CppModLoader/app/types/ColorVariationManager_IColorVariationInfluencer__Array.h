#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorVariationManager_IColorVariationInfluencer__Array {
        namespace {
            app::ColorVariationManager_IColorVariationInfluencer__Array__Class* type_info_ref = nullptr;
        }
        app::ColorVariationManager_IColorVariationInfluencer__Array__Class** type_info = &type_info_ref;
        inline app::ColorVariationManager_IColorVariationInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationManager_IColorVariationInfluencer__Array__Class>(type_info, "", "ColorVariationManager+IColorVariationInfluencer[]");
        }
        inline app::ColorVariationManager_IColorVariationInfluencer__Array* create() {
            return il2cpp::create_object<app::ColorVariationManager_IColorVariationInfluencer__Array>(get_class());
        }
    } // namespace ColorVariationManager_IColorVariationInfluencer__Array
} // namespace app::classes::types
