#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Stack_StackEnumerator__Class.h>
#include <Modloader/app/structs/Stack_StackEnumerator.h>

namespace app::classes::types {
    namespace Stack_StackEnumerator {
        inline app::Stack_StackEnumerator__Class** type_info = (app::Stack_StackEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0470EE20));
        inline app::Stack_StackEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Stack_StackEnumerator__Class>(type_info, "System.Collections", "Stack", "StackEnumerator");
        }
        inline app::Stack_StackEnumerator* create() {
            return il2cpp::create_object<app::Stack_StackEnumerator>(get_class());
        }
    } // namespace Stack_StackEnumerator
} // namespace app::classes::types
