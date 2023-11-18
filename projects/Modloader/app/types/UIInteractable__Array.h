#pragma once
#include <Modloader/app/structs/UIInteractable__Array.h>
#include <Modloader/app/structs/UIInteractable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIInteractable__Array {
        inline app::UIInteractable__Array__Class** type_info() {
            static app::UIInteractable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UIInteractable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UIInteractable__Array__Class* get_class() {
            return il2cpp::get_class<app::UIInteractable__Array__Class>(type_info(), "Moon.UI", "UIInteractable[]");
        }
        inline app::UIInteractable__Array* create() {
            return il2cpp::create_object<app::UIInteractable__Array>(get_class());
        }
    } // namespace UIInteractable__Array
} // namespace app::classes::types
