#pragma once
#include <Modloader/app/structs/IWebConnectionState.h>
#include <Modloader/app/structs/IWebConnectionState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWebConnectionState {
        inline app::IWebConnectionState__Class** type_info() {
            static app::IWebConnectionState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWebConnectionState__Class**)(modloader::win::memory::resolve_rva(0x0477D1E0));
            }
            return cache;
        }
        inline app::IWebConnectionState__Class* get_class() {
            return il2cpp::get_class<app::IWebConnectionState__Class>(type_info(), "System.Net", "IWebConnectionState");
        }
    } // namespace IWebConnectionState
} // namespace app::classes::types
