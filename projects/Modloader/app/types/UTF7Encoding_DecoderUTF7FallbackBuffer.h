#pragma once
#include <Modloader/app/structs/UTF7Encoding_DecoderUTF7FallbackBuffer.h>
#include <Modloader/app/structs/UTF7Encoding_DecoderUTF7FallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF7Encoding_DecoderUTF7FallbackBuffer {
        inline app::UTF7Encoding_DecoderUTF7FallbackBuffer__Class** type_info() {
            static app::UTF7Encoding_DecoderUTF7FallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF7Encoding_DecoderUTF7FallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x047811D8));
            }
            return cache;
        }
        inline app::UTF7Encoding_DecoderUTF7FallbackBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF7Encoding_DecoderUTF7FallbackBuffer__Class>(type_info(), "System.Text", "UTF7Encoding", "DecoderUTF7FallbackBuffer");
        }
        inline app::UTF7Encoding_DecoderUTF7FallbackBuffer* create() {
            return il2cpp::create_object<app::UTF7Encoding_DecoderUTF7FallbackBuffer>(get_class());
        }
    } // namespace UTF7Encoding_DecoderUTF7FallbackBuffer
} // namespace app::classes::types
