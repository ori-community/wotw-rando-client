#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ImageEffectTransformsToLDR__Class.h>
#include <Modloader/app/structs/ImageEffectTransformsToLDR.h>

namespace app::classes::types {
    namespace ImageEffectTransformsToLDR {
        namespace {
            inline app::ImageEffectTransformsToLDR__Class* type_info_ref = nullptr;
        }
        inline app::ImageEffectTransformsToLDR__Class** type_info = &type_info_ref;
        inline app::ImageEffectTransformsToLDR__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectTransformsToLDR__Class>(type_info, "UnityEngine", "ImageEffectTransformsToLDR");
        }
        inline app::ImageEffectTransformsToLDR* create() {
            return il2cpp::create_object<app::ImageEffectTransformsToLDR>(get_class());
        }
    } // namespace ImageEffectTransformsToLDR
} // namespace app::classes::types
