#pragma once
#include <Modloader/app/structs/BlendAnimation2D_InputContainer__Array.h>
#include <Modloader/app/structs/BlendAnimation2D_InputContainer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation2D_InputContainer__Array {
        inline app::BlendAnimation2D_InputContainer__Array__Class** type_info() {
            static app::BlendAnimation2D_InputContainer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendAnimation2D_InputContainer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendAnimation2D_InputContainer__Array__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation2D_InputContainer__Array__Class>(type_info(), "Moon", "BlendAnimation2D+InputContainer[]");
        }
        inline app::BlendAnimation2D_InputContainer__Array* create() {
            return il2cpp::create_object<app::BlendAnimation2D_InputContainer__Array>(get_class());
        }
    } // namespace BlendAnimation2D_InputContainer__Array
} // namespace app::classes::types
