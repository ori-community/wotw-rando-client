#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalEncoderBestFitFallbackBuffer {
        inline app::InternalEncoderBestFitFallbackBuffer__Class** type_info = (app::InternalEncoderBestFitFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x0477AAC8));
        inline app::InternalEncoderBestFitFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::InternalEncoderBestFitFallbackBuffer__Class>(type_info, "System.Text", "InternalEncoderBestFitFallbackBuffer");
        }
        inline app::InternalEncoderBestFitFallbackBuffer* create() {
            return il2cpp::create_object<app::InternalEncoderBestFitFallbackBuffer>(get_class());
        }
    } // namespace InternalEncoderBestFitFallbackBuffer
} // namespace app::classes::types
