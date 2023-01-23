#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneManagerScene__Array__Class.h>
#include <Modloader/app/structs/SceneManagerScene__Array.h>

namespace app::classes::types {
    namespace SceneManagerScene__Array {
        namespace {
            inline app::SceneManagerScene__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneManagerScene__Array__Class** type_info = &type_info_ref;
        inline app::SceneManagerScene__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneManagerScene__Array__Class>(type_info, "", "SceneManagerScene[]");
        }
        inline app::SceneManagerScene__Array* create() {
            return il2cpp::create_object<app::SceneManagerScene__Array>(get_class());
        }
    } // namespace SceneManagerScene__Array
} // namespace app::classes::types
