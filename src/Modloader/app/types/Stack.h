#pragma once
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/Stack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stack {
        inline app::Stack__Class** type_info() {
            static app::Stack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stack__Class**)(modloader::win::memory::resolve_rva(0x047622B8));
            }
            return cache;
        }
        inline app::Stack__Class* get_class() {
            return il2cpp::get_class<app::Stack__Class>(type_info(), "System.Collections", "Stack");
        }
        inline app::Stack* create() {
            return il2cpp::create_object<app::Stack>(get_class());
        }
    } // namespace Stack
} // namespace app::classes::types
