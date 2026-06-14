#pragma once
#include <Modloader/app/structs/IInputTransition__Array.h>
#include <Modloader/app/structs/IInputTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInputTransition__Array {
        inline app::IInputTransition__Array__Class** type_info() {
            static app::IInputTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInputTransition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInputTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IInputTransition__Array__Class>(type_info(), "Moon.InteractionGraph", "IInputTransition[]");
        }
        inline app::IInputTransition__Array* create() {
            return il2cpp::create_object<app::IInputTransition__Array>(get_class());
        }
    } // namespace IInputTransition__Array
} // namespace app::classes::types
