#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigHandler {
        inline app::ConfigHandler__Class** type_info = (app::ConfigHandler__Class**)(modloader::win::memory::resolve_rva(0x04758408));
        inline app::ConfigHandler__Class* get_class() {
            return il2cpp::get_class<app::ConfigHandler__Class>(type_info, "System.Runtime.Remoting", "ConfigHandler");
        }
        inline app::ConfigHandler* create() {
            return il2cpp::create_object<app::ConfigHandler>(get_class());
        }
    } // namespace ConfigHandler
} // namespace app::classes::types
