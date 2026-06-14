#pragma once
#include <Modloader/app/structs/DecoderExceptionFallback.h>
#include <Modloader/app/structs/DecoderExceptionFallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoderExceptionFallback {
        inline app::DecoderExceptionFallback__Class** type_info() {
            static app::DecoderExceptionFallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecoderExceptionFallback__Class**)(modloader::win::memory::resolve_rva(0x047538F0));
            }
            return cache;
        }
        inline app::DecoderExceptionFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderExceptionFallback__Class>(type_info(), "System.Text", "DecoderExceptionFallback");
        }
        inline app::DecoderExceptionFallback* create() {
            return il2cpp::create_object<app::DecoderExceptionFallback>(get_class());
        }
    } // namespace DecoderExceptionFallback
} // namespace app::classes::types
