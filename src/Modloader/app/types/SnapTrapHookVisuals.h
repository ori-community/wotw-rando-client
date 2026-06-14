#pragma once
#include <Modloader/app/structs/SnapTrapHookVisuals.h>
#include <Modloader/app/structs/SnapTrapHookVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapHookVisuals {
        inline app::SnapTrapHookVisuals__Class** type_info() {
            static app::SnapTrapHookVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SnapTrapHookVisuals__Class**)(modloader::win::memory::resolve_rva(0x0473B808));
            }
            return cache;
        }
        inline app::SnapTrapHookVisuals__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookVisuals__Class>(type_info(), "", "SnapTrapHookVisuals");
        }
        inline app::SnapTrapHookVisuals* create() {
            return il2cpp::create_object<app::SnapTrapHookVisuals>(get_class());
        }
    } // namespace SnapTrapHookVisuals
} // namespace app::classes::types
