#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISenseInteractable__Array {
        namespace {
            app::ISenseInteractable__Array__Class* type_info_ref = nullptr;
        }
        app::ISenseInteractable__Array__Class** type_info = &type_info_ref;
        inline app::ISenseInteractable__Array__Class* get_class() {
            return il2cpp::get_class<app::ISenseInteractable__Array__Class>(type_info, "", "ISenseInteractable[]");
        }
        inline app::ISenseInteractable__Array* create() {
            return il2cpp::create_object<app::ISenseInteractable__Array>(get_class());
        }
    } // namespace ISenseInteractable__Array
} // namespace app::classes::types
