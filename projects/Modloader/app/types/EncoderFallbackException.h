#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncoderFallbackException {
        inline app::EncoderFallbackException__Class** type_info = (app::EncoderFallbackException__Class**)(modloader::win::memory::resolve_rva(0x0478EFD8));
        inline app::EncoderFallbackException__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallbackException__Class>(type_info, "System.Text", "EncoderFallbackException");
        }
        inline app::EncoderFallbackException* create() {
            return il2cpp::create_object<app::EncoderFallbackException>(get_class());
        }
    } // namespace EncoderFallbackException
} // namespace app::classes::types
