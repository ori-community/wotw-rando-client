#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MappingType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MappingType__Enum__Class** type_info;
        inline app::MappingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MappingType__Enum__Class>(type_info, "System.Data", "MappingType");
        }
        inline app::MappingType__Enum* create() {
            return il2cpp::create_object<app::MappingType__Enum>(get_class());
        }
    } // namespace MappingType__Enum
} // namespace app::classes::types
