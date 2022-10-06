#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameController_ProfilingConfiguration__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameController_ProfilingConfiguration__Enum__Class** type_info;
        inline app::GameController_ProfilingConfiguration__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_ProfilingConfiguration__Enum__Class>(type_info, "", "GameController", "ProfilingConfiguration");
        }
        inline app::GameController_ProfilingConfiguration__Enum* create() {
            return il2cpp::create_object<app::GameController_ProfilingConfiguration__Enum>(get_class());
        }
        inline app::GameController_ProfilingConfiguration__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GameController_ProfilingConfiguration__Enum__Array>(get_class(), size);
        }
        inline app::GameController_ProfilingConfiguration__Enum__Array* create_array(const std::vector<app::GameController_ProfilingConfiguration__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::GameController_ProfilingConfiguration__Enum__Array>(get_class(), items);
        }
    } // namespace GameController_ProfilingConfiguration__Enum
} // namespace app::classes::types
