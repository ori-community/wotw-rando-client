#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuDoubleJump {
        namespace {
            inline app::KuDoubleJump__Class* type_info_ref = nullptr;
        }
        inline app::KuDoubleJump__Class** type_info = &type_info_ref;
        inline app::KuDoubleJump__Class* get_class() {
            return il2cpp::get_class<app::KuDoubleJump__Class>(type_info, "", "KuDoubleJump");
        }
        inline app::KuDoubleJump* create() {
            return il2cpp::create_object<app::KuDoubleJump>(get_class());
        }
    } // namespace KuDoubleJump
} // namespace app::classes::types
