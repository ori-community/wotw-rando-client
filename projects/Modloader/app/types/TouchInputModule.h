#pragma once
#include <Modloader/app/structs/TouchInputModule.h>
#include <Modloader/app/structs/TouchInputModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchInputModule {
        inline app::TouchInputModule__Class** type_info() {
            static app::TouchInputModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchInputModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchInputModule__Class* get_class() {
            return il2cpp::get_class<app::TouchInputModule__Class>(type_info(), "UnityEngine.EventSystems", "TouchInputModule");
        }
        inline app::TouchInputModule* create() {
            return il2cpp::create_object<app::TouchInputModule>(get_class());
        }
    } // namespace TouchInputModule
} // namespace app::classes::types
