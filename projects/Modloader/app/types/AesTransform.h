#pragma once
#include <Modloader/app/structs/AesTransform.h>
#include <Modloader/app/structs/AesTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AesTransform {
        inline app::AesTransform__Class** type_info() {
            static app::AesTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AesTransform__Class**)(modloader::win::memory::resolve_rva(0x0474F458));
            }
            return cache;
        }
        inline app::AesTransform__Class* get_class() {
            return il2cpp::get_class<app::AesTransform__Class>(type_info(), "System.Security.Cryptography", "AesTransform");
        }
        inline app::AesTransform* create() {
            return il2cpp::create_object<app::AesTransform>(get_class());
        }
    } // namespace AesTransform
} // namespace app::classes::types
