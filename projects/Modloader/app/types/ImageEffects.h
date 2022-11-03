#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ImageEffects {
        namespace {
            inline app::ImageEffects__Class* type_info_ref = nullptr;
        }
        inline app::ImageEffects__Class** type_info = &type_info_ref;
        inline app::ImageEffects__Class* get_class() {
            return il2cpp::get_class<app::ImageEffects__Class>(type_info, "UnityStandardAssets.ImageEffects", "ImageEffects");
        }
        inline app::ImageEffects* create() {
            return il2cpp::create_object<app::ImageEffects>(get_class());
        }
    } // namespace ImageEffects
} // namespace app::classes::types
