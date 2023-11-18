#pragma once
#include <Modloader/app/structs/DecoderNLS.h>
#include <Modloader/app/structs/DecoderNLS__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoderNLS {
        inline app::DecoderNLS__Class** type_info() {
            static app::DecoderNLS__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecoderNLS__Class**)(modloader::win::memory::resolve_rva(0x04783B08));
            }
            return cache;
        }
        inline app::DecoderNLS__Class* get_class() {
            return il2cpp::get_class<app::DecoderNLS__Class>(type_info(), "System.Text", "DecoderNLS");
        }
        inline app::DecoderNLS* create() {
            return il2cpp::create_object<app::DecoderNLS>(get_class());
        }
    } // namespace DecoderNLS
} // namespace app::classes::types
