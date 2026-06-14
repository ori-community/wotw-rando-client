#pragma once
#include <Modloader/app/structs/TransferCodingWithQualityHeaderValue__Array.h>
#include <Modloader/app/structs/TransferCodingWithQualityHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransferCodingWithQualityHeaderValue__Array {
        inline app::TransferCodingWithQualityHeaderValue__Array__Class** type_info() {
            static app::TransferCodingWithQualityHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransferCodingWithQualityHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransferCodingWithQualityHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::TransferCodingWithQualityHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue[]");
        }
        inline app::TransferCodingWithQualityHeaderValue__Array* create() {
            return il2cpp::create_object<app::TransferCodingWithQualityHeaderValue__Array>(get_class());
        }
    } // namespace TransferCodingWithQualityHeaderValue__Array
} // namespace app::classes::types
