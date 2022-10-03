#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RisingStompPost {
        namespace {
            app::RisingStompPost__Class* type_info_ref = nullptr;
        }
        app::RisingStompPost__Class** type_info = &type_info_ref;
        inline app::RisingStompPost__Class* get_class() {
            return il2cpp::get_class<app::RisingStompPost__Class>(type_info, "", "RisingStompPost");
        }
        inline app::RisingStompPost* create() {
            return il2cpp::create_object<app::RisingStompPost>(get_class());
        }
    } // namespace RisingStompPost
} // namespace app::classes::types
