#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StompPost {
        namespace {
            app::StompPost__Class* type_info_ref = nullptr;
        }
        app::StompPost__Class** type_info = &type_info_ref;
        inline app::StompPost__Class* get_class() {
            return il2cpp::get_class<app::StompPost__Class>(type_info, "", "StompPost");
        }
        inline app::StompPost* create() {
            return il2cpp::create_object<app::StompPost>(get_class());
        }
    } // namespace StompPost
} // namespace app::classes::types
