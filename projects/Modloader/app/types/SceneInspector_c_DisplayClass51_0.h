#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneInspector_c_DisplayClass51_0__Class.h>
#include <Modloader/app/structs/SceneInspector_c_DisplayClass51_0.h>

namespace app::classes::types {
    namespace SceneInspector_c_DisplayClass51_0 {
        inline app::SceneInspector_c_DisplayClass51_0__Class** type_info = (app::SceneInspector_c_DisplayClass51_0__Class**)(modloader::win::memory::resolve_rva(0x04785FD0));
        inline app::SceneInspector_c_DisplayClass51_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneInspector_c_DisplayClass51_0__Class>(type_info, "", "SceneInspector", "<>c__DisplayClass51_0");
        }
        inline app::SceneInspector_c_DisplayClass51_0* create() {
            return il2cpp::create_object<app::SceneInspector_c_DisplayClass51_0>(get_class());
        }
    } // namespace SceneInspector_c_DisplayClass51_0
} // namespace app::classes::types
