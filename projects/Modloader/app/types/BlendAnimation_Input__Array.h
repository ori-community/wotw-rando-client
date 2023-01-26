#pragma once
#include <Modloader/app/structs/BlendAnimation_Input__Array.h>
#include <Modloader/app/structs/BlendAnimation_Input__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation_Input__Array {
        inline app::BlendAnimation_Input__Array__Class** type_info() {
            static app::BlendAnimation_Input__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlendAnimation_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x0475BF90));
            }
            return cache;
        }
        inline app::BlendAnimation_Input__Array__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation_Input__Array__Class>(type_info(), "Moon", "BlendAnimation+Input[]");
        }
        inline app::BlendAnimation_Input__Array* create() {
            return il2cpp::create_object<app::BlendAnimation_Input__Array>(get_class());
        }
    } // namespace BlendAnimation_Input__Array
} // namespace app::classes::types
