#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISceneComponentTracker__Array {
        namespace {
            inline app::ISceneComponentTracker__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISceneComponentTracker__Array__Class** type_info = &type_info_ref;
        inline app::ISceneComponentTracker__Array__Class* get_class() {
            return il2cpp::get_class<app::ISceneComponentTracker__Array__Class>(type_info, "", "ISceneComponentTracker[]");
        }
        inline app::ISceneComponentTracker__Array* create() {
            return il2cpp::create_object<app::ISceneComponentTracker__Array>(get_class());
        }
    } // namespace ISceneComponentTracker__Array
} // namespace app::classes::types
