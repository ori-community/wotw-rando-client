#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharEntityEncoderFallback {
        inline app::CharEntityEncoderFallback__Class** type_info = (app::CharEntityEncoderFallback__Class**)(modloader::win::memory::resolve_rva(0x04780F60));
        inline app::CharEntityEncoderFallback__Class* get_class() {
            return il2cpp::get_class<app::CharEntityEncoderFallback__Class>(type_info, "System.Xml", "CharEntityEncoderFallback");
        }
        inline app::CharEntityEncoderFallback* create() {
            return il2cpp::create_object<app::CharEntityEncoderFallback>(get_class());
        }
    } // namespace CharEntityEncoderFallback
} // namespace app::classes::types
