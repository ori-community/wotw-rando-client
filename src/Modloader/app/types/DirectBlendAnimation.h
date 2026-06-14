#pragma once
#include <Modloader/app/structs/DirectBlendAnimation.h>
#include <Modloader/app/structs/DirectBlendAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectBlendAnimation {
        inline app::DirectBlendAnimation__Class** type_info() {
            static app::DirectBlendAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DirectBlendAnimation__Class**)(modloader::win::memory::resolve_rva(0x0472A9B0));
            }
            return cache;
        }
        inline app::DirectBlendAnimation__Class* get_class() {
            return il2cpp::get_class<app::DirectBlendAnimation__Class>(type_info(), "Moon", "DirectBlendAnimation");
        }
        inline app::DirectBlendAnimation* create() {
            return il2cpp::create_object<app::DirectBlendAnimation>(get_class());
        }
    } // namespace DirectBlendAnimation
} // namespace app::classes::types
