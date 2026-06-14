#pragma once
#include <Modloader/app/structs/SnapTrapHookLogic.h>
#include <Modloader/app/structs/SnapTrapHookLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapHookLogic {
        inline app::SnapTrapHookLogic__Class** type_info() {
            static app::SnapTrapHookLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnapTrapHookLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnapTrapHookLogic__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookLogic__Class>(type_info(), "", "SnapTrapHookLogic");
        }
        inline app::SnapTrapHookLogic* create() {
            return il2cpp::create_object<app::SnapTrapHookLogic>(get_class());
        }
    } // namespace SnapTrapHookLogic
} // namespace app::classes::types
