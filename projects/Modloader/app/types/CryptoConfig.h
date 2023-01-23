#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CryptoConfig__Class.h>
#include <Modloader/app/structs/CryptoConfig.h>

namespace app::classes::types {
    namespace CryptoConfig {
        namespace {
            inline app::CryptoConfig__Class* type_info_ref = nullptr;
        }
        inline app::CryptoConfig__Class** type_info = &type_info_ref;
        inline app::CryptoConfig__Class* get_class() {
            return il2cpp::get_class<app::CryptoConfig__Class>(type_info, "System.Security.Cryptography", "CryptoConfig");
        }
        inline app::CryptoConfig* create() {
            return il2cpp::create_object<app::CryptoConfig>(get_class());
        }
    } // namespace CryptoConfig
} // namespace app::classes::types
