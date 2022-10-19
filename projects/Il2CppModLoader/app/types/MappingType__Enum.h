#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MappingType__Enum {
        inline app::MappingType__Enum__Class** type_info = (app::MappingType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04778520));
        inline app::MappingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MappingType__Enum__Class>(type_info, "System.Data", "MappingType");
        }
        inline app::MappingType__Enum* create() {
            return il2cpp::create_object<app::MappingType__Enum>(get_class());
        }
    } // namespace MappingType__Enum
} // namespace app::classes::types
