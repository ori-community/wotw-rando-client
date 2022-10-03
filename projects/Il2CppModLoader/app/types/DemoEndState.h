#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoEndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DemoEndState__Class** type_info;
        inline app::DemoEndState__Class* get_class() {
            return il2cpp::get_class<app::DemoEndState__Class>(type_info, "", "DemoEndState");
        }
        inline app::DemoEndState* create() {
            return il2cpp::create_object<app::DemoEndState>(get_class());
        }
    } // namespace DemoEndState
} // namespace app::classes::types
