#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Encoder {
        namespace {
            app::Encoder__Class* type_info_ref = nullptr;
        }
        app::Encoder__Class** type_info = &type_info_ref;
        inline app::Encoder__Class* get_class() {
            return il2cpp::get_class<app::Encoder__Class>(type_info, "System.Text", "Encoder");
        }
        inline app::Encoder* create() {
            return il2cpp::create_object<app::Encoder>(get_class());
        }
    } // namespace Encoder
} // namespace app::classes::types
