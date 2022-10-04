#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInteractable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInteractable__Class** type_info;
        inline app::IInteractable__Class* get_class() {
            return il2cpp::get_class<app::IInteractable__Class>(type_info, "", "IInteractable");
        }
        inline app::IInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractable__Array>(get_class(), size);
        }
    } // namespace IInteractable
} // namespace app::classes::types
