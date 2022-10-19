#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncoderNLS {
        inline app::EncoderNLS__Class** type_info = (app::EncoderNLS__Class**)(modloader::win::memory::resolve_rva(0x0470F378));
        inline app::EncoderNLS__Class* get_class() {
            return il2cpp::get_class<app::EncoderNLS__Class>(type_info, "System.Text", "EncoderNLS");
        }
        inline app::EncoderNLS* create() {
            return il2cpp::create_object<app::EncoderNLS>(get_class());
        }
    } // namespace EncoderNLS
} // namespace app::classes::types
