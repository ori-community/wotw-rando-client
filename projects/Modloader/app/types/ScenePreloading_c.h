#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenePreloading_c__Class.h>
#include <Modloader/app/structs/ScenePreloading_c.h>

namespace app::classes::types {
    namespace ScenePreloading_c {
        inline app::ScenePreloading_c__Class** type_info = (app::ScenePreloading_c__Class**)(modloader::win::memory::resolve_rva(0x04752C78));
        inline app::ScenePreloading_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenePreloading_c__Class>(type_info, "Moon.Timeline", "ScenePreloading", "<>c");
        }
        inline app::ScenePreloading_c* create() {
            return il2cpp::create_object<app::ScenePreloading_c>(get_class());
        }
    } // namespace ScenePreloading_c
} // namespace app::classes::types
