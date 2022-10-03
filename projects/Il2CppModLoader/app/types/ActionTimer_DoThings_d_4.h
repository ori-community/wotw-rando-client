#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionTimer_DoThings_d_4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionTimer_DoThings_d_4__Class** type_info;
        inline app::ActionTimer_DoThings_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionTimer_DoThings_d_4__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ActionTimer", "<DoThings>d__4");
        }
        inline app::ActionTimer_DoThings_d_4* create() {
            return il2cpp::create_object<app::ActionTimer_DoThings_d_4>(get_class());
        }
    } // namespace ActionTimer_DoThings_d_4
} // namespace app::classes::types
