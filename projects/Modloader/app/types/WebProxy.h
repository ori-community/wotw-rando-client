#pragma once
#include <Modloader/app/structs/WebProxy.h>
#include <Modloader/app/structs/WebProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebProxy {
        inline app::WebProxy__Class** type_info() {
            static app::WebProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebProxy__Class**)(modloader::win::memory::resolve_rva(0x04729180));
            }
            return cache;
        }
        inline app::WebProxy__Class* get_class() {
            return il2cpp::get_class<app::WebProxy__Class>(type_info(), "System.Net", "WebProxy");
        }
        inline app::WebProxy* create() {
            return il2cpp::create_object<app::WebProxy>(get_class());
        }
    } // namespace WebProxy
} // namespace app::classes::types
