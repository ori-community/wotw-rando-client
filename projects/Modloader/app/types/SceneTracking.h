#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneTracking__Class.h>
#include <Modloader/app/structs/SceneTracking.h>

namespace app::classes::types {
    namespace SceneTracking {
        namespace {
            inline app::SceneTracking__Class* type_info_ref = nullptr;
        }
        inline app::SceneTracking__Class** type_info = &type_info_ref;
        inline app::SceneTracking__Class* get_class() {
            return il2cpp::get_class<app::SceneTracking__Class>(type_info, "Moon.EditorTools.SceneTracking", "SceneTracking");
        }
        inline app::SceneTracking* create() {
            return il2cpp::create_object<app::SceneTracking>(get_class());
        }
    } // namespace SceneTracking
} // namespace app::classes::types
