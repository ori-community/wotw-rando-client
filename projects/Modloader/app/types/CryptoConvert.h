#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CryptoConvert__Class.h>
#include <Modloader/app/structs/CryptoConvert.h>

namespace app::classes::types {
    namespace CryptoConvert {
        namespace {
            inline app::CryptoConvert__Class* type_info_ref = nullptr;
        }
        inline app::CryptoConvert__Class** type_info = &type_info_ref;
        inline app::CryptoConvert__Class* get_class() {
            return il2cpp::get_class<app::CryptoConvert__Class>(type_info, "Mono.Security.Cryptography", "CryptoConvert");
        }
        inline app::CryptoConvert* create() {
            return il2cpp::create_object<app::CryptoConvert>(get_class());
        }
    } // namespace CryptoConvert
} // namespace app::classes::types
