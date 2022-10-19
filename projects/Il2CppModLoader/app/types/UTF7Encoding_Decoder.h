#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UTF7Encoding_Decoder {
        inline app::UTF7Encoding_Decoder__Class** type_info = (app::UTF7Encoding_Decoder__Class**)(modloader::win::memory::resolve_rva(0x0478D600));
        inline app::UTF7Encoding_Decoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF7Encoding_Decoder__Class>(type_info, "System.Text", "UTF7Encoding", "Decoder");
        }
        inline app::UTF7Encoding_Decoder* create() {
            return il2cpp::create_object<app::UTF7Encoding_Decoder>(get_class());
        }
    } // namespace UTF7Encoding_Decoder
} // namespace app::classes::types
