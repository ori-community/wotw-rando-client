#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointLightMaskModifier__Array {
        namespace {
            inline app::PointLightMaskModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::PointLightMaskModifier__Array__Class** type_info = &type_info_ref;
        inline app::PointLightMaskModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::PointLightMaskModifier__Array__Class>(type_info, "", "PointLightMaskModifier[]");
        }
        inline app::PointLightMaskModifier__Array* create() {
            return il2cpp::create_object<app::PointLightMaskModifier__Array>(get_class());
        }
    } // namespace PointLightMaskModifier__Array
} // namespace app::classes::types
