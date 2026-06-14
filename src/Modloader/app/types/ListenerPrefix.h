#pragma once
#include <Modloader/app/structs/ListenerPrefix.h>
#include <Modloader/app/structs/ListenerPrefix__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListenerPrefix {
        inline app::ListenerPrefix__Class** type_info() {
            static app::ListenerPrefix__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListenerPrefix__Class**)(modloader::win::memory::resolve_rva(0x04744868));
            }
            return cache;
        }
        inline app::ListenerPrefix__Class* get_class() {
            return il2cpp::get_class<app::ListenerPrefix__Class>(type_info(), "System.Net", "ListenerPrefix");
        }
        inline app::ListenerPrefix* create() {
            return il2cpp::create_object<app::ListenerPrefix>(get_class());
        }
    } // namespace ListenerPrefix
} // namespace app::classes::types
