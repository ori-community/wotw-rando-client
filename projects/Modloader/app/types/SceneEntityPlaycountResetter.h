#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneEntityPlaycountResetter {
        inline app::SceneEntityPlaycountResetter__Class** type_info = (app::SceneEntityPlaycountResetter__Class**)(modloader::win::memory::resolve_rva(0x0475C0C0));
        inline app::SceneEntityPlaycountResetter__Class* get_class() {
            return il2cpp::get_class<app::SceneEntityPlaycountResetter__Class>(type_info, "Moon.Timeline.Systems", "SceneEntityPlaycountResetter");
        }
        inline app::SceneEntityPlaycountResetter* create() {
            return il2cpp::create_object<app::SceneEntityPlaycountResetter>(get_class());
        }
    } // namespace SceneEntityPlaycountResetter
} // namespace app::classes::types
