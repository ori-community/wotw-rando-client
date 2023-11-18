#pragma once
#include <Modloader/app/structs/IRespawnReciever.h>
#include <Modloader/app/structs/IRespawnReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRespawnReciever {
        inline app::IRespawnReciever__Class** type_info() {
            static app::IRespawnReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRespawnReciever__Class**)(modloader::win::memory::resolve_rva(0x04796AC0));
            }
            return cache;
        }
        inline app::IRespawnReciever__Class* get_class() {
            return il2cpp::get_class<app::IRespawnReciever__Class>(type_info(), "", "IRespawnReciever");
        }
    } // namespace IRespawnReciever
} // namespace app::classes::types
