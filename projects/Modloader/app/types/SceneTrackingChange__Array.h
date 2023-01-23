#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneTrackingChange__Array__Class.h>
#include <Modloader/app/structs/SceneTrackingChange__Array.h>

namespace app::classes::types {
    namespace SceneTrackingChange__Array {
        namespace {
            inline app::SceneTrackingChange__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneTrackingChange__Array__Class** type_info = &type_info_ref;
        inline app::SceneTrackingChange__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneTrackingChange__Array__Class>(type_info, "Moon.EditorTools.SceneTracking", "SceneTrackingChange[]");
        }
        inline app::SceneTrackingChange__Array* create() {
            return il2cpp::create_object<app::SceneTrackingChange__Array>(get_class());
        }
    } // namespace SceneTrackingChange__Array
} // namespace app::classes::types
