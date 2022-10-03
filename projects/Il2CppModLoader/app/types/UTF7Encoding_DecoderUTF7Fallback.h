#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UTF7Encoding_DecoderUTF7Fallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UTF7Encoding_DecoderUTF7Fallback__Class** type_info;
        inline app::UTF7Encoding_DecoderUTF7Fallback__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF7Encoding_DecoderUTF7Fallback__Class>(type_info, "System.Text", "UTF7Encoding", "DecoderUTF7Fallback");
        }
        inline app::UTF7Encoding_DecoderUTF7Fallback* create() {
            return il2cpp::create_object<app::UTF7Encoding_DecoderUTF7Fallback>(get_class());
        }
    } // namespace UTF7Encoding_DecoderUTF7Fallback
} // namespace app::classes::types
