#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartographerIdleBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartographerIdleBehaviour_c__Class** type_info;
        inline app::CartographerIdleBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerIdleBehaviour_c__Class>(type_info, "", "CartographerIdleBehaviour", "<>c");
        }
        inline app::CartographerIdleBehaviour_c* create() {
            return il2cpp::create_object<app::CartographerIdleBehaviour_c>(get_class());
        }
    } // namespace CartographerIdleBehaviour_c
} // namespace app::classes::types
