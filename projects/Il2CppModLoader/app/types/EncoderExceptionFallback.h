#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncoderExceptionFallback {
        inline app::EncoderExceptionFallback__Class** type_info = (app::EncoderExceptionFallback__Class**)(modloader::win::memory::resolve_rva(0x0477A900));
        inline app::EncoderExceptionFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderExceptionFallback__Class>(type_info, "System.Text", "EncoderExceptionFallback");
        }
        inline app::EncoderExceptionFallback* create() {
            return il2cpp::create_object<app::EncoderExceptionFallback>(get_class());
        }
    } // namespace EncoderExceptionFallback
} // namespace app::classes::types
