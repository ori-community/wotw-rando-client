#pragma once
#include <Modloader/app/structs/IStickyMineNoticer.h>
#include <Modloader/app/structs/IStickyMineNoticer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStickyMineNoticer {
        inline app::IStickyMineNoticer__Class** type_info() {
            static app::IStickyMineNoticer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStickyMineNoticer__Class**)(modloader::win::memory::resolve_rva(0x04746F80));
            }
            return cache;
        }
        inline app::IStickyMineNoticer__Class* get_class() {
            return il2cpp::get_class<app::IStickyMineNoticer__Class>(type_info(), "", "IStickyMineNoticer");
        }
    } // namespace IStickyMineNoticer
} // namespace app::classes::types
