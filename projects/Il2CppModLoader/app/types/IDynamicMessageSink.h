#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDynamicMessageSink {
        inline app::IDynamicMessageSink__Class** type_info = (app::IDynamicMessageSink__Class**)(modloader::win::memory::resolve_rva(0x047099E8));
        inline app::IDynamicMessageSink__Class* get_class() {
            return il2cpp::get_class<app::IDynamicMessageSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
        }
    } // namespace IDynamicMessageSink
} // namespace app::classes::types
