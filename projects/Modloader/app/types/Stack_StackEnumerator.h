#pragma once
#include <Modloader/app/structs/Stack_StackEnumerator.h>
#include <Modloader/app/structs/Stack_StackEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stack_StackEnumerator {
        inline app::Stack_StackEnumerator__Class** type_info() {
            static app::Stack_StackEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stack_StackEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0470EE20));
            }
            return cache;
        }
        inline app::Stack_StackEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Stack_StackEnumerator__Class>(type_info(), "System.Collections", "Stack", "StackEnumerator");
        }
        inline app::Stack_StackEnumerator* create() {
            return il2cpp::create_object<app::Stack_StackEnumerator>(get_class());
        }
    } // namespace Stack_StackEnumerator
} // namespace app::classes::types
