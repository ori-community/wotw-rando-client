#pragma once
#include <Modloader/app/structs/TransferCodingHeaderValue__Array.h>
#include <Modloader/app/structs/TransferCodingHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransferCodingHeaderValue__Array {
        inline app::TransferCodingHeaderValue__Array__Class** type_info() {
            static app::TransferCodingHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransferCodingHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransferCodingHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::TransferCodingHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "TransferCodingHeaderValue[]");
        }
        inline app::TransferCodingHeaderValue__Array* create() {
            return il2cpp::create_object<app::TransferCodingHeaderValue__Array>(get_class());
        }
    } // namespace TransferCodingHeaderValue__Array
} // namespace app::classes::types
