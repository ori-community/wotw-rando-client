#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UTF7Encoding_Encoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UTF7Encoding_Encoder__Class** type_info;
        inline app::UTF7Encoding_Encoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF7Encoding_Encoder__Class>(type_info, "System.Text", "UTF7Encoding", "Encoder");
        }
        inline app::UTF7Encoding_Encoder* create() {
            return il2cpp::create_object<app::UTF7Encoding_Encoder>(get_class());
        }
    } // namespace UTF7Encoding_Encoder
} // namespace app::classes::types
