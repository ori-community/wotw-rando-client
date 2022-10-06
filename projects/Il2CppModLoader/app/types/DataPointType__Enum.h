#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataPointType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataPointType__Enum__Class** type_info;
        inline app::DataPointType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataPointType__Enum__Class>(type_info, "", "DataPointType");
        }
        inline app::DataPointType__Enum* create() {
            return il2cpp::create_object<app::DataPointType__Enum>(get_class());
        }
        inline app::DataPointType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DataPointType__Enum__Array>(get_class(), size);
        }
        inline app::DataPointType__Enum__Array* create_array(const std::vector<app::DataPointType__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::DataPointType__Enum__Array>(get_class(), items);
        }
    } // namespace DataPointType__Enum
} // namespace app::classes::types
