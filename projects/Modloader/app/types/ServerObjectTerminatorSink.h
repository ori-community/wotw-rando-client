#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerObjectTerminatorSink {
        inline app::ServerObjectTerminatorSink__Class** type_info = (app::ServerObjectTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x04755268));
        inline app::ServerObjectTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectTerminatorSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "ServerObjectTerminatorSink");
        }
        inline app::ServerObjectTerminatorSink* create() {
            return il2cpp::create_object<app::ServerObjectTerminatorSink>(get_class());
        }
    } // namespace ServerObjectTerminatorSink
} // namespace app::classes::types
