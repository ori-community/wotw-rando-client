#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetSpriteAnimator__Class.h>
#include <Modloader/app/structs/SetSpriteAnimator.h>

namespace app::classes::types {
    namespace SetSpriteAnimator {
        namespace {
            inline app::SetSpriteAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SetSpriteAnimator__Class** type_info = &type_info_ref;
        inline app::SetSpriteAnimator__Class* get_class() {
            return il2cpp::get_class<app::SetSpriteAnimator__Class>(type_info, "", "SetSpriteAnimator");
        }
        inline app::SetSpriteAnimator* create() {
            return il2cpp::create_object<app::SetSpriteAnimator>(get_class());
        }
    } // namespace SetSpriteAnimator
} // namespace app::classes::types
