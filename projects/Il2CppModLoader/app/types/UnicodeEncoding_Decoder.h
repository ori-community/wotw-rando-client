#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnicodeEncoding_Decoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnicodeEncoding_Decoder__Class** type_info;
        inline app::UnicodeEncoding_Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UnicodeEncoding_Decoder__Class>(type_info, "System.Text", "UnicodeEncoding", "Decoder");
        }
        inline app::UnicodeEncoding_Decoder* create() {
            return il2cpp::create_object<app::UnicodeEncoding_Decoder>(get_class());
        }
    } // namespace UnicodeEncoding_Decoder
} // namespace app::classes::types
