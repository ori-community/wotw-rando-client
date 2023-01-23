#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsymmetricKeyExchangeFormatter__Class.h>
#include <Modloader/app/structs/AsymmetricKeyExchangeFormatter.h>

namespace app::classes::types {
    namespace AsymmetricKeyExchangeFormatter {
        namespace {
            inline app::AsymmetricKeyExchangeFormatter__Class* type_info_ref = nullptr;
        }
        inline app::AsymmetricKeyExchangeFormatter__Class** type_info = &type_info_ref;
        inline app::AsymmetricKeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricKeyExchangeFormatter__Class>(type_info, "System.Security.Cryptography", "AsymmetricKeyExchangeFormatter");
        }
        inline app::AsymmetricKeyExchangeFormatter* create() {
            return il2cpp::create_object<app::AsymmetricKeyExchangeFormatter>(get_class());
        }
    } // namespace AsymmetricKeyExchangeFormatter
} // namespace app::classes::types
