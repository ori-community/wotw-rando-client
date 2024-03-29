#pragma once
#include <Modloader/app/structs/EncoderFallbackException.h>
#include <Modloader/app/structs/EncoderFallbackException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncoderFallbackException {
        inline app::EncoderFallbackException__Class** type_info() {
            static app::EncoderFallbackException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EncoderFallbackException__Class**)(modloader::win::memory::resolve_rva(0x0478EFD8));
            }
            return cache;
        }
        inline app::EncoderFallbackException__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallbackException__Class>(type_info(), "System.Text", "EncoderFallbackException");
        }
        inline app::EncoderFallbackException* create() {
            return il2cpp::create_object<app::EncoderFallbackException>(get_class());
        }
    } // namespace EncoderFallbackException
} // namespace app::classes::types
