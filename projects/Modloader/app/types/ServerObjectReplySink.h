#pragma once
#include <Modloader/app/structs/ServerObjectReplySink.h>
#include <Modloader/app/structs/ServerObjectReplySink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerObjectReplySink {
        inline app::ServerObjectReplySink__Class** type_info() {
            static app::ServerObjectReplySink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerObjectReplySink__Class**)(modloader::win::memory::resolve_rva(0x04704E28));
            }
            return cache;
        }
        inline app::ServerObjectReplySink__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectReplySink__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ServerObjectReplySink");
        }
        inline app::ServerObjectReplySink* create() {
            return il2cpp::create_object<app::ServerObjectReplySink>(get_class());
        }
    } // namespace ServerObjectReplySink
} // namespace app::classes::types
