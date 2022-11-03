#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecoderFallback {
        inline app::DecoderFallback__Class** type_info = (app::DecoderFallback__Class**)(modloader::win::memory::resolve_rva(0x0478DDA8));
        inline app::DecoderFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallback__Class>(type_info, "System.Text", "DecoderFallback");
        }
        inline app::DecoderFallback* create() {
            return il2cpp::create_object<app::DecoderFallback>(get_class());
        }
    } // namespace DecoderFallback
} // namespace app::classes::types
