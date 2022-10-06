#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransferCodingHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransferCodingHeaderValue__Class** type_info;
        inline app::TransferCodingHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::TransferCodingHeaderValue__Class>(type_info, "System.Net.Http.Headers", "TransferCodingHeaderValue");
        }
        inline app::TransferCodingHeaderValue* create() {
            return il2cpp::create_object<app::TransferCodingHeaderValue>(get_class());
        }
        inline app::TransferCodingHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::TransferCodingHeaderValue__Array>(get_class(), size);
        }
        inline app::TransferCodingHeaderValue__Array* create_array(const std::vector<app::TransferCodingHeaderValue*>& items) {
            return il2cpp::array_new<app::TransferCodingHeaderValue__Array>(get_class(), items);
        }
    } // namespace TransferCodingHeaderValue
} // namespace app::classes::types
