#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnSpiritLeashed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnSpiritLeashed__Class** type_info;
        inline app::OnSpiritLeashed__Class* get_class() {
            return il2cpp::get_class<app::OnSpiritLeashed__Class>(type_info, "fsm.triggers", "OnSpiritLeashed");
        }
        inline app::OnSpiritLeashed* create() {
            return il2cpp::create_object<app::OnSpiritLeashed>(get_class());
        }
    } // namespace OnSpiritLeashed
} // namespace app::classes::types
