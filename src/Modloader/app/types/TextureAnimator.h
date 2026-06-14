#pragma once
#include <Modloader/app/structs/TextureAnimator.h>
#include <Modloader/app/structs/TextureAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimator {
        inline app::TextureAnimator__Class** type_info() {
            static app::TextureAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextureAnimator__Class**)(modloader::win::memory::resolve_rva(0x04711FC8));
            }
            return cache;
        }
        inline app::TextureAnimator__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimator__Class>(type_info(), "", "TextureAnimator");
        }
        inline app::TextureAnimator* create() {
            return il2cpp::create_object<app::TextureAnimator>(get_class());
        }
    } // namespace TextureAnimator
} // namespace app::classes::types
