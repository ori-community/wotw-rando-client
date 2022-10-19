#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleJsonInstance_PlayFabSimpleJsonCuztomization {
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class** type_info = (app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class**)(modloader::win::memory::resolve_rva(0x0473F168));
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class>(type_info, "PlayFab.Json", "SimpleJsonInstance", "PlayFabSimpleJsonCuztomization");
        }
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* create() {
            return il2cpp::create_object<app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization>(get_class());
        }
    } // namespace SimpleJsonInstance_PlayFabSimpleJsonCuztomization
} // namespace app::classes::types
