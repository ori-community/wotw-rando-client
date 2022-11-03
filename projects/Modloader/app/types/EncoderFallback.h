#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncoderFallback {
        inline app::EncoderFallback__Class** type_info = (app::EncoderFallback__Class**)(modloader::win::memory::resolve_rva(0x0475AB60));
        inline app::EncoderFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallback__Class>(type_info, "System.Text", "EncoderFallback");
        }
        inline app::EncoderFallback* create() {
            return il2cpp::create_object<app::EncoderFallback>(get_class());
        }
    } // namespace EncoderFallback
} // namespace app::classes::types
