#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharEntityEncoderFallbackBuffer {
        inline app::CharEntityEncoderFallbackBuffer__Class** type_info = (app::CharEntityEncoderFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x0470CCE8));
        inline app::CharEntityEncoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::CharEntityEncoderFallbackBuffer__Class>(type_info, "System.Xml", "CharEntityEncoderFallbackBuffer");
        }
        inline app::CharEntityEncoderFallbackBuffer* create() {
            return il2cpp::create_object<app::CharEntityEncoderFallbackBuffer>(get_class());
        }
    } // namespace CharEntityEncoderFallbackBuffer
} // namespace app::classes::types
