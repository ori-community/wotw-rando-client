#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceSpectateState {
        inline app::RaceSpectateState__Class** type_info = (app::RaceSpectateState__Class**)(modloader::win::memory::resolve_rva(0x04770B48));
        inline app::RaceSpectateState__Class* get_class() {
            return il2cpp::get_class<app::RaceSpectateState__Class>(type_info, "", "RaceSpectateState");
        }
        inline app::RaceSpectateState* create() {
            return il2cpp::create_object<app::RaceSpectateState>(get_class());
        }
    } // namespace RaceSpectateState
} // namespace app::classes::types
