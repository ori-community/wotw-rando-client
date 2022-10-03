#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderNLS {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoderNLS__Class** type_info;
        inline app::DecoderNLS__Class* get_class() {
            return il2cpp::get_class<app::DecoderNLS__Class>(type_info, "System.Text", "DecoderNLS");
        }
        inline app::DecoderNLS* create() {
            return il2cpp::create_object<app::DecoderNLS>(get_class());
        }
    } // namespace DecoderNLS
} // namespace app::classes::types
