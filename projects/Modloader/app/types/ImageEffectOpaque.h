#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ImageEffectOpaque__Class.h>
#include <Modloader/app/structs/ImageEffectOpaque.h>

namespace app::classes::types {
    namespace ImageEffectOpaque {
        namespace {
            inline app::ImageEffectOpaque__Class* type_info_ref = nullptr;
        }
        inline app::ImageEffectOpaque__Class** type_info = &type_info_ref;
        inline app::ImageEffectOpaque__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectOpaque__Class>(type_info, "UnityEngine", "ImageEffectOpaque");
        }
        inline app::ImageEffectOpaque* create() {
            return il2cpp::create_object<app::ImageEffectOpaque>(get_class());
        }
    } // namespace ImageEffectOpaque
} // namespace app::classes::types
