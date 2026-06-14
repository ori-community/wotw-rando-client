#pragma once
#include <Modloader/app/structs/PointerInputModule.h>
#include <Modloader/app/structs/PointerInputModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule {
        inline app::PointerInputModule__Class** type_info() {
            static app::PointerInputModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointerInputModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointerInputModule__Class* get_class() {
            return il2cpp::get_class<app::PointerInputModule__Class>(type_info(), "UnityEngine.EventSystems", "PointerInputModule");
        }
        inline app::PointerInputModule* create() {
            return il2cpp::create_object<app::PointerInputModule>(get_class());
        }
    } // namespace PointerInputModule
} // namespace app::classes::types
