#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Encoding_DefaultDecoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Encoding_DefaultDecoder__Class** type_info;
        inline app::Encoding_DefaultDecoder__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_DefaultDecoder__Class>(type_info, "System.Text", "Encoding", "DefaultDecoder");
        }
        inline app::Encoding_DefaultDecoder* create() {
            return il2cpp::create_object<app::Encoding_DefaultDecoder>(get_class());
        }
    } // namespace Encoding_DefaultDecoder
} // namespace app::classes::types
