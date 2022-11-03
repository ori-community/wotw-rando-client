#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IteratorStateMachineAttribute {
        namespace {
            inline app::IteratorStateMachineAttribute__Class* type_info_ref = nullptr;
        }
        inline app::IteratorStateMachineAttribute__Class** type_info = &type_info_ref;
        inline app::IteratorStateMachineAttribute__Class* get_class() {
            return il2cpp::get_class<app::IteratorStateMachineAttribute__Class>(type_info, "System.Runtime.CompilerServices", "IteratorStateMachineAttribute");
        }
        inline app::IteratorStateMachineAttribute* create() {
            return il2cpp::create_object<app::IteratorStateMachineAttribute>(get_class());
        }
    } // namespace IteratorStateMachineAttribute
} // namespace app::classes::types
