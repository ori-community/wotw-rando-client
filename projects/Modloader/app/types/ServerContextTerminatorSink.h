#pragma once
#include <Modloader/app/structs/ServerContextTerminatorSink.h>
#include <Modloader/app/structs/ServerContextTerminatorSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerContextTerminatorSink {
        inline app::ServerContextTerminatorSink__Class** type_info() {
            static app::ServerContextTerminatorSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerContextTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x04710B50));
            }
            return cache;
        }
        inline app::ServerContextTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::ServerContextTerminatorSink__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ServerContextTerminatorSink");
        }
        inline app::ServerContextTerminatorSink* create() {
            return il2cpp::create_object<app::ServerContextTerminatorSink>(get_class());
        }
    } // namespace ServerContextTerminatorSink
} // namespace app::classes::types
