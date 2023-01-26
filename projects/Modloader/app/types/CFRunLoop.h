#pragma once
#include <Modloader/app/structs/CFRunLoop.h>
#include <Modloader/app/structs/CFRunLoop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFRunLoop {
        inline app::CFRunLoop__Class** type_info() {
            static app::CFRunLoop__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFRunLoop__Class**)(modloader::win::memory::resolve_rva(0x04718470));
            }
            return cache;
        }
        inline app::CFRunLoop__Class* get_class() {
            return il2cpp::get_class<app::CFRunLoop__Class>(type_info(), "Mono.Net", "CFRunLoop");
        }
        inline app::CFRunLoop* create() {
            return il2cpp::create_object<app::CFRunLoop>(get_class());
        }
    } // namespace CFRunLoop
} // namespace app::classes::types
