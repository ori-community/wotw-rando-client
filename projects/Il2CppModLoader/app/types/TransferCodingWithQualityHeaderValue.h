#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransferCodingWithQualityHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransferCodingWithQualityHeaderValue__Class** type_info;
        inline app::TransferCodingWithQualityHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::TransferCodingWithQualityHeaderValue__Class>(type_info, "System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue");
        }
        inline app::TransferCodingWithQualityHeaderValue* create() {
            return il2cpp::create_object<app::TransferCodingWithQualityHeaderValue>(get_class());
        }
        inline app::TransferCodingWithQualityHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::TransferCodingWithQualityHeaderValue__Array>(get_class(), size);
        }
    } // namespace TransferCodingWithQualityHeaderValue
} // namespace app::classes::types
