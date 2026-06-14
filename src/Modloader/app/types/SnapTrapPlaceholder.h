#pragma once
#include <Modloader/app/structs/SnapTrapPlaceholder.h>
#include <Modloader/app/structs/SnapTrapPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapPlaceholder {
        inline app::SnapTrapPlaceholder__Class** type_info() {
            static app::SnapTrapPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnapTrapPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnapTrapPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapPlaceholder__Class>(type_info(), "", "SnapTrapPlaceholder");
        }
        inline app::SnapTrapPlaceholder* create() {
            return il2cpp::create_object<app::SnapTrapPlaceholder>(get_class());
        }
    } // namespace SnapTrapPlaceholder
} // namespace app::classes::types
