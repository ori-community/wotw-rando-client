#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFPSTest_State__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFPSTest_State__Enum__Class** type_info;
        inline app::SceneFPSTest_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFPSTest_State__Enum__Class>(type_info, "", "SceneFPSTest", "State");
        }
        inline app::SceneFPSTest_State__Enum* create() {
            return il2cpp::create_object<app::SceneFPSTest_State__Enum>(get_class());
        }
        inline app::SceneFPSTest_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneFPSTest_State__Enum__Array>(get_class(), size);
        }
        inline app::SceneFPSTest_State__Enum__Array* create_array(const std::vector<app::SceneFPSTest_State__Enum*>& items) {
            return il2cpp::array_new<app::SceneFPSTest_State__Enum__Array>(get_class(), items);
        }
    } // namespace SceneFPSTest_State__Enum
} // namespace app::classes::types
