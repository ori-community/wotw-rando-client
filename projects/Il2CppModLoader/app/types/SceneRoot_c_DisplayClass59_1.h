#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneRoot_c_DisplayClass59_1 {
        inline app::SceneRoot_c_DisplayClass59_1__Class** type_info = (app::SceneRoot_c_DisplayClass59_1__Class**)(modloader::win::memory::resolve_rva(0x04766A58));
        inline app::SceneRoot_c_DisplayClass59_1__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneRoot_c_DisplayClass59_1__Class>(type_info, "", "SceneRoot", "<>c__DisplayClass59_1");
        }
        inline app::SceneRoot_c_DisplayClass59_1* create() {
            return il2cpp::create_object<app::SceneRoot_c_DisplayClass59_1>(get_class());
        }
    } // namespace SceneRoot_c_DisplayClass59_1
} // namespace app::classes::types
