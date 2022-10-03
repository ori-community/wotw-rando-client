#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InWaterMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InWaterMode__Enum__Class** type_info;
        inline app::InWaterMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::InWaterMode__Enum__Class>(type_info, "", "InWaterMode");
        }
        inline app::InWaterMode__Enum* create() {
            return il2cpp::create_object<app::InWaterMode__Enum>(get_class());
        }
    } // namespace InWaterMode__Enum
} // namespace app::classes::types
