#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INightBerrySpiritRingReciever {
        inline app::INightBerrySpiritRingReciever__Class** type_info = (app::INightBerrySpiritRingReciever__Class**)(modloader::win::memory::resolve_rva(0x04736F38));
        inline app::INightBerrySpiritRingReciever__Class* get_class() {
            return il2cpp::get_class<app::INightBerrySpiritRingReciever__Class>(type_info, "", "INightBerrySpiritRingReciever");
        }
    } // namespace INightBerrySpiritRingReciever
} // namespace app::classes::types
