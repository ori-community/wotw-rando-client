#pragma once
#include <Modloader/app/structs/InternalEncoderBestFitFallbackBuffer.h>
#include <Modloader/app/structs/InternalEncoderBestFitFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalEncoderBestFitFallbackBuffer {
        inline app::InternalEncoderBestFitFallbackBuffer__Class** type_info() {
            static app::InternalEncoderBestFitFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalEncoderBestFitFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x0477AAC8));
            }
            return cache;
        }
        inline app::InternalEncoderBestFitFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::InternalEncoderBestFitFallbackBuffer__Class>(type_info(), "System.Text", "InternalEncoderBestFitFallbackBuffer");
        }
        inline app::InternalEncoderBestFitFallbackBuffer* create() {
            return il2cpp::create_object<app::InternalEncoderBestFitFallbackBuffer>(get_class());
        }
    } // namespace InternalEncoderBestFitFallbackBuffer
} // namespace app::classes::types
