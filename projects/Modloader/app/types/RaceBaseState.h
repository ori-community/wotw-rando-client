#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceBaseState {
        inline app::RaceBaseState__Class** type_info = (app::RaceBaseState__Class**)(modloader::win::memory::resolve_rva(0x04709B38));
        inline app::RaceBaseState__Class* get_class() {
            return il2cpp::get_class<app::RaceBaseState__Class>(type_info, "", "RaceBaseState");
        }
        inline app::RaceBaseState* create() {
            return il2cpp::create_object<app::RaceBaseState>(get_class());
        }
    } // namespace RaceBaseState
} // namespace app::classes::types
