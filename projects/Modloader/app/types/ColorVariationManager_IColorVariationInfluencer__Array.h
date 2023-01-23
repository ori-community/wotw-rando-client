#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorVariationManager_IColorVariationInfluencer__Array__Class.h>
#include <Modloader/app/structs/ColorVariationManager_IColorVariationInfluencer__Array.h>

namespace app::classes::types {
    namespace ColorVariationManager_IColorVariationInfluencer__Array {
        namespace {
            inline app::ColorVariationManager_IColorVariationInfluencer__Array__Class* type_info_ref = nullptr;
        }
        inline app::ColorVariationManager_IColorVariationInfluencer__Array__Class** type_info = &type_info_ref;
        inline app::ColorVariationManager_IColorVariationInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationManager_IColorVariationInfluencer__Array__Class>(type_info, "", "ColorVariationManager+IColorVariationInfluencer[]");
        }
        inline app::ColorVariationManager_IColorVariationInfluencer__Array* create() {
            return il2cpp::create_object<app::ColorVariationManager_IColorVariationInfluencer__Array>(get_class());
        }
    } // namespace ColorVariationManager_IColorVariationInfluencer__Array
} // namespace app::classes::types
