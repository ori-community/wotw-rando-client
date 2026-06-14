#pragma once
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/BlendAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation {
        inline app::BlendAnimation__Class** type_info() {
            static app::BlendAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlendAnimation__Class**)(modloader::win::memory::resolve_rva(0x0473FF00));
            }
            return cache;
        }
        inline app::BlendAnimation__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation__Class>(type_info(), "Moon", "BlendAnimation");
        }
        inline app::BlendAnimation* create() {
            return il2cpp::create_object<app::BlendAnimation>(get_class());
        }
    } // namespace BlendAnimation
} // namespace app::classes::types
