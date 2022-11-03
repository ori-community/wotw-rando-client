#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInterruptState__Array {
        namespace {
            inline app::IInterruptState__Array__Class* type_info_ref = nullptr;
        }
        inline app::IInterruptState__Array__Class** type_info = &type_info_ref;
        inline app::IInterruptState__Array__Class* get_class() {
            return il2cpp::get_class<app::IInterruptState__Array__Class>(type_info, "Moon.FSM", "IInterruptState[]");
        }
        inline app::IInterruptState__Array* create() {
            return il2cpp::create_object<app::IInterruptState__Array>(get_class());
        }
    } // namespace IInterruptState__Array
} // namespace app::classes::types
