#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CryptoAPITransform {
        namespace {
            inline app::CryptoAPITransform__Class* type_info_ref = nullptr;
        }
        inline app::CryptoAPITransform__Class** type_info = &type_info_ref;
        inline app::CryptoAPITransform__Class* get_class() {
            return il2cpp::get_class<app::CryptoAPITransform__Class>(type_info, "System.Security.Cryptography", "CryptoAPITransform");
        }
        inline app::CryptoAPITransform* create() {
            return il2cpp::create_object<app::CryptoAPITransform>(get_class());
        }
    } // namespace CryptoAPITransform
} // namespace app::classes::types
