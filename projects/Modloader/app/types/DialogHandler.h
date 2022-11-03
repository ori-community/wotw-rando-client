#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DialogHandler {
        inline app::DialogHandler__Class** type_info = (app::DialogHandler__Class**)(modloader::win::memory::resolve_rva(0x0473B4E0));
        inline app::DialogHandler__Class* get_class() {
            return il2cpp::get_class<app::DialogHandler__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DialogHandler");
        }
        inline app::DialogHandler* create() {
            return il2cpp::create_object<app::DialogHandler>(get_class());
        }
    } // namespace DialogHandler
} // namespace app::classes::types
