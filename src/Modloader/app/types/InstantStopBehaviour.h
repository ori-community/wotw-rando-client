#pragma once
#include <Modloader/app/structs/InstantStopBehaviour.h>
#include <Modloader/app/structs/InstantStopBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantStopBehaviour {
        inline app::InstantStopBehaviour__Class** type_info() {
            static app::InstantStopBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantStopBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantStopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::InstantStopBehaviour__Class>(type_info(), "Moon", "InstantStopBehaviour");
        }
        inline app::InstantStopBehaviour* create() {
            return il2cpp::create_object<app::InstantStopBehaviour>(get_class());
        }
    } // namespace InstantStopBehaviour
} // namespace app::classes::types
