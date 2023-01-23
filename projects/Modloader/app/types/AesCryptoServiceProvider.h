#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AesCryptoServiceProvider__Class.h>
#include <Modloader/app/structs/AesCryptoServiceProvider.h>

namespace app::classes::types {
    namespace AesCryptoServiceProvider {
        namespace {
            inline app::AesCryptoServiceProvider__Class* type_info_ref = nullptr;
        }
        inline app::AesCryptoServiceProvider__Class** type_info = &type_info_ref;
        inline app::AesCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::AesCryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "AesCryptoServiceProvider");
        }
        inline app::AesCryptoServiceProvider* create() {
            return il2cpp::create_object<app::AesCryptoServiceProvider>(get_class());
        }
    } // namespace AesCryptoServiceProvider
} // namespace app::classes::types
