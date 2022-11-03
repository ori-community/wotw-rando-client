#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HebrewNumber_HebrewValue {
        inline app::HebrewNumber_HebrewValue__Class** type_info = (app::HebrewNumber_HebrewValue__Class**)(modloader::win::memory::resolve_rva(0x0474BA00));
        inline app::HebrewNumber_HebrewValue__Class* get_class() {
            return il2cpp::get_nested_class<app::HebrewNumber_HebrewValue__Class>(type_info, "System.Globalization", "HebrewNumber", "HebrewValue");
        }
        inline app::HebrewNumber_HebrewValue* create() {
            return il2cpp::create_object<app::HebrewNumber_HebrewValue>(get_class());
        }
        inline app::HebrewNumber_HebrewValue__Array* create_array(int size) {
            return il2cpp::array_new<app::HebrewNumber_HebrewValue__Array>(get_class(), size);
        }
        inline app::HebrewNumber_HebrewValue__Array* create_array(const std::vector<app::HebrewNumber_HebrewValue*>& items) {
            return il2cpp::array_new<app::HebrewNumber_HebrewValue__Array>(get_class(), items);
        }
    } // namespace HebrewNumber_HebrewValue
} // namespace app::classes::types
