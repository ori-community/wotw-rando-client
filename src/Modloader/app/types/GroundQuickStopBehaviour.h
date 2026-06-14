#pragma once
#include <Modloader/app/structs/GroundQuickStopBehaviour.h>
#include <Modloader/app/structs/GroundQuickStopBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundQuickStopBehaviour {
        inline app::GroundQuickStopBehaviour__Class** type_info() {
            static app::GroundQuickStopBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundQuickStopBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundQuickStopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundQuickStopBehaviour__Class>(type_info(), "Moon", "GroundQuickStopBehaviour");
        }
        inline app::GroundQuickStopBehaviour* create() {
            return il2cpp::create_object<app::GroundQuickStopBehaviour>(get_class());
        }
    } // namespace GroundQuickStopBehaviour
} // namespace app::classes::types
