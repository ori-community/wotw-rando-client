#pragma once
#include <Modloader/app/structs/BlendAnimation2D_Input__Array.h>
#include <Modloader/app/structs/BlendAnimation2D_Input__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation2D_Input__Array {
        inline app::BlendAnimation2D_Input__Array__Class** type_info() {
            static app::BlendAnimation2D_Input__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlendAnimation2D_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x0471EE30));
            }
            return cache;
        }
        inline app::BlendAnimation2D_Input__Array__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation2D_Input__Array__Class>(type_info(), "Moon", "BlendAnimation2D+Input[]");
        }
        inline app::BlendAnimation2D_Input__Array* create() {
            return il2cpp::create_object<app::BlendAnimation2D_Input__Array>(get_class());
        }
    } // namespace BlendAnimation2D_Input__Array
} // namespace app::classes::types
