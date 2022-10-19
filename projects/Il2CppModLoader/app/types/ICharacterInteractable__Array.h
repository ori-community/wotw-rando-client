#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICharacterInteractable__Array {
        namespace {
            inline app::ICharacterInteractable__Array__Class* type_info_ref = nullptr;
        }
        inline app::ICharacterInteractable__Array__Class** type_info = &type_info_ref;
        inline app::ICharacterInteractable__Array__Class* get_class() {
            return il2cpp::get_class<app::ICharacterInteractable__Array__Class>(type_info, "Moon", "ICharacterInteractable[]");
        }
        inline app::ICharacterInteractable__Array* create() {
            return il2cpp::create_object<app::ICharacterInteractable__Array>(get_class());
        }
    } // namespace ICharacterInteractable__Array
} // namespace app::classes::types
