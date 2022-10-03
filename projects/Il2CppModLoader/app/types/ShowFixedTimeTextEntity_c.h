#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShowFixedTimeTextEntity_c__Class** type_info;
        inline app::ShowFixedTimeTextEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowFixedTimeTextEntity_c__Class>(type_info, "Moon.Timeline", "ShowFixedTimeTextEntity", "<>c");
        }
        inline app::ShowFixedTimeTextEntity_c* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_c>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity_c
} // namespace app::classes::types
