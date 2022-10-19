#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneComponentTracker_c {
        inline app::SceneComponentTracker_c__Class** type_info = (app::SceneComponentTracker_c__Class**)(modloader::win::memory::resolve_rva(0x04791148));
        inline app::SceneComponentTracker_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneComponentTracker_c__Class>(type_info, "", "SceneComponentTracker", "<>c");
        }
        inline app::SceneComponentTracker_c* create() {
            return il2cpp::create_object<app::SceneComponentTracker_c>(get_class());
        }
    } // namespace SceneComponentTracker_c
} // namespace app::classes::types
