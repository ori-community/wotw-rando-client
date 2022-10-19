#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneUberStateGroup {
        inline app::SceneUberStateGroup__Class** type_info = (app::SceneUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x047941E0));
        inline app::SceneUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::SceneUberStateGroup__Class>(type_info, "Moon", "SceneUberStateGroup");
        }
        inline app::SceneUberStateGroup* create() {
            return il2cpp::create_object<app::SceneUberStateGroup>(get_class());
        }
        inline app::SceneUberStateGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneUberStateGroup__Array>(get_class(), size);
        }
        inline app::SceneUberStateGroup__Array* create_array(const std::vector<app::SceneUberStateGroup*>& items) {
            return il2cpp::array_new<app::SceneUberStateGroup__Array>(get_class(), items);
        }
    } // namespace SceneUberStateGroup
} // namespace app::classes::types
