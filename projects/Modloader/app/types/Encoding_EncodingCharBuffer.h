#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Encoding_EncodingCharBuffer {
        inline app::Encoding_EncodingCharBuffer__Class** type_info = (app::Encoding_EncodingCharBuffer__Class**)(modloader::win::memory::resolve_rva(0x047501B8));
        inline app::Encoding_EncodingCharBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_EncodingCharBuffer__Class>(type_info, "System.Text", "Encoding", "EncodingCharBuffer");
        }
        inline app::Encoding_EncodingCharBuffer* create() {
            return il2cpp::create_object<app::Encoding_EncodingCharBuffer>(get_class());
        }
    } // namespace Encoding_EncodingCharBuffer
} // namespace app::classes::types
