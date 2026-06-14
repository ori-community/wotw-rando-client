#pragma once
#include <Modloader/app/structs/HebrewNumber_HebrewValue.h>
#include <Modloader/app/structs/HebrewNumber_HebrewValue__Array.h>
#include <Modloader/app/structs/HebrewNumber_HebrewValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HebrewNumber_HebrewValue {
        inline app::HebrewNumber_HebrewValue__Class** type_info() {
            static app::HebrewNumber_HebrewValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HebrewNumber_HebrewValue__Class**)(modloader::win::memory::resolve_rva(0x0474BA00));
            }
            return cache;
        }
        inline app::HebrewNumber_HebrewValue__Class* get_class() {
            return il2cpp::get_nested_class<app::HebrewNumber_HebrewValue__Class>(type_info(), "System.Globalization", "HebrewNumber", "HebrewValue");
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
