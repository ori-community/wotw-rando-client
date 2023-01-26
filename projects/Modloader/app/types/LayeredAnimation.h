#pragma once
#include <Modloader/app/structs/LayeredAnimation.h>
#include <Modloader/app/structs/LayeredAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayeredAnimation {
        inline app::LayeredAnimation__Class** type_info() {
            static app::LayeredAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LayeredAnimation__Class**)(modloader::win::memory::resolve_rva(0x04724AD0));
            }
            return cache;
        }
        inline app::LayeredAnimation__Class* get_class() {
            return il2cpp::get_class<app::LayeredAnimation__Class>(type_info(), "Moon", "LayeredAnimation");
        }
        inline app::LayeredAnimation* create() {
            return il2cpp::create_object<app::LayeredAnimation>(get_class());
        }
    } // namespace LayeredAnimation
} // namespace app::classes::types
