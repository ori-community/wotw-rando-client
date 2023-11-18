#pragma once
#include <Modloader/app/structs/ConsoleCancelEventArgs.h>
#include <Modloader/app/structs/ConsoleCancelEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleCancelEventArgs {
        inline app::ConsoleCancelEventArgs__Class** type_info() {
            static app::ConsoleCancelEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsoleCancelEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476C328));
            }
            return cache;
        }
        inline app::ConsoleCancelEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ConsoleCancelEventArgs__Class>(type_info(), "System", "ConsoleCancelEventArgs");
        }
        inline app::ConsoleCancelEventArgs* create() {
            return il2cpp::create_object<app::ConsoleCancelEventArgs>(get_class());
        }
    } // namespace ConsoleCancelEventArgs
} // namespace app::classes::types
