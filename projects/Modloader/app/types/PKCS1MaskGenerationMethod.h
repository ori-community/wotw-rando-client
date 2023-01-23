#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PKCS1MaskGenerationMethod__Class.h>
#include <Modloader/app/structs/PKCS1MaskGenerationMethod.h>

namespace app::classes::types {
    namespace PKCS1MaskGenerationMethod {
        inline app::PKCS1MaskGenerationMethod__Class** type_info = (app::PKCS1MaskGenerationMethod__Class**)(modloader::win::memory::resolve_rva(0x0477B6F0));
        inline app::PKCS1MaskGenerationMethod__Class* get_class() {
            return il2cpp::get_class<app::PKCS1MaskGenerationMethod__Class>(type_info, "System.Security.Cryptography", "PKCS1MaskGenerationMethod");
        }
        inline app::PKCS1MaskGenerationMethod* create() {
            return il2cpp::create_object<app::PKCS1MaskGenerationMethod>(get_class());
        }
    } // namespace PKCS1MaskGenerationMethod
} // namespace app::classes::types
