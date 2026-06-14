#pragma once
#include <Modloader/app/structs/InternalEncoderBestFitFallback.h>
#include <Modloader/app/structs/InternalEncoderBestFitFallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalEncoderBestFitFallback {
        inline app::InternalEncoderBestFitFallback__Class** type_info() {
            static app::InternalEncoderBestFitFallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalEncoderBestFitFallback__Class**)(modloader::win::memory::resolve_rva(0x04707218));
            }
            return cache;
        }
        inline app::InternalEncoderBestFitFallback__Class* get_class() {
            return il2cpp::get_class<app::InternalEncoderBestFitFallback__Class>(type_info(), "System.Text", "InternalEncoderBestFitFallback");
        }
        inline app::InternalEncoderBestFitFallback* create() {
            return il2cpp::create_object<app::InternalEncoderBestFitFallback>(get_class());
        }
    } // namespace InternalEncoderBestFitFallback
} // namespace app::classes::types
