#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Base64Encoder {
        namespace {
            app::Base64Encoder__Class* type_info_ref = nullptr;
        }
        app::Base64Encoder__Class** type_info = &type_info_ref;
        inline app::Base64Encoder__Class* get_class() {
            return il2cpp::get_class<app::Base64Encoder__Class>(type_info, "System.Xml", "Base64Encoder");
        }
        inline app::Base64Encoder* create() {
            return il2cpp::create_object<app::Base64Encoder>(get_class());
        }
    } // namespace Base64Encoder
} // namespace app::classes::types
