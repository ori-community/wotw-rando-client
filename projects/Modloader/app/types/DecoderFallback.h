#pragma once
#include <Modloader/app/structs/DecoderFallback.h>
#include <Modloader/app/structs/DecoderFallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoderFallback {
        inline app::DecoderFallback__Class** type_info() {
            static app::DecoderFallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecoderFallback__Class**)(modloader::win::memory::resolve_rva(0x0478DDA8));
            }
            return cache;
        }
        inline app::DecoderFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallback__Class>(type_info(), "System.Text", "DecoderFallback");
        }
        inline app::DecoderFallback* create() {
            return il2cpp::create_object<app::DecoderFallback>(get_class());
        }
    } // namespace DecoderFallback
} // namespace app::classes::types
