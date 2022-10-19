#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Encoding_DefaultDecoder {
        inline app::Encoding_DefaultDecoder__Class** type_info = (app::Encoding_DefaultDecoder__Class**)(modloader::win::memory::resolve_rva(0x04794B08));
        inline app::Encoding_DefaultDecoder__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_DefaultDecoder__Class>(type_info, "System.Text", "Encoding", "DefaultDecoder");
        }
        inline app::Encoding_DefaultDecoder* create() {
            return il2cpp::create_object<app::Encoding_DefaultDecoder>(get_class());
        }
    } // namespace Encoding_DefaultDecoder
} // namespace app::classes::types
