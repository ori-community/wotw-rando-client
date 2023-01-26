#pragma once
#include <Modloader/app/structs/UIBehaviour.h>
#include <Modloader/app/structs/UIBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIBehaviour {
        inline app::UIBehaviour__Class** type_info() {
            static app::UIBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UIBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UIBehaviour__Class* get_class() {
            return il2cpp::get_class<app::UIBehaviour__Class>(type_info(), "UnityEngine.EventSystems", "UIBehaviour");
        }
        inline app::UIBehaviour* create() {
            return il2cpp::create_object<app::UIBehaviour>(get_class());
        }
    } // namespace UIBehaviour
} // namespace app::classes::types
