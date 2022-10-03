#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Encoding_EncodingCharBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Encoding_EncodingCharBuffer__Class** type_info;
        inline app::Encoding_EncodingCharBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_EncodingCharBuffer__Class>(type_info, "System.Text", "Encoding", "EncodingCharBuffer");
        }
        inline app::Encoding_EncodingCharBuffer* create() {
            return il2cpp::create_object<app::Encoding_EncodingCharBuffer>(get_class());
        }
    } // namespace Encoding_EncodingCharBuffer
} // namespace app::classes::types
