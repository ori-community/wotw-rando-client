#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleJsonInstance_PlayFabSimpleJsonCuztomization {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class** type_info;
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class>(type_info, "PlayFab.Json", "SimpleJsonInstance", "PlayFabSimpleJsonCuztomization");
        }
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* create() {
            return il2cpp::create_object<app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization>(get_class());
        }
    } // namespace SimpleJsonInstance_PlayFabSimpleJsonCuztomization
} // namespace app::classes::types
