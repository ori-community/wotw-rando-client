#pragma once
#include <Modloader/app/structs/EncoderExceptionFallback.h>
#include <Modloader/app/structs/EncoderExceptionFallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncoderExceptionFallback {
        inline app::EncoderExceptionFallback__Class** type_info() {
            static app::EncoderExceptionFallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EncoderExceptionFallback__Class**)(modloader::win::memory::resolve_rva(0x0477A900));
            }
            return cache;
        }
        inline app::EncoderExceptionFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderExceptionFallback__Class>(type_info(), "System.Text", "EncoderExceptionFallback");
        }
        inline app::EncoderExceptionFallback* create() {
            return il2cpp::create_object<app::EncoderExceptionFallback>(get_class());
        }
    } // namespace EncoderExceptionFallback
} // namespace app::classes::types
