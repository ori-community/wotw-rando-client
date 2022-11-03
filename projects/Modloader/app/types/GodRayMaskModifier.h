#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GodRayMaskModifier {
        namespace {
            inline app::GodRayMaskModifier__Class* type_info_ref = nullptr;
        }
        inline app::GodRayMaskModifier__Class** type_info = &type_info_ref;
        inline app::GodRayMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::GodRayMaskModifier__Class>(type_info, "", "GodRayMaskModifier");
        }
        inline app::GodRayMaskModifier* create() {
            return il2cpp::create_object<app::GodRayMaskModifier>(get_class());
        }
    } // namespace GodRayMaskModifier
} // namespace app::classes::types
