#pragma once
#include <Modloader/app/structs/FastEncoder.h>
#include <Modloader/app/structs/FastEncoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FastEncoder {
        inline app::FastEncoder__Class** type_info() {
            static app::FastEncoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FastEncoder__Class**)(modloader::win::memory::resolve_rva(0x0471C6D0));
            }
            return cache;
        }
        inline app::FastEncoder__Class* get_class() {
            return il2cpp::get_class<app::FastEncoder__Class>(type_info(), "Unity.IO.Compression", "FastEncoder");
        }
        inline app::FastEncoder* create() {
            return il2cpp::create_object<app::FastEncoder>(get_class());
        }
    } // namespace FastEncoder
} // namespace app::classes::types
