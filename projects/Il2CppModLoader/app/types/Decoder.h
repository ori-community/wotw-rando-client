#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Decoder {
        namespace {
            app::Decoder__Class* type_info_ref = nullptr;
        }
        app::Decoder__Class** type_info = &type_info_ref;
        inline app::Decoder__Class* get_class() {
            return il2cpp::get_class<app::Decoder__Class>(type_info, "System.Text", "Decoder");
        }
        inline app::Decoder* create() {
            return il2cpp::create_object<app::Decoder>(get_class());
        }
    } // namespace Decoder
} // namespace app::classes::types
