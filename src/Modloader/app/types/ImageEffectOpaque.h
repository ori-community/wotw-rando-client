#pragma once
#include <Modloader/app/structs/ImageEffectOpaque.h>
#include <Modloader/app/structs/ImageEffectOpaque__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImageEffectOpaque {
        inline app::ImageEffectOpaque__Class** type_info() {
            static app::ImageEffectOpaque__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImageEffectOpaque__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImageEffectOpaque__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectOpaque__Class>(type_info(), "UnityEngine", "ImageEffectOpaque");
        }
        inline app::ImageEffectOpaque* create() {
            return il2cpp::create_object<app::ImageEffectOpaque>(get_class());
        }
    } // namespace ImageEffectOpaque
} // namespace app::classes::types
