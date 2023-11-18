#pragma once
#include <Modloader/app/structs/ISenseInteractable__Array.h>
#include <Modloader/app/structs/ISenseInteractable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISenseInteractable__Array {
        inline app::ISenseInteractable__Array__Class** type_info() {
            static app::ISenseInteractable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISenseInteractable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISenseInteractable__Array__Class* get_class() {
            return il2cpp::get_class<app::ISenseInteractable__Array__Class>(type_info(), "", "ISenseInteractable[]");
        }
        inline app::ISenseInteractable__Array* create() {
            return il2cpp::create_object<app::ISenseInteractable__Array>(get_class());
        }
    } // namespace ISenseInteractable__Array
} // namespace app::classes::types
