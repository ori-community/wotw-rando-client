#pragma once
#include <Modloader/app/structs/InternalDecoderBestFitFallbackBuffer.h>
#include <Modloader/app/structs/InternalDecoderBestFitFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalDecoderBestFitFallbackBuffer {
        inline app::InternalDecoderBestFitFallbackBuffer__Class** type_info() {
            static app::InternalDecoderBestFitFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalDecoderBestFitFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04733330));
            }
            return cache;
        }
        inline app::InternalDecoderBestFitFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::InternalDecoderBestFitFallbackBuffer__Class>(type_info(), "System.Text", "InternalDecoderBestFitFallbackBuffer");
        }
        inline app::InternalDecoderBestFitFallbackBuffer* create() {
            return il2cpp::create_object<app::InternalDecoderBestFitFallbackBuffer>(get_class());
        }
    } // namespace InternalDecoderBestFitFallbackBuffer
} // namespace app::classes::types
