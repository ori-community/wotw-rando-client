#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DialogHandler_DialogCallback {
        inline app::DialogHandler_DialogCallback__Class** type_info = (app::DialogHandler_DialogCallback__Class**)(modloader::win::memory::resolve_rva(0x04723F08));
        inline app::DialogHandler_DialogCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogHandler_DialogCallback__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DialogHandler", "DialogCallback");
        }
        inline app::DialogHandler_DialogCallback* create() {
            return il2cpp::create_object<app::DialogHandler_DialogCallback>(get_class());
        }
    } // namespace DialogHandler_DialogCallback
} // namespace app::classes::types
