#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ViaHeaderValue {
        inline app::ViaHeaderValue__Class** type_info = (app::ViaHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0474CDC8));
        inline app::ViaHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ViaHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ViaHeaderValue");
        }
        inline app::ViaHeaderValue* create() {
            return il2cpp::create_object<app::ViaHeaderValue>(get_class());
        }
        inline app::ViaHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::ViaHeaderValue__Array>(get_class(), size);
        }
        inline app::ViaHeaderValue__Array* create_array(const std::vector<app::ViaHeaderValue*>& items) {
            return il2cpp::array_new<app::ViaHeaderValue__Array>(get_class(), items);
        }
    } // namespace ViaHeaderValue
} // namespace app::classes::types
