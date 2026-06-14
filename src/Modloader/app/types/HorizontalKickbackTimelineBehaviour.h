#pragma once
#include <Modloader/app/structs/HorizontalKickbackTimelineBehaviour.h>
#include <Modloader/app/structs/HorizontalKickbackTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HorizontalKickbackTimelineBehaviour {
        inline app::HorizontalKickbackTimelineBehaviour__Class** type_info() {
            static app::HorizontalKickbackTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HorizontalKickbackTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HorizontalKickbackTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HorizontalKickbackTimelineBehaviour__Class>(type_info(), "", "HorizontalKickbackTimelineBehaviour");
        }
        inline app::HorizontalKickbackTimelineBehaviour* create() {
            return il2cpp::create_object<app::HorizontalKickbackTimelineBehaviour>(get_class());
        }
    } // namespace HorizontalKickbackTimelineBehaviour
} // namespace app::classes::types
