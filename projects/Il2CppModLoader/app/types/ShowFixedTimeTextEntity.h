#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShowFixedTimeTextEntity__Class** type_info;
        inline app::ShowFixedTimeTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowFixedTimeTextEntity__Class>(type_info, "Moon.Timeline", "ShowFixedTimeTextEntity");
        }
        inline app::ShowFixedTimeTextEntity* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity
} // namespace app::classes::types
