#pragma once
#include <Modloader/app/structs/DecoderFallbackException.h>
#include <Modloader/app/structs/DecoderFallbackException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoderFallbackException {
        inline app::DecoderFallbackException__Class** type_info() {
            static app::DecoderFallbackException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecoderFallbackException__Class**)(modloader::win::memory::resolve_rva(0x04770318));
            }
            return cache;
        }
        inline app::DecoderFallbackException__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallbackException__Class>(type_info(), "System.Text", "DecoderFallbackException");
        }
        inline app::DecoderFallbackException* create() {
            return il2cpp::create_object<app::DecoderFallbackException>(get_class());
        }
    } // namespace DecoderFallbackException
} // namespace app::classes::types
