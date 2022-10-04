#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISpiritLeashHook {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISpiritLeashHook__Class** type_info;
        inline app::ISpiritLeashHook__Class* get_class() {
            return il2cpp::get_class<app::ISpiritLeashHook__Class>(type_info, "", "ISpiritLeashHook");
        }
        inline app::ISpiritLeashHook* create() {
            return il2cpp::create_object<app::ISpiritLeashHook>(get_class());
        }
    } // namespace ISpiritLeashHook
} // namespace app::classes::types
