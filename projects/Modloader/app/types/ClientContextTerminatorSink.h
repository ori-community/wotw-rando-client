#pragma once
#include <Modloader/app/structs/ClientContextTerminatorSink.h>
#include <Modloader/app/structs/ClientContextTerminatorSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientContextTerminatorSink {
        inline app::ClientContextTerminatorSink__Class** type_info() {
            static app::ClientContextTerminatorSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientContextTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x047313F0));
            }
            return cache;
        }
        inline app::ClientContextTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::ClientContextTerminatorSink__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ClientContextTerminatorSink");
        }
        inline app::ClientContextTerminatorSink* create() {
            return il2cpp::create_object<app::ClientContextTerminatorSink>(get_class());
        }
    } // namespace ClientContextTerminatorSink
} // namespace app::classes::types
