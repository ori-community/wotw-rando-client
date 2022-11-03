#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWebConnectionState {
        inline app::IWebConnectionState__Class** type_info = (app::IWebConnectionState__Class**)(modloader::win::memory::resolve_rva(0x0477D1E0));
        inline app::IWebConnectionState__Class* get_class() {
            return il2cpp::get_class<app::IWebConnectionState__Class>(type_info, "System.Net", "IWebConnectionState");
        }
    } // namespace IWebConnectionState
} // namespace app::classes::types
