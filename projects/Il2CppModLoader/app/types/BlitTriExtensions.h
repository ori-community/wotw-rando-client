#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlitTriExtensions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlitTriExtensions__Class** type_info;
        inline app::BlitTriExtensions__Class* get_class() {
            return il2cpp::get_class<app::BlitTriExtensions__Class>(type_info, "", "BlitTriExtensions");
        }
        inline app::BlitTriExtensions* create() {
            return il2cpp::create_object<app::BlitTriExtensions>(get_class());
        }
    } // namespace BlitTriExtensions
} // namespace app::classes::types
