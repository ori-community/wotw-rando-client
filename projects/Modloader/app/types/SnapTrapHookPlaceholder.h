#pragma once
#include <Modloader/app/structs/SnapTrapHookPlaceholder.h>
#include <Modloader/app/structs/SnapTrapHookPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapHookPlaceholder {
        inline app::SnapTrapHookPlaceholder__Class** type_info() {
            static app::SnapTrapHookPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnapTrapHookPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnapTrapHookPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookPlaceholder__Class>(type_info(), "", "SnapTrapHookPlaceholder");
        }
        inline app::SnapTrapHookPlaceholder* create() {
            return il2cpp::create_object<app::SnapTrapHookPlaceholder>(get_class());
        }
    } // namespace SnapTrapHookPlaceholder
} // namespace app::classes::types
