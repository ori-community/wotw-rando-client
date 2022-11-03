#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecoderReplacementFallback {
        inline app::DecoderReplacementFallback__Class** type_info = (app::DecoderReplacementFallback__Class**)(modloader::win::memory::resolve_rva(0x047891B0));
        inline app::DecoderReplacementFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderReplacementFallback__Class>(type_info, "System.Text", "DecoderReplacementFallback");
        }
        inline app::DecoderReplacementFallback* create() {
            return il2cpp::create_object<app::DecoderReplacementFallback>(get_class());
        }
    } // namespace DecoderReplacementFallback
} // namespace app::classes::types
