#pragma once
#include <Modloader/app/structs/PKCS1MaskGenerationMethod.h>
#include <Modloader/app/structs/PKCS1MaskGenerationMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS1MaskGenerationMethod {
        inline app::PKCS1MaskGenerationMethod__Class** type_info() {
            static app::PKCS1MaskGenerationMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS1MaskGenerationMethod__Class**)(modloader::win::memory::resolve_rva(0x0477B6F0));
            }
            return cache;
        }
        inline app::PKCS1MaskGenerationMethod__Class* get_class() {
            return il2cpp::get_class<app::PKCS1MaskGenerationMethod__Class>(type_info(), "System.Security.Cryptography", "PKCS1MaskGenerationMethod");
        }
        inline app::PKCS1MaskGenerationMethod* create() {
            return il2cpp::create_object<app::PKCS1MaskGenerationMethod>(get_class());
        }
    } // namespace PKCS1MaskGenerationMethod
} // namespace app::classes::types
