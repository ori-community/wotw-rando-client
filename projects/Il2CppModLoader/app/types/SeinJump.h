#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinJump {
        namespace {
            app::SeinJump__Class* type_info_ref = nullptr;
        }
        app::SeinJump__Class** type_info = &type_info_ref;
        inline app::SeinJump__Class* get_class() {
            return il2cpp::get_class<app::SeinJump__Class>(type_info, "", "SeinJump");
        }
        inline app::SeinJump* create() {
            return il2cpp::create_object<app::SeinJump>(get_class());
        }
    } // namespace SeinJump
} // namespace app::classes::types
