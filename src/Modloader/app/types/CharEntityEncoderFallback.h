#pragma once
#include <Modloader/app/structs/CharEntityEncoderFallback.h>
#include <Modloader/app/structs/CharEntityEncoderFallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharEntityEncoderFallback {
        inline app::CharEntityEncoderFallback__Class** type_info() {
            static app::CharEntityEncoderFallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharEntityEncoderFallback__Class**)(modloader::win::memory::resolve_rva(0x04780F60));
            }
            return cache;
        }
        inline app::CharEntityEncoderFallback__Class* get_class() {
            return il2cpp::get_class<app::CharEntityEncoderFallback__Class>(type_info(), "System.Xml", "CharEntityEncoderFallback");
        }
        inline app::CharEntityEncoderFallback* create() {
            return il2cpp::create_object<app::CharEntityEncoderFallback>(get_class());
        }
    } // namespace CharEntityEncoderFallback
} // namespace app::classes::types
