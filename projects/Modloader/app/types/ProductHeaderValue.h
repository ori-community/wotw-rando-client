#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProductHeaderValue__Class.h>
#include <Modloader/app/structs/ProductHeaderValue.h>
#include <Modloader/app/structs/ProductHeaderValue__Array.h>

namespace app::classes::types {
    namespace ProductHeaderValue {
        inline app::ProductHeaderValue__Class** type_info = (app::ProductHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0474E8E0));
        inline app::ProductHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ProductHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ProductHeaderValue");
        }
        inline app::ProductHeaderValue* create() {
            return il2cpp::create_object<app::ProductHeaderValue>(get_class());
        }
        inline app::ProductHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::ProductHeaderValue__Array>(get_class(), size);
        }
        inline app::ProductHeaderValue__Array* create_array(const std::vector<app::ProductHeaderValue*>& items) {
            return il2cpp::array_new<app::ProductHeaderValue__Array>(get_class(), items);
        }
    } // namespace ProductHeaderValue
} // namespace app::classes::types
