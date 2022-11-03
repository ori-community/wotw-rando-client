#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecoderReplacementFallbackBuffer {
        inline app::DecoderReplacementFallbackBuffer__Class** type_info = (app::DecoderReplacementFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04715DC0));
        inline app::DecoderReplacementFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderReplacementFallbackBuffer__Class>(type_info, "System.Text", "DecoderReplacementFallbackBuffer");
        }
        inline app::DecoderReplacementFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderReplacementFallbackBuffer>(get_class());
        }
    } // namespace DecoderReplacementFallbackBuffer
} // namespace app::classes::types
