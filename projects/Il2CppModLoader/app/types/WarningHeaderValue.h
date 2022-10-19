#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WarningHeaderValue {
        inline app::WarningHeaderValue__Class** type_info = (app::WarningHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047090C8));
        inline app::WarningHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::WarningHeaderValue__Class>(type_info, "System.Net.Http.Headers", "WarningHeaderValue");
        }
        inline app::WarningHeaderValue* create() {
            return il2cpp::create_object<app::WarningHeaderValue>(get_class());
        }
        inline app::WarningHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::WarningHeaderValue__Array>(get_class(), size);
        }
        inline app::WarningHeaderValue__Array* create_array(const std::vector<app::WarningHeaderValue*>& items) {
            return il2cpp::array_new<app::WarningHeaderValue__Array>(get_class(), items);
        }
    } // namespace WarningHeaderValue
} // namespace app::classes::types
