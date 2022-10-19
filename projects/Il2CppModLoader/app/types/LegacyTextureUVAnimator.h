#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTextureUVAnimator {
        namespace {
            inline app::LegacyTextureUVAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTextureUVAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyTextureUVAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTextureUVAnimator__Class>(type_info, "", "LegacyTextureUVAnimator");
        }
        inline app::LegacyTextureUVAnimator* create() {
            return il2cpp::create_object<app::LegacyTextureUVAnimator>(get_class());
        }
    } // namespace LegacyTextureUVAnimator
} // namespace app::classes::types
