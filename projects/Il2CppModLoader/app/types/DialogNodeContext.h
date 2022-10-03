#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogNodeContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DialogNodeContext__Class** type_info;
        inline app::DialogNodeContext__Class* get_class() {
            return il2cpp::get_class<app::DialogNodeContext__Class>(type_info, "", "DialogNodeContext");
        }
        inline app::DialogNodeContext* create() {
            return il2cpp::create_object<app::DialogNodeContext>(get_class());
        }
    } // namespace DialogNodeContext
} // namespace app::classes::types
