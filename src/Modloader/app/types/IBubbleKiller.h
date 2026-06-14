#pragma once
#include <Modloader/app/structs/IBubbleKiller.h>
#include <Modloader/app/structs/IBubbleKiller__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBubbleKiller {
        inline app::IBubbleKiller__Class** type_info() {
            static app::IBubbleKiller__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBubbleKiller__Class**)(modloader::win::memory::resolve_rva(0x047383E8));
            }
            return cache;
        }
        inline app::IBubbleKiller__Class* get_class() {
            return il2cpp::get_class<app::IBubbleKiller__Class>(type_info(), "", "IBubbleKiller");
        }
    } // namespace IBubbleKiller
} // namespace app::classes::types
