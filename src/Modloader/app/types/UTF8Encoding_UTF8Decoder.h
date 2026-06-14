#pragma once
#include <Modloader/app/structs/UTF8Encoding_UTF8Decoder.h>
#include <Modloader/app/structs/UTF8Encoding_UTF8Decoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF8Encoding_UTF8Decoder {
        inline app::UTF8Encoding_UTF8Decoder__Class** type_info() {
            static app::UTF8Encoding_UTF8Decoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF8Encoding_UTF8Decoder__Class**)(modloader::win::memory::resolve_rva(0x04754F50));
            }
            return cache;
        }
        inline app::UTF8Encoding_UTF8Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF8Encoding_UTF8Decoder__Class>(type_info(), "System.Text", "UTF8Encoding", "UTF8Decoder");
        }
        inline app::UTF8Encoding_UTF8Decoder* create() {
            return il2cpp::create_object<app::UTF8Encoding_UTF8Decoder>(get_class());
        }
    } // namespace UTF8Encoding_UTF8Decoder
} // namespace app::classes::types
