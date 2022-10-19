#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenePreloading_c_DisplayClass2_0 {
        inline app::ScenePreloading_c_DisplayClass2_0__Class** type_info = (app::ScenePreloading_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x0477F618));
        inline app::ScenePreloading_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenePreloading_c_DisplayClass2_0__Class>(type_info, "Moon.Timeline", "ScenePreloading", "<>c__DisplayClass2_0");
        }
        inline app::ScenePreloading_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::ScenePreloading_c_DisplayClass2_0>(get_class());
        }
    } // namespace ScenePreloading_c_DisplayClass2_0
} // namespace app::classes::types
