#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncoderNLS {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncoderNLS__Class** type_info;
        inline app::EncoderNLS__Class* get_class() {
            return il2cpp::get_class<app::EncoderNLS__Class>(type_info, "System.Text", "EncoderNLS");
        }
        inline app::EncoderNLS* create() {
            return il2cpp::create_object<app::EncoderNLS>(get_class());
        }
    } // namespace EncoderNLS
} // namespace app::classes::types
