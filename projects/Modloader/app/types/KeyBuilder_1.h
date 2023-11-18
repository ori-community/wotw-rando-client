#pragma once
#include <Modloader/app/structs/KeyBuilder_1.h>
#include <Modloader/app/structs/KeyBuilder_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyBuilder_1 {
        inline app::KeyBuilder_1__Class** type_info() {
            static app::KeyBuilder_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyBuilder_1__Class**)(modloader::win::memory::resolve_rva(0x04795D78));
            }
            return cache;
        }
        inline app::KeyBuilder_1__Class* get_class() {
            return il2cpp::get_class<app::KeyBuilder_1__Class>(type_info(), "Mono.Security.Cryptography", "KeyBuilder");
        }
        inline app::KeyBuilder_1* create() {
            return il2cpp::create_object<app::KeyBuilder_1>(get_class());
        }
    } // namespace KeyBuilder_1
} // namespace app::classes::types
