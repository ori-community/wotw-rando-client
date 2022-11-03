#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CryptoKeySecurity {
        namespace {
            inline app::CryptoKeySecurity__Class* type_info_ref = nullptr;
        }
        inline app::CryptoKeySecurity__Class** type_info = &type_info_ref;
        inline app::CryptoKeySecurity__Class* get_class() {
            return il2cpp::get_class<app::CryptoKeySecurity__Class>(type_info, "System.Security.AccessControl", "CryptoKeySecurity");
        }
        inline app::CryptoKeySecurity* create() {
            return il2cpp::create_object<app::CryptoKeySecurity>(get_class());
        }
    } // namespace CryptoKeySecurity
} // namespace app::classes::types
