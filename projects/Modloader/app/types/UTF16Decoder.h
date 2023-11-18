#pragma once
#include <Modloader/app/structs/UTF16Decoder.h>
#include <Modloader/app/structs/UTF16Decoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF16Decoder {
        inline app::UTF16Decoder__Class** type_info() {
            static app::UTF16Decoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF16Decoder__Class**)(modloader::win::memory::resolve_rva(0x0472F800));
            }
            return cache;
        }
        inline app::UTF16Decoder__Class* get_class() {
            return il2cpp::get_class<app::UTF16Decoder__Class>(type_info(), "System.Xml", "UTF16Decoder");
        }
        inline app::UTF16Decoder* create() {
            return il2cpp::create_object<app::UTF16Decoder>(get_class());
        }
    } // namespace UTF16Decoder
} // namespace app::classes::types
