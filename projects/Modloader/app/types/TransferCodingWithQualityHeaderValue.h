#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransferCodingWithQualityHeaderValue__Class.h>
#include <Modloader/app/structs/TransferCodingWithQualityHeaderValue.h>
#include <Modloader/app/structs/TransferCodingWithQualityHeaderValue__Array.h>

namespace app::classes::types {
    namespace TransferCodingWithQualityHeaderValue {
        inline app::TransferCodingWithQualityHeaderValue__Class** type_info = (app::TransferCodingWithQualityHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04706878));
        inline app::TransferCodingWithQualityHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::TransferCodingWithQualityHeaderValue__Class>(type_info, "System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue");
        }
        inline app::TransferCodingWithQualityHeaderValue* create() {
            return il2cpp::create_object<app::TransferCodingWithQualityHeaderValue>(get_class());
        }
        inline app::TransferCodingWithQualityHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::TransferCodingWithQualityHeaderValue__Array>(get_class(), size);
        }
        inline app::TransferCodingWithQualityHeaderValue__Array* create_array(const std::vector<app::TransferCodingWithQualityHeaderValue*>& items) {
            return il2cpp::array_new<app::TransferCodingWithQualityHeaderValue__Array>(get_class(), items);
        }
    } // namespace TransferCodingWithQualityHeaderValue
} // namespace app::classes::types
