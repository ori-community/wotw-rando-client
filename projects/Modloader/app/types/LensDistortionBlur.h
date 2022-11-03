#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LensDistortionBlur {
        namespace {
            inline app::LensDistortionBlur__Class* type_info_ref = nullptr;
        }
        inline app::LensDistortionBlur__Class** type_info = &type_info_ref;
        inline app::LensDistortionBlur__Class* get_class() {
            return il2cpp::get_class<app::LensDistortionBlur__Class>(type_info, "Colorful", "LensDistortionBlur");
        }
        inline app::LensDistortionBlur* create() {
            return il2cpp::create_object<app::LensDistortionBlur>(get_class());
        }
    } // namespace LensDistortionBlur
} // namespace app::classes::types
