#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UTF32Encoding_UTF32Decoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UTF32Encoding_UTF32Decoder__Class** type_info;
        inline app::UTF32Encoding_UTF32Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF32Encoding_UTF32Decoder__Class>(type_info, "System.Text", "UTF32Encoding", "UTF32Decoder");
        }
        inline app::UTF32Encoding_UTF32Decoder* create() {
            return il2cpp::create_object<app::UTF32Encoding_UTF32Decoder>(get_class());
        }
    } // namespace UTF32Encoding_UTF32Decoder
} // namespace app::classes::types
