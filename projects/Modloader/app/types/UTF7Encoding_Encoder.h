#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UTF7Encoding_Encoder {
        inline app::UTF7Encoding_Encoder__Class** type_info = (app::UTF7Encoding_Encoder__Class**)(modloader::win::memory::resolve_rva(0x04742058));
        inline app::UTF7Encoding_Encoder__Class* get_class() {
            return il2cpp::get_nested_class<app::UTF7Encoding_Encoder__Class>(type_info, "System.Text", "UTF7Encoding", "Encoder");
        }
        inline app::UTF7Encoding_Encoder* create() {
            return il2cpp::create_object<app::UTF7Encoding_Encoder>(get_class());
        }
    } // namespace UTF7Encoding_Encoder
} // namespace app::classes::types
