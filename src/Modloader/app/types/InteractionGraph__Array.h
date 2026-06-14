#pragma once
#include <Modloader/app/structs/InteractionGraph__Array.h>
#include <Modloader/app/structs/InteractionGraph__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionGraph__Array {
        inline app::InteractionGraph__Array__Class** type_info() {
            static app::InteractionGraph__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionGraph__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionGraph__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionGraph__Array__Class>(type_info(), "Moon.InteractionGraph", "InteractionGraph[]");
        }
        inline app::InteractionGraph__Array* create() {
            return il2cpp::create_object<app::InteractionGraph__Array>(get_class());
        }
    } // namespace InteractionGraph__Array
} // namespace app::classes::types
