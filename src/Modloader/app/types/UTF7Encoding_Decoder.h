#pragma once
#include <Modloader/app/structs/UTF7Encoding_Decoder.h>
#include <Modloader/app/structs/UTF7Encoding_Decoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF7Encoding_Decoder {
        inline app::UTF7Encoding_Decoder__Class** type_info() {
            static app::UTF7Encoding_Decoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF7Encoding_Decoder__Class**)(modloader::win::memory::resolve_rva(0x0478D600));
            }
            return cache;
        }
        inline app::UTF7Encoding_Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF7Encoding_Decoder__Class>(type_info(), "System.Text", "UTF7Encoding", "Decoder");
        }
        inline app::UTF7Encoding_Decoder* create() {
            return il2cpp::create_object<app::UTF7Encoding_Decoder>(get_class());
        }
    } // namespace UTF7Encoding_Decoder
} // namespace app::classes::types
