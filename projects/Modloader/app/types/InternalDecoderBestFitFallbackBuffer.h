#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InternalDecoderBestFitFallbackBuffer__Class.h>
#include <Modloader/app/structs/InternalDecoderBestFitFallbackBuffer.h>

namespace app::classes::types {
    namespace InternalDecoderBestFitFallbackBuffer {
        inline app::InternalDecoderBestFitFallbackBuffer__Class** type_info = (app::InternalDecoderBestFitFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04733330));
        inline app::InternalDecoderBestFitFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::InternalDecoderBestFitFallbackBuffer__Class>(type_info, "System.Text", "InternalDecoderBestFitFallbackBuffer");
        }
        inline app::InternalDecoderBestFitFallbackBuffer* create() {
            return il2cpp::create_object<app::InternalDecoderBestFitFallbackBuffer>(get_class());
        }
    } // namespace InternalDecoderBestFitFallbackBuffer
} // namespace app::classes::types
