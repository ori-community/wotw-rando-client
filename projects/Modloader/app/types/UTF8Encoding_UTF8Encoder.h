#pragma once
#include <Modloader/app/structs/UTF8Encoding_UTF8Encoder.h>
#include <Modloader/app/structs/UTF8Encoding_UTF8Encoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF8Encoding_UTF8Encoder {
        inline app::UTF8Encoding_UTF8Encoder__Class** type_info() {
            static app::UTF8Encoding_UTF8Encoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF8Encoding_UTF8Encoder__Class**)(modloader::win::memory::resolve_rva(0x047048A8));
            }
            return cache;
        }
        inline app::UTF8Encoding_UTF8Encoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF8Encoding_UTF8Encoder__Class>(type_info(), "System.Text", "UTF8Encoding", "UTF8Encoder");
        }
        inline app::UTF8Encoding_UTF8Encoder* create() {
            return il2cpp::create_object<app::UTF8Encoding_UTF8Encoder>(get_class());
        }
    } // namespace UTF8Encoding_UTF8Encoder
} // namespace app::classes::types
