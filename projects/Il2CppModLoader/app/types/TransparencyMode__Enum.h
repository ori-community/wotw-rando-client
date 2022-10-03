#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparencyMode__Enum {
        namespace {
            app::TransparencyMode__Enum__Class* type_info_ref = nullptr;
        }
        app::TransparencyMode__Enum__Class** type_info = &type_info_ref;
        inline app::TransparencyMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransparencyMode__Enum__Class>(type_info, "Moon.Timeline", "TransparencyMode");
        }
        inline app::TransparencyMode__Enum* create() {
            return il2cpp::create_object<app::TransparencyMode__Enum>(get_class());
        }
    } // namespace TransparencyMode__Enum
} // namespace app::classes::types
