#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataSetDateTime__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataSetDateTime__Enum__Class** type_info;
        inline app::DataSetDateTime__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataSetDateTime__Enum__Class>(type_info, "System.Data", "DataSetDateTime");
        }
        inline app::DataSetDateTime__Enum* create() {
            return il2cpp::create_object<app::DataSetDateTime__Enum>(get_class());
        }
    } // namespace DataSetDateTime__Enum
} // namespace app::classes::types
