#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VignetteAndChromaticAberration__Class.h>
#include <Modloader/app/structs/VignetteAndChromaticAberration.h>

namespace app::classes::types {
    namespace VignetteAndChromaticAberration {
        namespace {
            inline app::VignetteAndChromaticAberration__Class* type_info_ref = nullptr;
        }
        inline app::VignetteAndChromaticAberration__Class** type_info = &type_info_ref;
        inline app::VignetteAndChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::VignetteAndChromaticAberration__Class>(type_info, "UnityStandardAssets.ImageEffects", "VignetteAndChromaticAberration");
        }
        inline app::VignetteAndChromaticAberration* create() {
            return il2cpp::create_object<app::VignetteAndChromaticAberration>(get_class());
        }
    } // namespace VignetteAndChromaticAberration
} // namespace app::classes::types
