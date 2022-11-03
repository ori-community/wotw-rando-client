#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityTagHeaderValue {
        inline app::EntityTagHeaderValue__Class** type_info = (app::EntityTagHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04731918));
        inline app::EntityTagHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::EntityTagHeaderValue__Class>(type_info, "System.Net.Http.Headers", "EntityTagHeaderValue");
        }
        inline app::EntityTagHeaderValue* create() {
            return il2cpp::create_object<app::EntityTagHeaderValue>(get_class());
        }
        inline app::EntityTagHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityTagHeaderValue__Array>(get_class(), size);
        }
        inline app::EntityTagHeaderValue__Array* create_array(const std::vector<app::EntityTagHeaderValue*>& items) {
            return il2cpp::array_new<app::EntityTagHeaderValue__Array>(get_class(), items);
        }
    } // namespace EntityTagHeaderValue
} // namespace app::classes::types
