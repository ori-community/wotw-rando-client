#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneRoot_c__Class.h>
#include <Modloader/app/structs/SceneRoot_c.h>

namespace app::classes::types {
    namespace SceneRoot_c {
        inline app::SceneRoot_c__Class** type_info = (app::SceneRoot_c__Class**)(modloader::win::memory::resolve_rva(0x0471C6E0));
        inline app::SceneRoot_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneRoot_c__Class>(type_info, "", "SceneRoot", "<>c");
        }
        inline app::SceneRoot_c* create() {
            return il2cpp::create_object<app::SceneRoot_c>(get_class());
        }
    } // namespace SceneRoot_c
} // namespace app::classes::types
