#pragma once
#include <Modloader/app/structs/UnicodeEncoding_Decoder.h>
#include <Modloader/app/structs/UnicodeEncoding_Decoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnicodeEncoding_Decoder {
        inline app::UnicodeEncoding_Decoder__Class** type_info() {
            static app::UnicodeEncoding_Decoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnicodeEncoding_Decoder__Class**)(modloader::win::memory::resolve_rva(0x047801C8));
            }
            return cache;
        }
        inline app::UnicodeEncoding_Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UnicodeEncoding_Decoder__Class>(type_info(), "System.Text", "UnicodeEncoding", "Decoder");
        }
        inline app::UnicodeEncoding_Decoder* create() {
            return il2cpp::create_object<app::UnicodeEncoding_Decoder>(get_class());
        }
    } // namespace UnicodeEncoding_Decoder
} // namespace app::classes::types
