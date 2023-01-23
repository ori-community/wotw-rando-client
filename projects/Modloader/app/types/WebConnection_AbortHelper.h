#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebConnection_AbortHelper__Class.h>
#include <Modloader/app/structs/WebConnection_AbortHelper.h>

namespace app::classes::types {
    namespace WebConnection_AbortHelper {
        inline app::WebConnection_AbortHelper__Class** type_info = (app::WebConnection_AbortHelper__Class**)(modloader::win::memory::resolve_rva(0x0475C350));
        inline app::WebConnection_AbortHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnection_AbortHelper__Class>(type_info, "System.Net", "WebConnection", "AbortHelper");
        }
        inline app::WebConnection_AbortHelper* create() {
            return il2cpp::create_object<app::WebConnection_AbortHelper>(get_class());
        }
    } // namespace WebConnection_AbortHelper
} // namespace app::classes::types
