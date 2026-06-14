#pragma once
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/IMessageSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMessageSink {
        inline app::IMessageSink__Class** type_info() {
            static app::IMessageSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMessageSink__Class**)(modloader::win::memory::resolve_rva(0x0478BC38));
            }
            return cache;
        }
        inline app::IMessageSink__Class* get_class() {
            return il2cpp::get_class<app::IMessageSink__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IMessageSink");
        }
    } // namespace IMessageSink
} // namespace app::classes::types
