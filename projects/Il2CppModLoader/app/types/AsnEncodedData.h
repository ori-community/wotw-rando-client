#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsnEncodedData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsnEncodedData__Class** type_info;
        inline app::AsnEncodedData__Class* get_class() {
            return il2cpp::get_class<app::AsnEncodedData__Class>(type_info, "System.Security.Cryptography", "AsnEncodedData");
        }
        inline app::AsnEncodedData* create() {
            return il2cpp::create_object<app::AsnEncodedData>(get_class());
        }
    } // namespace AsnEncodedData
} // namespace app::classes::types
