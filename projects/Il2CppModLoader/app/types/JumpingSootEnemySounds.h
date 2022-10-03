#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpingSootEnemySounds {
        namespace {
            app::JumpingSootEnemySounds__Class* type_info_ref = nullptr;
        }
        app::JumpingSootEnemySounds__Class** type_info = &type_info_ref;
        inline app::JumpingSootEnemySounds__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemySounds__Class>(type_info, "", "JumpingSootEnemySounds");
        }
        inline app::JumpingSootEnemySounds* create() {
            return il2cpp::create_object<app::JumpingSootEnemySounds>(get_class());
        }
    } // namespace JumpingSootEnemySounds
} // namespace app::classes::types
