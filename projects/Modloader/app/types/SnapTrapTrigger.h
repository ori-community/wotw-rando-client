#pragma once
#include <Modloader/app/structs/SnapTrapTrigger.h>
#include <Modloader/app/structs/SnapTrapTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapTrigger {
        inline app::SnapTrapTrigger__Class** type_info() {
            static app::SnapTrapTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnapTrapTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnapTrapTrigger__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapTrigger__Class>(type_info(), "", "SnapTrapTrigger");
        }
        inline app::SnapTrapTrigger* create() {
            return il2cpp::create_object<app::SnapTrapTrigger>(get_class());
        }
    } // namespace SnapTrapTrigger
} // namespace app::classes::types
