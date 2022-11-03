#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteAnimator {
        namespace {
            inline app::SpriteAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SpriteAnimator__Class** type_info = &type_info_ref;
        inline app::SpriteAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimator__Class>(type_info, "", "SpriteAnimator");
        }
        inline app::SpriteAnimator* create() {
            return il2cpp::create_object<app::SpriteAnimator>(get_class());
        }
        inline app::SpriteAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::SpriteAnimator__Array>(get_class(), size);
        }
        inline app::SpriteAnimator__Array* create_array(const std::vector<app::SpriteAnimator*>& items) {
            return il2cpp::array_new<app::SpriteAnimator__Array>(get_class(), items);
        }
    } // namespace SpriteAnimator
} // namespace app::classes::types
