#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStickyMineNoticer {
        inline app::IStickyMineNoticer__Class** type_info = (app::IStickyMineNoticer__Class**)(modloader::win::memory::resolve_rva(0x04746F80));
        inline app::IStickyMineNoticer__Class* get_class() {
            return il2cpp::get_class<app::IStickyMineNoticer__Class>(type_info, "", "IStickyMineNoticer");
        }
    } // namespace IStickyMineNoticer
} // namespace app::classes::types
