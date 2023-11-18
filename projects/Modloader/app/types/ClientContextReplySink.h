#pragma once
#include <Modloader/app/structs/ClientContextReplySink.h>
#include <Modloader/app/structs/ClientContextReplySink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientContextReplySink {
        inline app::ClientContextReplySink__Class** type_info() {
            static app::ClientContextReplySink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientContextReplySink__Class**)(modloader::win::memory::resolve_rva(0x0472C518));
            }
            return cache;
        }
        inline app::ClientContextReplySink__Class* get_class() {
            return il2cpp::get_class<app::ClientContextReplySink__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ClientContextReplySink");
        }
        inline app::ClientContextReplySink* create() {
            return il2cpp::create_object<app::ClientContextReplySink>(get_class());
        }
    } // namespace ClientContextReplySink
} // namespace app::classes::types
