#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvoyTerminatorSink__Class.h>
#include <Modloader/app/structs/EnvoyTerminatorSink.h>

namespace app::classes::types {
    namespace EnvoyTerminatorSink {
        inline app::EnvoyTerminatorSink__Class** type_info = (app::EnvoyTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x04750088));
        inline app::EnvoyTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::EnvoyTerminatorSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink");
        }
        inline app::EnvoyTerminatorSink* create() {
            return il2cpp::create_object<app::EnvoyTerminatorSink>(get_class());
        }
    } // namespace EnvoyTerminatorSink
} // namespace app::classes::types
