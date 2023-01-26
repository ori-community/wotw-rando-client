#pragma once
#include <Modloader/app/structs/LayeredAnimation_Input__Array.h>
#include <Modloader/app/structs/LayeredAnimation_Input__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayeredAnimation_Input__Array {
        inline app::LayeredAnimation_Input__Array__Class** type_info() {
            static app::LayeredAnimation_Input__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LayeredAnimation_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x04781E68));
            }
            return cache;
        }
        inline app::LayeredAnimation_Input__Array__Class* get_class() {
            return il2cpp::get_class<app::LayeredAnimation_Input__Array__Class>(type_info(), "Moon", "LayeredAnimation+Input[]");
        }
        inline app::LayeredAnimation_Input__Array* create() {
            return il2cpp::create_object<app::LayeredAnimation_Input__Array>(get_class());
        }
    } // namespace LayeredAnimation_Input__Array
} // namespace app::classes::types
