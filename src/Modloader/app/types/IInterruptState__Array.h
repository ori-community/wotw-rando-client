#pragma once
#include <Modloader/app/structs/IInterruptState__Array.h>
#include <Modloader/app/structs/IInterruptState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInterruptState__Array {
        inline app::IInterruptState__Array__Class** type_info() {
            static app::IInterruptState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInterruptState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInterruptState__Array__Class* get_class() {
            return il2cpp::get_class<app::IInterruptState__Array__Class>(type_info(), "Moon.FSM", "IInterruptState[]");
        }
        inline app::IInterruptState__Array* create() {
            return il2cpp::create_object<app::IInterruptState__Array>(get_class());
        }
    } // namespace IInterruptState__Array
} // namespace app::classes::types
