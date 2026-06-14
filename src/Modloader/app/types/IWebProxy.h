#pragma once
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/IWebProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWebProxy {
        inline app::IWebProxy__Class** type_info() {
            static app::IWebProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWebProxy__Class**)(modloader::win::memory::resolve_rva(0x0470EE08));
            }
            return cache;
        }
        inline app::IWebProxy__Class* get_class() {
            return il2cpp::get_class<app::IWebProxy__Class>(type_info(), "System.Net", "IWebProxy");
        }
    } // namespace IWebProxy
} // namespace app::classes::types
