#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnapTrapHookVisuals {
        inline app::SnapTrapHookVisuals__Class** type_info = (app::SnapTrapHookVisuals__Class**)(modloader::win::memory::resolve_rva(0x0473B808));
        inline app::SnapTrapHookVisuals__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookVisuals__Class>(type_info, "", "SnapTrapHookVisuals");
        }
        inline app::SnapTrapHookVisuals* create() {
            return il2cpp::create_object<app::SnapTrapHookVisuals>(get_class());
        }
    } // namespace SnapTrapHookVisuals
} // namespace app::classes::types
