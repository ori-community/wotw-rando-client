#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RangeItemHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RangeItemHeaderValue__Class** type_info;
        inline app::RangeItemHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeItemHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RangeItemHeaderValue");
        }
        inline app::RangeItemHeaderValue* create() {
            return il2cpp::create_object<app::RangeItemHeaderValue>(get_class());
        }
        inline app::RangeItemHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::RangeItemHeaderValue__Array>(get_class(), size);
        }
        inline app::RangeItemHeaderValue__Array* create_array(const std::vector<app::RangeItemHeaderValue*>& items) {
            return il2cpp::array_new<app::RangeItemHeaderValue__Array>(get_class(), items);
        }
    } // namespace RangeItemHeaderValue
} // namespace app::classes::types
