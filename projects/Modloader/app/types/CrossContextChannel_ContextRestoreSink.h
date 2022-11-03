#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossContextChannel_ContextRestoreSink {
        inline app::CrossContextChannel_ContextRestoreSink__Class** type_info = (app::CrossContextChannel_ContextRestoreSink__Class**)(modloader::win::memory::resolve_rva(0x04781A10));
        inline app::CrossContextChannel_ContextRestoreSink__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossContextChannel_ContextRestoreSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "CrossContextChannel", "ContextRestoreSink");
        }
        inline app::CrossContextChannel_ContextRestoreSink* create() {
            return il2cpp::create_object<app::CrossContextChannel_ContextRestoreSink>(get_class());
        }
    } // namespace CrossContextChannel_ContextRestoreSink
} // namespace app::classes::types
