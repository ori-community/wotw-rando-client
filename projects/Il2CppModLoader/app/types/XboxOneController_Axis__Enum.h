#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneController_Axis__Enum {
        inline app::XboxOneController_Axis__Enum__Class** type_info = (app::XboxOneController_Axis__Enum__Class**)(modloader::win::memory::resolve_rva(0x047424C8));
        inline app::XboxOneController_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_Axis__Enum__Class>(type_info, "", "XboxOneController", "Axis");
        }
        inline app::XboxOneController_Axis__Enum* create() {
            return il2cpp::create_object<app::XboxOneController_Axis__Enum>(get_class());
        }
        inline app::XboxOneController_Axis__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxOneController_Axis__Enum__Array>(get_class(), size);
        }
        inline app::XboxOneController_Axis__Enum__Array* create_array(const std::vector<app::XboxOneController_Axis__Enum*>& items) {
            return il2cpp::array_new<app::XboxOneController_Axis__Enum__Array>(get_class(), items);
        }
    } // namespace XboxOneController_Axis__Enum
} // namespace app::classes::types
