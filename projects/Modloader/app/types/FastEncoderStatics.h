#pragma once
#include <Modloader/app/structs/FastEncoderStatics.h>
#include <Modloader/app/structs/FastEncoderStatics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FastEncoderStatics {
        inline app::FastEncoderStatics__Class** type_info() {
            static app::FastEncoderStatics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FastEncoderStatics__Class**)(modloader::win::memory::resolve_rva(0x04784C18));
            }
            return cache;
        }
        inline app::FastEncoderStatics__Class* get_class() {
            return il2cpp::get_class<app::FastEncoderStatics__Class>(type_info(), "Unity.IO.Compression", "FastEncoderStatics");
        }
        inline app::FastEncoderStatics* create() {
            return il2cpp::create_object<app::FastEncoderStatics>(get_class());
        }
    } // namespace FastEncoderStatics
} // namespace app::classes::types
