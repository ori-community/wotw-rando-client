#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UTF16Decoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UTF16Decoder__Class** type_info;
        inline app::UTF16Decoder__Class* get_class() {
            return il2cpp::get_class<app::UTF16Decoder__Class>(type_info, "System.Xml", "UTF16Decoder");
        }
        inline app::UTF16Decoder* create() {
            return il2cpp::create_object<app::UTF16Decoder>(get_class());
        }
    } // namespace UTF16Decoder
} // namespace app::classes::types
