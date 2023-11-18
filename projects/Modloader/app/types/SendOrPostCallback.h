#pragma once
#include <Modloader/app/structs/SendOrPostCallback.h>
#include <Modloader/app/structs/SendOrPostCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendOrPostCallback {
        inline app::SendOrPostCallback__Class** type_info() {
            static app::SendOrPostCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendOrPostCallback__Class**)(modloader::win::memory::resolve_rva(0x0470E2A0));
            }
            return cache;
        }
        inline app::SendOrPostCallback__Class* get_class() {
            return il2cpp::get_class<app::SendOrPostCallback__Class>(type_info(), "System.Threading", "SendOrPostCallback");
        }
        inline app::SendOrPostCallback* create() {
            return il2cpp::create_object<app::SendOrPostCallback>(get_class());
        }
    } // namespace SendOrPostCallback
} // namespace app::classes::types
