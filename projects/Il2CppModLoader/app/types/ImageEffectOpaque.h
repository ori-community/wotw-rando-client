#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
