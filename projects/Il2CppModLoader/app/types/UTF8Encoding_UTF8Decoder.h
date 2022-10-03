#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UTF8Encoding_UTF8Decoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UTF8Encoding_UTF8Decoder__Class** type_info;
        inline app::UTF8Encoding_UTF8Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF8Encoding_UTF8Decoder__Class>(type_info, "System.Text", "UTF8Encoding", "UTF8Decoder");
        }
        inline app::UTF8Encoding_UTF8Decoder* create() {
            return il2cpp::create_object<app::UTF8Encoding_UTF8Decoder>(get_class());
        }
    } // namespace UTF8Encoding_UTF8Decoder
} // namespace app::classes::types
