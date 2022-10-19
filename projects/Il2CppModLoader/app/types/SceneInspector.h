#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneInspector {
        inline app::SceneInspector__Class** type_info = (app::SceneInspector__Class**)(modloader::win::memory::resolve_rva(0x0471F8D0));
        inline app::SceneInspector__Class* get_class() {
            return il2cpp::get_class<app::SceneInspector__Class>(type_info, "", "SceneInspector");
        }
        inline app::SceneInspector* create() {
            return il2cpp::create_object<app::SceneInspector>(get_class());
        }
    } // namespace SceneInspector
} // namespace app::classes::types
