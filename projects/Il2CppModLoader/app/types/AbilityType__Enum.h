#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AbilityType__Enum {
        inline app::AbilityType__Enum__Class** type_info = (app::AbilityType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04797D88));
        inline app::AbilityType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AbilityType__Enum__Class>(type_info, "", "AbilityType");
        }
        inline app::AbilityType__Enum* create() {
            return il2cpp::create_object<app::AbilityType__Enum>(get_class());
        }
        inline app::AbilityType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::AbilityType__Enum__Array>(get_class(), size);
        }
        inline app::AbilityType__Enum__Array* create_array(const std::vector<app::AbilityType__Enum*>& items) {
            return il2cpp::array_new<app::AbilityType__Enum__Array>(get_class(), items);
        }
    } // namespace AbilityType__Enum
} // namespace app::classes::types
