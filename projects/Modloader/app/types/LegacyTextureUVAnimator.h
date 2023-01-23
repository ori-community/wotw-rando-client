#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyTextureUVAnimator__Class.h>
#include <Modloader/app/structs/LegacyTextureUVAnimator.h>

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
