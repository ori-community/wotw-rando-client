#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectionalLightMaskModifier {
        namespace {
            inline app::DirectionalLightMaskModifier__Class* type_info_ref = nullptr;
        }
        inline app::DirectionalLightMaskModifier__Class** type_info = &type_info_ref;
        inline app::DirectionalLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::DirectionalLightMaskModifier__Class>(type_info, "", "DirectionalLightMaskModifier");
        }
        inline app::DirectionalLightMaskModifier* create() {
            return il2cpp::create_object<app::DirectionalLightMaskModifier>(get_class());
        }
    } // namespace DirectionalLightMaskModifier
} // namespace app::classes::types
