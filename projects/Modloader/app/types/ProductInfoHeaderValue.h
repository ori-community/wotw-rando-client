#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProductInfoHeaderValue {
        inline app::ProductInfoHeaderValue__Class** type_info = (app::ProductInfoHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047417F0));
        inline app::ProductInfoHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ProductInfoHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ProductInfoHeaderValue");
        }
        inline app::ProductInfoHeaderValue* create() {
            return il2cpp::create_object<app::ProductInfoHeaderValue>(get_class());
        }
        inline app::ProductInfoHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::ProductInfoHeaderValue__Array>(get_class(), size);
        }
        inline app::ProductInfoHeaderValue__Array* create_array(const std::vector<app::ProductInfoHeaderValue*>& items) {
            return il2cpp::array_new<app::ProductInfoHeaderValue__Array>(get_class(), items);
        }
    } // namespace ProductInfoHeaderValue
} // namespace app::classes::types
