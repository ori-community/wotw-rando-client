#pragma once
#include <Modloader/app/structs/CharEntityEncoderFallbackBuffer.h>
#include <Modloader/app/structs/CharEntityEncoderFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharEntityEncoderFallbackBuffer {
        inline app::CharEntityEncoderFallbackBuffer__Class** type_info() {
            static app::CharEntityEncoderFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharEntityEncoderFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x0470CCE8));
            }
            return cache;
        }
        inline app::CharEntityEncoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::CharEntityEncoderFallbackBuffer__Class>(type_info(), "System.Xml", "CharEntityEncoderFallbackBuffer");
        }
        inline app::CharEntityEncoderFallbackBuffer* create() {
            return il2cpp::create_object<app::CharEntityEncoderFallbackBuffer>(get_class());
        }
    } // namespace CharEntityEncoderFallbackBuffer
} // namespace app::classes::types
