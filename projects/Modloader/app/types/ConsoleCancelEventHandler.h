#pragma once
#include <Modloader/app/structs/ConsoleCancelEventHandler.h>
#include <Modloader/app/structs/ConsoleCancelEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleCancelEventHandler {
        inline app::ConsoleCancelEventHandler__Class** type_info() {
            static app::ConsoleCancelEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsoleCancelEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04743B00));
            }
            return cache;
        }
        inline app::ConsoleCancelEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ConsoleCancelEventHandler__Class>(type_info(), "System", "ConsoleCancelEventHandler");
        }
        inline app::ConsoleCancelEventHandler* create() {
            return il2cpp::create_object<app::ConsoleCancelEventHandler>(get_class());
        }
    } // namespace ConsoleCancelEventHandler
} // namespace app::classes::types
