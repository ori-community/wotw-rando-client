#pragma once
#include <Modloader/app/structs/ReplayFastForwardSystem.h>
#include <Modloader/app/structs/ReplayFastForwardSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayFastForwardSystem {
        inline app::ReplayFastForwardSystem__Class** type_info() {
            static app::ReplayFastForwardSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReplayFastForwardSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReplayFastForwardSystem__Class* get_class() {
            return il2cpp::get_class<app::ReplayFastForwardSystem__Class>(type_info(), "Moon.Timeline.Systems", "ReplayFastForwardSystem");
        }
        inline app::ReplayFastForwardSystem* create() {
            return il2cpp::create_object<app::ReplayFastForwardSystem>(get_class());
        }
    } // namespace ReplayFastForwardSystem
} // namespace app::classes::types
