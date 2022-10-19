#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneUberStateCondition {
        inline app::SceneUberStateCondition__Class** type_info = (app::SceneUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x047928A0));
        inline app::SceneUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::SceneUberStateCondition__Class>(type_info, "", "SceneUberStateCondition");
        }
        inline app::SceneUberStateCondition* create() {
            return il2cpp::create_object<app::SceneUberStateCondition>(get_class());
        }
    } // namespace SceneUberStateCondition
} // namespace app::classes::types
