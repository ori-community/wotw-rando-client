#pragma once
#include <Modloader/app/structs/BlendAnimation2D.h>
#include <Modloader/app/structs/BlendAnimation2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation2D {
        inline app::BlendAnimation2D__Class** type_info() {
            static app::BlendAnimation2D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlendAnimation2D__Class**)(modloader::win::memory::resolve_rva(0x0475C860));
            }
            return cache;
        }
        inline app::BlendAnimation2D__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation2D__Class>(type_info(), "Moon", "BlendAnimation2D");
        }
        inline app::BlendAnimation2D* create() {
            return il2cpp::create_object<app::BlendAnimation2D>(get_class());
        }
    } // namespace BlendAnimation2D
} // namespace app::classes::types
