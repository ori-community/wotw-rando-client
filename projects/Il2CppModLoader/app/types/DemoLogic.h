#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DemoLogic__Class** type_info;
        inline app::DemoLogic__Class* get_class() {
            return il2cpp::get_class<app::DemoLogic__Class>(type_info, "", "DemoLogic");
        }
        inline app::DemoLogic* create() {
            return il2cpp::create_object<app::DemoLogic>(get_class());
        }
    } // namespace DemoLogic
} // namespace app::classes::types
