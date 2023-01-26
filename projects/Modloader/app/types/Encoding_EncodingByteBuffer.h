#pragma once
#include <Modloader/app/structs/Encoding_EncodingByteBuffer.h>
#include <Modloader/app/structs/Encoding_EncodingByteBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Encoding_EncodingByteBuffer {
        inline app::Encoding_EncodingByteBuffer__Class** type_info() {
            static app::Encoding_EncodingByteBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Encoding_EncodingByteBuffer__Class**)(modloader::win::memory::resolve_rva(0x04744D08));
            }
            return cache;
        }
        inline app::Encoding_EncodingByteBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_EncodingByteBuffer__Class>(type_info(), "System.Text", "Encoding", "EncodingByteBuffer");
        }
        inline app::Encoding_EncodingByteBuffer* create() {
            return il2cpp::create_object<app::Encoding_EncodingByteBuffer>(get_class());
        }
    } // namespace Encoding_EncodingByteBuffer
} // namespace app::classes::types
