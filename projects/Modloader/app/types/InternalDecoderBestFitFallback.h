#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalDecoderBestFitFallback {
        inline app::InternalDecoderBestFitFallback__Class** type_info = (app::InternalDecoderBestFitFallback__Class**)(modloader::win::memory::resolve_rva(0x04735EB8));
        inline app::InternalDecoderBestFitFallback__Class* get_class() {
            return il2cpp::get_class<app::InternalDecoderBestFitFallback__Class>(type_info, "System.Text", "InternalDecoderBestFitFallback");
        }
        inline app::InternalDecoderBestFitFallback* create() {
            return il2cpp::create_object<app::InternalDecoderBestFitFallback>(get_class());
        }
    } // namespace InternalDecoderBestFitFallback
} // namespace app::classes::types
