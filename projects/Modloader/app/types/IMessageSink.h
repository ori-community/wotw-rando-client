#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMessageSink {
        inline app::IMessageSink__Class** type_info = (app::IMessageSink__Class**)(modloader::win::memory::resolve_rva(0x0478BC38));
        inline app::IMessageSink__Class* get_class() {
            return il2cpp::get_class<app::IMessageSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMessageSink");
        }
    } // namespace IMessageSink
} // namespace app::classes::types
