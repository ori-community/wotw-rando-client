#pragma once
#include <Modloader/app/structs/INightBerrySpiritRingReciever.h>
#include <Modloader/app/structs/INightBerrySpiritRingReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INightBerrySpiritRingReciever {
        inline app::INightBerrySpiritRingReciever__Class** type_info() {
            static app::INightBerrySpiritRingReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INightBerrySpiritRingReciever__Class**)(modloader::win::memory::resolve_rva(0x04736F38));
            }
            return cache;
        }
        inline app::INightBerrySpiritRingReciever__Class* get_class() {
            return il2cpp::get_class<app::INightBerrySpiritRingReciever__Class>(type_info(), "", "INightBerrySpiritRingReciever");
        }
    } // namespace INightBerrySpiritRingReciever
} // namespace app::classes::types
