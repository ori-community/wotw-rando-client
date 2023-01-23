#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IBrowserUI__Class.h>

namespace app::classes::types {
    namespace IBrowserUI {
        inline app::IBrowserUI__Class** type_info = (app::IBrowserUI__Class**)(modloader::win::memory::resolve_rva(0x04724ED0));
        inline app::IBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::IBrowserUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IBrowserUI");
        }
    } // namespace IBrowserUI
} // namespace app::classes::types
