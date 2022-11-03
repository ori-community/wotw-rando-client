#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneRoot_c_DisplayClass82_0 {
        inline app::SceneRoot_c_DisplayClass82_0__Class** type_info = (app::SceneRoot_c_DisplayClass82_0__Class**)(modloader::win::memory::resolve_rva(0x0471BC58));
        inline app::SceneRoot_c_DisplayClass82_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneRoot_c_DisplayClass82_0__Class>(type_info, "", "SceneRoot", "<>c__DisplayClass82_0");
        }
        inline app::SceneRoot_c_DisplayClass82_0* create() {
            return il2cpp::create_object<app::SceneRoot_c_DisplayClass82_0>(get_class());
        }
    } // namespace SceneRoot_c_DisplayClass82_0
} // namespace app::classes::types
