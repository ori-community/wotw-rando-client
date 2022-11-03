#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeashHookVisuals {
        inline app::LeashHookVisuals__Class** type_info = (app::LeashHookVisuals__Class**)(modloader::win::memory::resolve_rva(0x047417A8));
        inline app::LeashHookVisuals__Class* get_class() {
            return il2cpp::get_class<app::LeashHookVisuals__Class>(type_info, "", "LeashHookVisuals");
        }
        inline app::LeashHookVisuals* create() {
            return il2cpp::create_object<app::LeashHookVisuals>(get_class());
        }
    } // namespace LeashHookVisuals
} // namespace app::classes::types
