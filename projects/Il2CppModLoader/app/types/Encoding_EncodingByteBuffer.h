#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Encoding_EncodingByteBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Encoding_EncodingByteBuffer__Class** type_info;
        inline app::Encoding_EncodingByteBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_EncodingByteBuffer__Class>(type_info, "System.Text", "Encoding", "EncodingByteBuffer");
        }
        inline app::Encoding_EncodingByteBuffer* create() {
            return il2cpp::create_object<app::Encoding_EncodingByteBuffer>(get_class());
        }
    } // namespace Encoding_EncodingByteBuffer
} // namespace app::classes::types
