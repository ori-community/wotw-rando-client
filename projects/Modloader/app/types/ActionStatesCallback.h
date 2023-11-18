#pragma once
#include <Modloader/app/structs/ActionStatesCallback.h>
#include <Modloader/app/structs/ActionStatesCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionStatesCallback {
        inline app::ActionStatesCallback__Class** type_info() {
            static app::ActionStatesCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionStatesCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionStatesCallback__Class* get_class() {
            return il2cpp::get_class<app::ActionStatesCallback__Class>(type_info(), "", "ActionStatesCallback");
        }
        inline app::ActionStatesCallback* create() {
            return il2cpp::create_object<app::ActionStatesCallback>(get_class());
        }
    } // namespace ActionStatesCallback
} // namespace app::classes::types
