#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpriteTransparencyAnimator__Class.h>
#include <Modloader/app/structs/SpriteTransparencyAnimator.h>

namespace app::classes::types {
    namespace SpriteTransparencyAnimator {
        namespace {
            inline app::SpriteTransparencyAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SpriteTransparencyAnimator__Class** type_info = &type_info_ref;
        inline app::SpriteTransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpriteTransparencyAnimator__Class>(type_info, "Moon.Timeline", "SpriteTransparencyAnimator");
        }
        inline app::SpriteTransparencyAnimator* create() {
            return il2cpp::create_object<app::SpriteTransparencyAnimator>(get_class());
        }
    } // namespace SpriteTransparencyAnimator
} // namespace app::classes::types
