#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UTF8Encoding_UTF8Decoder {
        inline app::UTF8Encoding_UTF8Decoder__Class** type_info = (app::UTF8Encoding_UTF8Decoder__Class**)(modloader::win::memory::resolve_rva(0x04754F50));
        inline app::UTF8Encoding_UTF8Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF8Encoding_UTF8Decoder__Class>(type_info, "System.Text", "UTF8Encoding", "UTF8Decoder");
        }
        inline app::UTF8Encoding_UTF8Decoder* create() {
            return il2cpp::create_object<app::UTF8Encoding_UTF8Decoder>(get_class());
        }
    } // namespace UTF8Encoding_UTF8Decoder
} // namespace app::classes::types
