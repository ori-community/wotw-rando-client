#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransferCodingHeaderValue__Array {
        namespace {
            inline app::TransferCodingHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::TransferCodingHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::TransferCodingHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::TransferCodingHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "TransferCodingHeaderValue[]");
        }
        inline app::TransferCodingHeaderValue__Array* create() {
            return il2cpp::create_object<app::TransferCodingHeaderValue__Array>(get_class());
        }
    } // namespace TransferCodingHeaderValue__Array
} // namespace app::classes::types
