#pragma once
#include <Modloader/app/structs/ISceneComponentTracker__Array.h>
#include <Modloader/app/structs/ISceneComponentTracker__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISceneComponentTracker__Array {
        inline app::ISceneComponentTracker__Array__Class** type_info() {
            static app::ISceneComponentTracker__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISceneComponentTracker__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISceneComponentTracker__Array__Class* get_class() {
            return il2cpp::get_class<app::ISceneComponentTracker__Array__Class>(type_info(), "", "ISceneComponentTracker[]");
        }
        inline app::ISceneComponentTracker__Array* create() {
            return il2cpp::create_object<app::ISceneComponentTracker__Array>(get_class());
        }
    } // namespace ISceneComponentTracker__Array
} // namespace app::classes::types
