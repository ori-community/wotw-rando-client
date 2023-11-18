#pragma once
#include <Modloader/app/structs/WebConnection_AbortHelper.h>
#include <Modloader/app/structs/WebConnection_AbortHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnection_AbortHelper {
        inline app::WebConnection_AbortHelper__Class** type_info() {
            static app::WebConnection_AbortHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebConnection_AbortHelper__Class**)(modloader::win::memory::resolve_rva(0x0475C350));
            }
            return cache;
        }
        inline app::WebConnection_AbortHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnection_AbortHelper__Class>(type_info(), "System.Net", "WebConnection", "AbortHelper");
        }
        inline app::WebConnection_AbortHelper* create() {
            return il2cpp::create_object<app::WebConnection_AbortHelper>(get_class());
        }
    } // namespace WebConnection_AbortHelper
} // namespace app::classes::types
